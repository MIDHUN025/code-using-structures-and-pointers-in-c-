#include <stdio.h>
#include <stdlib.h>
struct product
{
char name[50];
char Id[50];
float price;
};
int main()
{
struct product *pdt;
int n;
printf("\nEnter the number of product:");
scanf("%d",&n);
pdt = (struct product *)malloc(n * sizeof(struct product));
for(int i = 0;i < n ; i++ )
{
printf("\nEnter details of product %d",i+1);
printf("\n\nProduct Name:");
scanf("%s",&(pdt+i)->name);
printf("\nProduct Id:");
scanf("%s",&(pdt+i)->Id);
printf("\nPrice:");
scanf("%f",&(pdt+i)->price);
}
for (int i = 0 ; i < n ; i++)
{
printf("\n\nProduct details:");
printf("\nProduct Name:%s,\nProduct ID:%s,\nProduct
price:%f",(pdt+i)->name,(pdt+i)->Id,(pdt+i)->price);
}
float totalCost = 0;
for (int i = 0; i < n; i++)
{
totalCost += (pdt + i)->price;
}
printf("\n\nTotal cost for all products: %f\n", totalCost);
float maxprice = pdt->price;
float minprice = pdt->price;
int maxi = 0, mini = 0;
for (int i = 1; i < n; i++)
{
if ((pdt + i)->price > maxprice)
{
maxprice = (pdt + i)->price;
maxi = i;
}
if ((pdt + i)->price < minprice)
{
minprice = (pdt + i)->price;
mini = i;
}
}
printf("\n\nMost expensive product:\n");
printf("Name: %s, ID: %s, Price: %f\n", (pdt + maxi)->name, (pdt + maxi)->Id, maxprice);
printf("\nLeast expensive product:\n");
printf("Name: %s, ID: %s, Price: %f\n", (pdt + mini)->name, (pdt + mini)->Id, minprice);
free(pdt);
return 0;
}