#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include "slalib.h"

int main(int argc, char const *argv[])
{
	const struct timespec ts = {0};

	int rv;
	struct tm gmt = {0};
	double mjd;

	if (gmtime_r(&ts.tv_sec, &gmt)==NULL) { return 1; }

	slaCaldj(gmt.tm_year+1900, gmt.tm_mon+1, gmt.tm_mday, &mjd, &rv);
	if (rv!=0) { return 1; }
	return 0;
}
