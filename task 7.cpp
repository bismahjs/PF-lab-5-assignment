#include<stdio.h>
int main(){
int Rating;
printf("Enter rating for movie 'The Lion King' on a scale to 1-5: \n");
scanf ("%d", &Rating);
if(Rating==5){
printf("Excellent");
}
else if(Rating==4){
printf ("Good");
}
else if(Rating==3){

printf ("Average");
}
else if(Rating==2){
printf ("Poor");
}
else if(Rating==1){
printf("Terrible");
}
else{
printf ("Can't say anything");
}
return 0;
}
