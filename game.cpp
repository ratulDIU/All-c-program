#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include <string.h>
#include<conio.h>
#include<unistd.h>
void gotoxy(int x, int y)
{
    static HANDLE h = NULL;
    if(!h)
        h= GetStdHandle(STD_OUTPUT_HANDLE);
    COORD c= {x,y};
    SetConsoleCursorPosition(h,c);
}


struct login
{
    char fname[100];
    char lname[20];
    char username[20];
    char password[20];

};

void registe()
{
    FILE *log;
    log = fopen("login12.txt", "a");
    struct login l;
    printf("|----------------------------------------------------------------------------------------------------------------------|\n");
    printf("|.........................................|| Welcome to the Quiz Game ||...............................................|\n");
    printf("|----------------------------------------------------------------------------------------------------------------------|\n");
    gotoxy(48,8);
    printf("Registration Information\n");
    gotoxy(47,9);
    printf("---------------------------\n");
    gotoxy(48,11);
    printf("Enter first name: ");
    scanf("%s", l.fname);
    gotoxy(48,12);
    printf("Enter last name: ");
    scanf("%s", l.lname);
    gotoxy(48,13);
    printf("Enter username: ");
    scanf("%s", l.username);
    gotoxy(48,14);
    printf("Enter password: ");
    scanf("%s", l.password);
    fwrite(&l, sizeof(struct login), 1, log);
    fclose(log);
    gotoxy(46,17);
    printf("Your user name is UserID\n");
    gotoxy(42,18);
    printf("Now login with UserID and Password\n");
    gotoxy(45,21);
    printf("Press any key to continue...");
    getch();
    system("CLS");
    printf("|----------------------------------------------------------------------------------------------------------------------|\n");
    printf("|.........................................|| Welcome to the Quiz Game ||...............................................|\n");
    printf("|----------------------------------------------------------------------------------------------------------------------|\n");
    login();
}


void login()
{
    char username[20];
    char password[20];
    FILE *log;
    log = fopen("login12.txt", "r");
    struct login l;
    int found = 0;
    printf("|----------------------------------------------------------------------------------------------------------------------|\n");
    printf("|.........................................|| Welcome to the Quiz Game ||...............................................|\n");
    printf("|----------------------------------------------------------------------------------------------------------------------|\n");
    gotoxy(48,8);
    printf("Login Information\n");
    gotoxy(47,9);
    printf("-------------------\n");
    gotoxy(48,11);
    printf("User ID: ");
    scanf("%s", username);
    gotoxy(48,12);
    printf("Password: ");
    scanf("%s", password);

    while (fread(&l, sizeof(struct login), 1, log))
    {
        if (strcmp(username, l.username) == 0 && strcmp(password, l.password) == 0)
        {
            found = 1;

            break;

        }

    }

    fclose(log);
    if (found==1)
    {
        system("CLS");
        printf("|----------------------------------------------------------------------------------------------------------------------|\n");
        printf("|.........................................|| Welcome to the Quiz Game ||...............................................|\n");
        printf("|----------------------------------------------------------------------------------------------------------------------|\n");


        gotoxy(47,10);
        printf("Login Successful\n\n");
        gotoxy(45,12);
        printf("Please wait...Loading...\n");
        for(int i=35; i<=80; i++)
        {
            Sleep(80);
            gotoxy(i,14);
            printf("%c",219);
            fflush(stdout);
        }

        system("CLS");
        usleep(10000);
        printf("|----------------------------------------------------------------------------------------------------------------------|\n");
        printf("|.........................................|| Welcome to the Quiz Game ||...............................................|\n");
        printf("|----------------------------------------------------------------------------------------------------------------------|\n");


    }
    else
    {


        system("cls");

        printf("|----------------------------------------------------------------------------------------------------------------------|\n");
        printf("|.........................................|| Welcome to the Quiz Game ||...............................................|\n");
        printf("|----------------------------------------------------------------------------------------------------------------------|\n");

        gotoxy(45,10);
        printf("Incorrect UserID or Password\n");

        printf("\n");
        gotoxy(39,12);
        printf("Please enter correct UserID or password\n\n\n");
        exit(0);
    }
}


int main()
{

    int choice;
    printf("|----------------------------------------------------------------------------------------------------------------------|");
    printf("|.........................................|| Welcome to the Quiz Game ||...............................................|");
    printf("|----------------------------------------------------------------------------------------------------------------------|");

    gotoxy(48,9);
    printf("Press '1' for register\n");
    gotoxy(48,10);
    printf("Press '2' for login\n");
    gotoxy(48,12);
    printf("Enter your choice ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        system("CLS");
        registe();
    }
    else if (choice == 2)
    {
        system("CLS");
        login();
    }


    int i;
    int r,ans1,ans2,ans3,ans4,ans5,ans6,ans7,ans8,ans9,ans10;
    int point1=0,point2=0,point3=0,point4=0,point5=0,point6=0,point7=0,point8=0,point9=0,point10=0;
    int point01,point02,point03,point04,point05,point06,point07,point08,point09,point010;

    system("Color 3E");
    gotoxy(38,5);
    printf("|**************************************|\n");
    gotoxy(38,6);
    printf("| => Game Developer's Information:     |\n");
    gotoxy(38,7);
    printf("|    Name: Minhaz Ahmmed               |");
    gotoxy(38,8);
    printf("|    B.Sc in CSE                       |\n                                      |    from IIUC                         |\n                                      |    ID: C231011                       |\n                                      |--------------------------------------|            \n                                      |--------------------------------------|\n                                      | => Co-Developers:                    |\n                                      |    Salah Uddin Mahi, Ayman Abrar,    |\n                                      |          Md. Nazim Uddin             |\n");
    printf("                                      |--------------------------------------|\n\n\n");
    printf("\n\n\n\n");
    gotoxy(42,18);
    printf("Press any key to continue...");
    getch();

    gotoxy(40,20);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    gotoxy(40,21);
    printf("|>> Press 1 to start the game |\n");
    gotoxy(40,22);
    printf("|>> Press 0 to quit the game  |\n");
    gotoxy(40,23);
    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n\n");
    gotoxy(40,24);
    printf("Enter your choice : ");
    scanf("%d",&i);
    if(i==1)
    {
        gotoxy(40,26);
        printf("The game has started...\n\n");
        printf("========================================================================================================================\n");
    }
    else if(i==0)
    {
        gotoxy(49,26);
        printf("The game has ended...\n\n");
    }
    else
    {
        gotoxy(55,26);
        printf("Invalid!!!\n\n");
    }


    if(i==1)
    {

        printf("\n");
        printf("                                01. Which operator is used for taking input from the user in C?\n\n");

        printf("                                1) input\n");

        printf("                                2) read\n");

        printf("                                3) print\n");

        printf("                                4) scanf\n");

        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans1);
        printf("\n");
        if(ans1==4)
        {

            printf("                                Correct Answer\n");
            point1=5;

            printf("                                Congratulations! You have scored %d points.\n",point1);
            printf("========================================================================================================================\n");
        }
        else
        {
            ;
            printf("                                Wrong Answer\n");
            point01=0 ;

            printf("                                Oops! You have scored %d point.\n",point01);

            printf("                                The correct answer is: 4) scanf\n");
            printf("========================================================================================================================\n");
        }
        printf("\n");

        printf("                                02. Which of the following is an example of a web browser?\n\n");

        printf("                                1) Adobe Photoshop\n");

        printf("                                2) Microsoft Excel\n");

        printf("                                3) Google\n");


        printf("                                4) Microsoft Word\n");

        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans2);
        printf("\n");
        if(ans2==3)
        {

            printf("                                Correct Answer\n");
            point2=5;

            printf("                                Congratulations! You have scored %d points.\n",point2);
            printf("========================================================================================================================\n");
        }
        else
        {

            printf("                                Wrong Answer\n");
            point02=0;

            printf("                                Oops! You have scored %d point.\n",point02);

            printf("                                The correct answer is: 3) Google\n");
            printf("========================================================================================================================\n");
        }

        printf("\n");

        printf("                                03. What is the correct way to write a single-line comment in C?\n\n");


        printf("                                1) /*comment*/\n");

        printf("                                2) //comment\n");

        printf("                                3) <!--comment-->\n");

        printf("                                4) **comment**\n");

        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans3);
        printf("\n");
        if(ans3==2)
        {

            printf("                                Correct Answer\n");
            point3=5;

            printf("                                Congratulations! You have scored %d points.\n",point3);
            printf("========================================================================================================================\n");
        }
        else
        {

            printf("                                Wrong Answer\n");
            point03=0;

            printf("                                Oops! You have scored %d point.\n",point03);

            printf("                                The correct answer is: 2) //comment\n");
            printf("========================================================================================================================\n");
        }

        printf("\n");

        printf("                                04. What is the function of a firewall in network security?\n\n");

        printf("                                1) To protect against viruses\n");

        printf("                                2) To block unwanted websites\n");

        printf("                                3) To prevent unauthorized access\n");

        printf("                                4) To improve internet speed\n");

        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans4);
        printf("\n");
        if(ans4==3)
        {

            printf("                                Correct Answer\n");
            point4=5;

            printf("                                Congratulations! You have scored %d points.\n",point4);
            printf("========================================================================================================================\n");
        }
        else
        {

            printf("                                Wrong Answer\n");
            point04=0;

            printf("                                Oops! You have scored %d point.\n",point04);

            printf("                                The correct answer is: 3) To prevent unauthorized access\n");
            printf("========================================================================================================================\n");
        }

        printf("\n");

        printf("                                05. What is the output of the following code snippet?\n\n");
        printf("                                              #include<stdio.h>\n                                              int main() {\n                                              int x=10;\n                                              x++;\n                                        ");
        printf("%s","      printf(\"%d\",x);\n                                              return 0;\n                                              }\n\n");
        printf("                                1) 10\n");
        printf("                                2) 11\n");
        printf("                                3) 12\n");
        printf("                                4) Error\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans5);
        printf("\n");
        if(ans5==2)
        {
            printf("                                Correct Answer\n");
            point5=5;
            printf("                                Congratulations! You have scored %d points.\n",point5);
            printf("========================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point05=0;
            printf("                                Oops! You have scored %d point.\n",point05);
            printf("                                The correct answer is: 2) 11\n");
            printf("========================================================================================================================\n");
        }

        printf("\n");

        printf("                                06. What does the term 'URL' stand for??\n\n");
        printf("                                1) Universal Resource Locator\n");
        printf("                                2) Uniform Resource Locator\n");
        printf("                                3) Universal Reference Locator\n");
        printf("                                4) Uniform Reference Locator\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans6);
        printf("\n");
        if(ans6==2)
        {
            printf("                                Correct Answer\n");
            point6=5;
            printf("                                Congratulations! You have scored %d points.\n",point6);
            printf("========================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point06=0;
            printf("                                Oops! You have scored %d point.\n",point06);
            printf("                                The correct answer is: 2) Uniform Resource Locator\n");
            printf("========================================================================================================================\n");
        }

        printf("\n");


        printf("                                07. What is the correct way to end a C statement?\n\n");
        printf("                                1) ;\n");
        printf("                                2) :\n");
        printf("                                3) .\n");
        printf("                                4) ,\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans7);
        printf("\n");
        if(ans7==1)
        {
            printf("                                Correct Answer\n");
            point7=5;
            printf("                                Congratulations! You have scored %d points.\n",point7);
            printf("========================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point07=0;
            printf("                                Oops! You have scored %d point.\n",point07);
            printf("                                The correct answer is: 1) ;\n");
            printf("========================================================================================================================\n");
        }
        printf("\n");

        printf("                                08. What does CPU stand for?\n\n");
        printf("                                1) Central Processing Unit\n");
        printf("                                2) Computer Processing Unit\n");
        printf("                                3) Control Processing Unit\n");
        printf("                                4) Central Power Unit\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans8);
        printf("\n");
        if(ans8==1)
        {
            printf("                                Correct Answer\n");
            point8=5;
            printf("                                Congratulations! You have scored %d points.\n",point8);
            printf("========================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point08=0;
            printf("                                Oops! You have scored %d point.\n",point08);
            printf("                                The correct answer is: 1) Central Processing Unit\n");
            printf("========================================================================================================================\n");

        }

        printf("\n");

        printf("                                09. What is the index of the last element in an array with 10 elements?\n\n");
        printf("                                1) 10\n");
        printf("                                2) 9\n");
        printf("                                3) 0\n");
        printf("                                4) 1\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans9);
        printf("\n");
        if(ans9==2)
        {
            printf("                                Correct Answer\n");
            point9=5;
            printf("                                Congratulations! You have scored %d points.\n",point9);
            printf("========================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point09=0;
            printf("                                Oops! You have scored %d point.\n",point09);
            printf("                                The correct answer is: 2) 9\n");
            printf("========================================================================================================================\n");
        }
        printf("\n");
        printf("                                10. What is the correct way to include the standered input/output library in C?\n\n");
        printf("                                1) #include<stdio.h>\n");
        printf("                                2) #include<input.h>\n");
        printf("                                3) #include<iostream>\n");
        printf("                                4) #include<output.h>\n");
        printf("                                Enter Your Answer (Input only integer number) : ");

        scanf("%d",&ans10);
        printf("\n");
        if(ans10==1)
        {
            printf("                                Correct Answer\n");
            point10=5;
            printf("                                Congratulations! You have scored %d points.\n",point10);
            printf("========================================================================================================================\n");
        }
        else
        {
            printf("                                Wrong Answer\n");
            point010=0;
            printf("                                Oops! You have scored %d point.\n",point010);
            printf("                                The correct answer is: 1) #include<stdio.h>\n");
            printf("========================================================================================================================\n");
        }


        system("CLS");
        printf("|----------------------------------------------------------------------------------------------------------------------|");
        printf("|.........................................|| Welcome to the Quiz Game ||...............................................|");
        printf("|----------------------------------------------------------------------------------------------------------------------|");

        printf("\n\n\n");
        printf("                                           Your result is processing...\n                                                 Please wait...\n");
        sleep(5);
        int total;
        system("CLS");

        printf("|----------------------------------------------------------------------------------------------------------------------|");
        printf("|.........................................|| Welcome to the Quiz Game ||...............................................|");
        printf("|----------------------------------------------------------------------------------------------------------------------|");


        total=point1+point2+point3+point4+point5+point6+point7+point8+point9+point10;
        printf("\n\n\n");
        printf("                                           |-------------------------|\n");
        printf("                                           |Your Total Score is = %d\ |\n",total);
        printf("                                           |-------------------------|\n");

        if(total<=10)
        {
            printf("\n");
            printf("               |.......................................................................................|\n");
            printf("               |Don't worry. Failure is a part of the process. You just learn to pick yourself back up.|\n");
            printf("               |                              Try your best next time.                                 |\n");
            printf("               |.......................................................................................|\n");
            printf("\n\n");
        }
        else if(total>10&&total<=40)
        {
            printf("\n");
            printf("                  |..............................................................................|\n");
            printf("                  |                             Great!! Nice Try.                                |\n");
            printf("                  |..............................................................................|\n");
            printf("\n\n");
        }
        else if(total>40)
        {
            printf("\n");
            printf("                  |.......................................................................................|\n");
            printf("                  |            Congratulations!! Your hard work and perseverance have paid off.           |\n");
            printf("                  |.......................................................................................|\n");
            printf("\n\n");

        }
    }
}

