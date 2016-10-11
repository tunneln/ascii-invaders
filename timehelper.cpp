#ifndef TIME_HELPER
#define TIME_HELPER

#include <sys/time.h>
#include <ncurses.h>	// the ncurses library, only for nsleep

#ifdef __APPLE__
	typedef uint64_t utime64;
#else
	typedef unsigned long long int utime64;
#endif
#ifdef __APPLE__
#include <mach/mach_time.h>  // for nanosec machine times
	#define UTIME_MAX UINT64_MAX
#else
	# ifndef ULLONG_MAX
		# define ULLONG_MAX (__LONG_LONG_MAX__ * 2ULL + 1)
	# endif
	#define UTIME_MAX ULLONG_MAX
#endif


inline utime64 localClock(){
#if __APPLE__
	return mach_absolute_time();
#else
	struct timeval tv;
	gettimeofday(&tv, NULL);
	return (((utime64)tv.tv_sec) *1000000 + tv.tv_usec) *1000;
#endif
}

int getElapsedTime(){
	static utime64 previous_time = 0;
	utime64 curt = localClock();
	if (previous_time == 0) previous_time = curt;
	utime64 elapsed;
#ifdef __APPLE__
	static mach_timebase_info_data_t	sTimebaseInfo;
	if ( sTimebaseInfo.denom == 0 ) {
		(void) mach_timebase_info(&sTimebaseInfo);
	}
	elapsed = (curt - previous_time ) *
		sTimebaseInfo.numer / sTimebaseInfo.denom;
#else
	elapsed = (curt - previous_time);
#endif
	previous_time = curt;
	return elapsed/1000000;
}

void nsleep(int milliseconds){
	if (milliseconds <= 0)
		return;
	utime64 wantedTime = localClock() + milliseconds*1000000;

	while ( localClock() < wantedTime)
		usleep(1000);

	flushinp(); /// clear the keypress buffer
}
#endif
