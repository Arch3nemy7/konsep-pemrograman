#include <stdio.h>
int r, q = 9;
go_crazy(int *, int *);
main() {
int *pt1 = &q;
int *pt2 = &q;
r = go_crazy(pt1, pt2);
printf("q=%d, r=%d, *pt1=%d, *pt2=%d\n", q, r, *pt1, *pt2);
pt2 = &r;
go_crazy(pt2, pt1);
printf("q=%d, r=%d, *pt1=%d, *pt2=%d\n", q, r, *pt1, *pt2);
}
go_crazy(int *p1, int *p2){
int x = 7;
r = 15;
*p2 = *p1 * 3;
p1 = &x;
return *p1 / 2;
}