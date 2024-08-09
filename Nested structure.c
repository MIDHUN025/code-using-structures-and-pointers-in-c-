#include <stdio.h>
 struct friends {
 char name[20];
 char pet[20];
 int pn;
 };
 struct type {
 char tof[20];
 char nocf[20];
 char pvt[20];
 };
 int main() {
 int n;
 printf("Enter the number of friends: ");
 scanf("%d", &n);
 struct friends fnd[n];
 struct type tp[n];
 for (int i = 0; i < n; i++) {
 printf("\nEnter details for Friend %d\n", i+1);
 printf("Enter Friend name: ");
 scanf("%19s", fnd[i].name);
 printf("Enter Pet name: ");
 scanf("%19s", fnd[i].pet);
 printf("Enter phone number: ");
 scanf("%d", &fnd[i].pn);
 printf("Enter the type of friend: ");
 scanf("%19s", tp[i].tof);
 printf("Enter the Name of common friends: ");
 scanf("%19s", tp[i].nocf);
 printf("Enter the places visited together: ");
 scanf("%19s", tp[i].pvt);
 }
 printf("\n%-5s %-20s %-20s %-15s %-20s %-20s %-20s\n", "S.No", "Name", "Pet Name",
 "Phone No.", "Type of Friend", "Common Friends", "Places Visited");
 for (int i = 0; i < n; i++) {
 printf("%-5d %-20s %-20s %-15d %-20s %-20s %-20s\n",
 i + 1,
 fnd[i].name,
 fnd[i].pet,
 fnd[i].pn,
 tp[i].tof,
 tp[i].nocf,
 tp[i].pvt);
 }
 return 0;
 }