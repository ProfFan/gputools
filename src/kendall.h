#ifndef _KENDALL_H_
#define _KENDALL_H_

void masterKendall(const float * x,  size_t nx, 
                   const float * y, size_t ny,
                   size_t sampleSize,
                   double * results);

#endif /* _KENDALL_H_ */
