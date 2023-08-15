#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <sys/random.h>
#include <time.h>

#define COLOR_BOLD              "\e[1m"
#define COLOR_OFF               "\e[m"
#define COLOR_BOLD_BLUE         "\e[1;34m"

#define BrightBlack              "\e[30;1m"
#define BrightRed                "\e[31;1m"
#define BrightGreen              "\e[32;1m"
#define BrightYellow             "\e[33;1m"
#define BrightMagenta            "\e[35;1m"


#define WIDTH 70
#define HEIGHT 50
#define X WIDTH/2
#define Y HEIGHT/2
#define XMAX WIDTH-X-1
#define XMIN -(WIDTH-X)
#define YMAX HEIGHT-Y
#define YMIN -(HEIGHT-Y)+1

void calculator();                          //function for calculator
float add(int num[], int n);                //function for addition - calc
int multiply(int num[], int n);             //function for multiplication - calc
float average(int num[], int n);            //function for average - calc

void minigame1(int maximumVariable);        //random variable input
void menu1(int maximumVariable);            //menu for minigame 1

void mainMenu();                            //main menu
void rules();                               //rules for minigame
void ret();                                 //function to return to main menu at end of each function

void menu2();                               //function for graph
char grid[HEIGHT][WIDTH];                   //function for the grid

int plot(int x, int y);                     
void init_grid(void);                       //grid input
void show_grid(void);                       //grid output
void graph1();                              //sin
void graph2();                              //cos
void graph3();                              //tan
void graph4();                              //cot
void graph5();                              //sec
void graph6();                              //cosec

void end();



int main (){

    printf("Welcome to this simple project created by ");
    printf(COLOR_BOLD "Aman Goel" COLOR_OFF);
    printf(". Hope you like it...\n\n\n");
    
    char name[100];
    printf(BrightYellow"Enter your name : "COLOR_OFF);
    fgets(name, 100, stdin);
    
    printf(COLOR_BOLD_BLUE"\nWelcome %s\nGood to have you on board...\nI have carefully selected some tasks that I think you might like\n\n"COLOR_OFF,name);
    
    mainMenu();
    
    
    
    return 0;
}



void end(){
    
    time_t t;
    time(&t);
    
    printf(BrightYellow"Thank you so much for taking your precious time out. It was a really nice time having you with us and hope you have a beautiful day ahead\n\n\n"COLOR_OFF);
    printf(COLOR_BOLD"\t\t\t\t\t\t\tAman Goel\n\t\t\t\t\t\t\tRA2211003011296\n\t\t\t\t\t\t\t%s"COLOR_OFF,ctime(&t));
}






void mainMenu(){
    
    printf(COLOR_BOLD"\t\t\tMAIN MENU"COLOR_OFF);
    
    printf("\n1.Basic Calculator\n2.Guess The Number\n3.Graphs\n4.Exit\n" COLOR_OFF);
    
    int op1;
    printf("Enter any of the given options you would like to access: ");
    scanf("%d",&op1);
    
    switch(op1){
        case 1: calculator();
                break;
        case 2: menu1(100);
                break;
        case 3: menu2();
                break;
        case 4: end();
                break;
        default:printf(COLOR_BOLD"ERROR...Please type a valid option\n\n"COLOR_OFF);
                mainMenu();
                break;
    } 
}





void calculator (){
    
    int n;
    printf("\nHow many number(s) do you have in your mind : ");
    scanf("%d",&n);
    
    int num[n];
    
    for (int i=0; i<n; i++){
        printf("Enter number %d : ",i+1);
        scanf("%d",&num[i]);
    }
    
    printf(COLOR_BOLD_BLUE"Well now that you have entered your desired numbers, lets see what operation is on your mind.\n\n1.Addition\n2.Multiplication\n3.Average of all numbers\n4.Exit"COLOR_OFF);
    printf("\nEnter your choice: ");
    int op2;
    
    scanf("%d",&op2);
    
    switch (op2){
        case 1: printf(BrightMagenta"\nThe sum of the numbers are %0.1f\n"COLOR_OFF ,add(num,n));
                break;
        case 2: printf(BrightMagenta"\nThe multiplication of all the numbers are %d\n"COLOR_OFF ,multiply(num,n));
                break;
        case 3: printf(BrightMagenta"\nThe average of all numbers are %0.4f\n"COLOR_OFF ,average(num,n)); 
                break;
        case 4: mainMenu();
        default: printf(BrightRed"ERROR... Enter a valid number"COLOR_OFF);
                break;
    }
    ret();
    
}





float add(int num[],int n){  //function to add the numbers
    
    float sum=0;
    for(int i=0; i<n; i++){
        sum=sum+num[i];
    }
    return sum;
    
}





int multiply(int num[], int n){    //function to multiply the numbers
    
    int product=1;
    for (int i=0; i<n; i++){
        product=product*num[i];
    }
    return product;
    
}





float average(int num[], int n){                                    //function for average of all
    
    float average= add(num,n)/n;
    return average;
    
}






void menu1(int maximumVariable){
    int menu;
    printf(BrightRed"\n\n\t\t\tMINIGAME MENU"COLOR_OFF);
    printf("\n\n1.Rules of the game\n2.Start game\n3.Exit to main menu\n\n");
    printf("Enter an option: ");
    scanf("%d",&menu);
    switch(menu){
        case 1: rules();
                break;
        case 2: minigame1(100);
                break;
        case 3: mainMenu();
                break;
        defaut: printf("Enter a valid number...");
                break;
    }
    ret();
}






void minigame1(int maximumVariable){                                   //input a random number 
    
    int randomVariable;
    getrandom(&randomVariable, sizeof(int), GRND_NONBLOCK);
    int num;
    
    if (randomVariable<0) {
        num = (-1 * randomVariable % maximumVariable + 1);      //it might have negative so to make it positive
    }
    else{
        num = (randomVariable % maximumVariable + 1);           //positive
    }
    
    int number, guess;
    number=num;
    
    printf("\nGuess a number between 1 to 100: ");
    
    do {
        
    scanf("%d", &guess);

    if (guess < number) {                                   //for low
      puts(BrightGreen"Well... thats low Guess again..."COLOR_OFF);
    }
    else if (guess > number) {                              //for high
      puts(BrightMagenta"Ooo your guess is high !! Guess again..."COLOR_OFF);
    }
    
    } while (guess != number);                              //until you guess it

    puts(BrightYellow"Wowww you are a GOD... Well played...\n"COLOR_OFF);
  
    printf(COLOR_BOLD_BLUE"\nHOPE you enjoyed this minigame. Do checkout again...\n\n\n"COLOR_OFF);
    
    ret();
    
}






void rules(){
    printf("\n\nThe Rules of the Game are: \n1.This program has thought of a number\n2.Your task is to guess the number in minimum number of tries as possible\n3.All the best...\n\n");
    menu1(100);
}







void ret(){
    printf("\nTo go back to main menu press 1 else press 0\n");
    int p1;
    scanf("%d",&p1);
    if (p1==1){
        mainMenu();
    }
    else {
        end();
    }
}






void menu2 (){
    printf(BrightMagenta"\n\t\t\tGRAPH MENU\n"COLOR_OFF);
    printf("\nWelcome to this section of the code. Lets get into maths. We all have seen the complications of maths and well we know how much we forget the graphs of sin cos and tan. In this i have made it such that you can easily check the graphs of these functions... HAVE FUN!!!\n\n");
    int gh;
    printf("1>Graph of sine function\n2>Graph of cosine function\n3>Graph of tan function\n4>Graph of cot function\n5>Graph of secant function\n6>Graph of cosecant function\n\nKindly enter an option: ");
    scanf("%d",&gh);
    switch (gh){
        case 1: graph1();
                break;
        case 2: graph2();
                break;
        case 3: graph3();
                break;
        case 4: graph4();
                break;
        case 5: graph5();
                break;
        case 6: graph6();
                break;
        default:printf(BrightRed"Kindly enter a correct option."COLOR_OFF);
                break;
    }
    ret();
    
    
}





void graph1(){
    
    float x,y;

    init_grid();
    for(x=-3.14159;x<=3.14159;x+=0.1)
    {
        y = sin(x);
        plot(rintf(x*10),rintf(y*8));
    }
    show_grid();
    
}





void graph2(){
    
    float x,y;

    init_grid();
    for(x=-3.14159;x<=3.14159;x+=0.1)
    {
        y = cos(x);
        plot(rintf(x*10),rintf(y*8));
    }
    show_grid();
    
}






void graph3(){
    
    float x,y;

    init_grid();
    for(x=-3.14159;x<=3.14159;x+=0.1)
    {
        y = tan(x);
        plot(rintf(x*10),rintf(y*8));
    }
    show_grid();
    
}







void graph4(){
    
    float x,y;

    init_grid();
    for(x=-3.14159;x<=3.14159;x+=0.1)
    {
        y = 1/tan(x);
        plot(rintf(x*10),rintf(y*8));
    }
    show_grid();
    
}







void graph5(){
    
    float x,y;

    init_grid();
    for(x=-3.14159;x<=3.14159;x+=0.1)
    {
        y = 1/cos(x);
        plot(rintf(x*10),rintf(y*8));
    }
    show_grid();
    
}







void graph6(){
    
    float x,y;

    init_grid();
    for(x=-3.14159;x<=3.14159;x+=0.1)
    {
        y = 1/sin(x);
        plot(rintf(x*10),rintf(y*8));
    }
    show_grid();
    
}







int plot(int x, int y)
{
    if( x > XMAX || x < XMIN || y > YMAX || y < YMIN )
        return(-1);

    grid[Y-y][X+x] = '&';
    return(1);
}







void init_grid(void)
{
    int x,y;

    for(y=0;y<HEIGHT;y++)
        for(x=0;x<WIDTH;x++)
            grid[y][x] = ' ';
    for(y=0;y<HEIGHT;y++)
        grid[y][X] = '|';
    for(x=0;x<WIDTH;x++)
        grid[Y][x] = '-';
    grid[Y][X] = '+';
}







void show_grid(void)
{
    int x,y;

    for(y=0;y<HEIGHT;y++)
    {
        for(x=0;x<WIDTH;x++)
            putchar(grid[y][x]);
        putchar('\n');
    }
}




