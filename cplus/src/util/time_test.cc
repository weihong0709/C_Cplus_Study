#include <sys/time.h>
#include <sys/timeb.h>
#include "stdio.h"
#include <iostream>
using namespace std;
void testTime(){
    long i = 1000000L;
    clock_t start,finish;
    double duration;
    start = clock();
    while (i--)
    {
        
    }
    finish = clock();
    duration = (double)(finish-start)/CLOCKS_PER_SEC;
    printf("duration:%f\n",duration);


   
    struct timeval tv;
    struct timezone tz;
    gettimeofday(&tv,&tz);
    cout<<"tv_sec:"<<tv.tv_sec<<endl;
    cout<<"tv_usec:"<<tv.tv_usec<<endl;

    struct timeb starttwo, endtwo;
	ftime(&starttwo);
	srand((unsigned)time(0));
	for (int i = 0; i < 1700; i++)
	{
     //cout<<"temp"<<endl;
     int j=0;
     j++;
	}
	ftime(&endtwo);
	cout << "cost time(ms):" << (endtwo.time - starttwo.time) * 1000 + (endtwo.millitm - starttwo.millitm) << endl;

    struct timeval tv2;
    struct timezone tz2;
    gettimeofday(&tv2,&tz2);
    cout<<"tv2_sec:"<<tv2.tv_sec<<endl;
    cout<<"tv2_usec:"<<tv2.tv_usec<<endl;

}