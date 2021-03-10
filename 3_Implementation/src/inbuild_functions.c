#include<inbuild_functions.h>
float inbuild_functions(int func)
{
if(func==1)
     {   float radius,length,breadth,sideOne,sideTwo,sideThree,area,perimeter,s;
         int figure;
         printf("Choose the figure :\n");

         printf("1>Circle\n2>Triangle\n3>Reactangle\n");

         scanf("%d",&figure);

         if(figure==1)
         {
                 int ap;
                 printf("1>Area 2>Perimeter\n");
                 scanf("%d",&ap);
                 if(ap==1)
                 {
                 printf("Radius:");
                 scanf("%f",&radius);
                 area = M_PI * radius * radius;
                 printf("%f",area);
                 return 0;
                 }
                 else
                 {
                 printf("Radius:");
                 scanf("%f",&radius);
                 perimeter=2*M_PI*radius;
                 printf("%f",perimeter);
                 return 0;
                 }
         }
         else if(figure==2)
         {
                 int ap;
                 printf("1>Area 2>Perimeter\n");
                 scanf("%d",&ap);
                 if(ap==1)
                 {
                 printf("Enter the length of three sides of triangle\n");
                 scanf("%f %f %f", &sideOne, &sideTwo, &sideThree);
                 s = (sideOne + sideTwo + sideThree)/2;
                 area = sqrt(s*(s-sideOne)*(s-sideTwo)*(s-sideThree));
                 printf("%f",area);
                 return 0;
                 }
                 else
                 {
                 printf("Enter the length of three sides of triangle\n");
                 scanf("%f %f %f", &sideOne, &sideTwo, &sideThree);
                 perimeter = sideOne+sideTwo+sideThree;
                 printf("%f",perimeter);
                 return 0;
                 }
         }
         else if(figure==3)
         {
                 int ap;
                 printf("1>Area 2>Perimeter\n");
                 scanf("%d",&ap);
                 if(ap==1)
                 {
                 printf("Enter the value of length and breadth\n");
                 scanf("%f %f",&length,&breadth);
                 area=length*breadth;
                 printf("%f",area);
                 return 0;
                 }
                 else
                 {
                 printf("Enter the value of length and breadth\n");
                 scanf("%f %f",&length,&breadth);
                 perimeter = length+breadth ;
                 printf("%f",perimeter*2);
                 return 0;
                 }

         }
         else
         {
             printf("Invalid Input");
             return 0;
         }

   }
else if(func==2)
{    printf("1>Polar to Cartesian coordinate\n2>Cartesian to Polar\n");
     int conv;
     scanf("%d",&conv);
     if(conv==1)
     {
     float x, y, r, theta;

printf("Enter radius of polar coordinate (r): \n");
scanf("%f", &r);
printf("Enter angle of polar coordinate in degree (theta): \n");
scanf("%f", &theta);

/* Converting theta from degree to radian */
theta = theta * M_PI/180.0;

/* Calculating cartesian coordinate x */
x = r * cos(theta);

/* Calculating cartesian coordinate y */
y = r * sin(theta);

printf("Cartesian coordinates is: (%0.3f, %0.3f)", x, y);
getch();
return(0);
     }
     else
     {
     float x, y, r, theta;

printf("Enter cartesian coordinate x: \n");
scanf("%f", &x);
printf("Enter cartesian coordinate y: \n");
scanf("%f", &y);


/* Calculating r */
r = sqrt(x*x + y*y);

/* Calculating theta in radian */
theta = atan(y/x);

/* Converting theta from degree to radian */
theta = 180.0 * theta/ M_PI;

printf("Polar coordinate is: r = %0.2f and theta = %0.2f in degree", r, theta);
getch(); /* Holds Screen */

return(0);
     }
}
else
         {
             printf("Invalid Input");
             return 0;
         }
}
