#include <stdio.h>
int main(){
int MaxLimit =500, Amount;
printf("Enter withdrawal amount: \n");
scanf ("%d", &Amount);
if(Amount <=MaxLimit && Amount %20==0){
printf ("Withdrawal approved");
}
else {
printf ("Withdrawal denied");
}
return 0;
}
