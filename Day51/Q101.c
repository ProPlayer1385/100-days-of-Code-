/* Q101: Find first and last occurrence of target in a sorted array in O(log n). */
#include <stdio.h>
#define MAX 1000
int firstOccurrence(const int a[], int n, int target)
{
    int left=0,right=n-1,answer=-1;
    while(left<=right){int mid=left+(right-left)/2;if(a[mid]>=target){if(a[mid]==target)answer=mid;right=mid-1;}else left=mid+1;}
    return answer;
}
int lastOccurrence(const int a[], int n, int target)
{
    int left=0,right=n-1,answer=-1;
    while(left<=right){int mid=left+(right-left)/2;if(a[mid]<=target){if(a[mid]==target)answer=mid;left=mid+1;}else right=mid-1;}
    return answer;
}
int main(void)
{
    int n,a[MAX],target;
    printf("Enter number of elements: "); if(scanf("%d",&n)!=1||n<1||n>MAX){printf("Invalid array size.\n");return 1;}
    printf("Enter %d sorted elements: ",n); for(int i=0;i<n;i++)scanf("%d",&a[i]);
    printf("Enter target: "); scanf("%d",&target);
    int first=firstOccurrence(a,n,target),last=lastOccurrence(a,n,target);
    printf("First occurrence = %d\n",first); printf("Last occurrence = %d\n",last);
    return 0;
}
