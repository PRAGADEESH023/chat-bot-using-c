#include <stdio.h>
#include <string.h>
int main()
{
    char question[100];
    printf("Hello There, \nWelcome to our pragadeesh swetha chatbox. How can we help you?\n");
    printf("---------------------------------------------------\n");
START:
    printf("\nType Your Question:\n");
    gets(question);
    if(strcmp(question,"hi") == 0 || strcmp(question,"hello") == 0)
    {
        printf("Hello sir, How can we help you?\n");
    }
    else if(strcmp(question,"how are you") == 0 || strcmp(question,"how are you?") == 0)
    {
        printf("I am fine! you?\n");
    }


        else if(strcmp(question,"What is your name") == 0 || strcmp(question,"your name") == 0)
    {
        printf("MY NAME IS HENCY\n");
    }

      else if(strcmp(question,"LOVE") == 0 || strcmp(question,"i love u") == 0)
    {
        printf("Thank You I Love U 2\n");
    }


      else if(strcmp(question,"Fav song") == 0 || strcmp(question,"favorute song") == 0)
    {
        printf("Maru Varthai Paesathe,Madi Meethu Nee Thoongidu,Imai Pola Nan Kakka,Kanavai Nee Maridu,Vizhi Neerum Veenaga,Imai Thanda Koodathena,Thuliyaha Nan Serthen,Kadalaha Kann Aanathe,\n");
    }

    else if(strcmp(question,"who build u") == 0 || strcmp(question,"who developed you") == 0)
    {
        printf("Zetpeak Team mr.pragadeesh and Ms.swetha Developed me\n");
    }
    
    else if(strcmp(question,"say latest news") == 0 || strcmp(question,"latest news") == 0)
    {
        printf("ukrine and russia playing\n");
    }
    
    else if(strcmp(question,"say something") == 0 || strcmp(question,"what are you doing now") == 0)
    {
        printf("iam just trying to learn new things with the help of you\n");
    }
    

    else if(strcmp(question,"swetha") == 0 || strcmp(question,"swetha") == 0)
    {
        printf("ABOUT SWETHA Swetha is a confident girl , she is true to herself no matter who’s watching. She has a strong belief in herself and her abilities, and sometimes she will say some mokka jokes,really she is a very good person . \n");
    }

     else if(strcmp(question,"pragadeesh") == 0 || strcmp(question,"pragadeesh") == 0)
    {
        printf("according to the hindu news paper A Plus Two student of Mannargudi was appreciated by Tiruvarur district police for successfully setting up a cyber security service company at Mannargudi.G.S. Pragadeesh, son of Gurumoorthy and Selvi of Singaraveludaiyar Street, Mannargudi, studying at a private school in Mannargudi, developed interest in cyber security concepts and started reading articles and books relating to cyber security two years ago.Subsequently, he expressed his wish to set up a cyber security company as a start-up venture at Mannargudi to his father who had extended full support to his son to get his ambition fulfilled. In April 2020, Pragadeesh set up his company – Dark Fort Private Limited at Mannargudi and had offered cyber security solutions to more than 27 companies so far.On coming to know about Pragadeesh’s company and his service to check cyber crime attacks, the Tiruvarur district police decided to honour the young IT-sector entrepreneur. Pragadheesh was invited to the district police headquarters at Tiruvarur on Friday where the Superintendent of Police, M.Durai congratulated him.\n");
    }

    else if(strcmp(question,"bye") == 0)
    {
        goto EXIT;
    }
    else
    {
        printf("Sorry friend , I can't understand what you want to say.\n");
        printf("do you have any question?\n");
        gets(question);

        if(strcmp(question,"yes") == 0 )
        {
            goto START;
        }
        else if(strcmp(question,"no") == 0)
        {
            goto EXIT;
        }
    }

    goto START;

EXIT:
    printf("Thank you so much for using PS CHATBOT. Bye\n\n");

    return 0;
}


