#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int locx = 11;
    int locy = 20;

    int winx = 9;
    int winy = 0;

    int testx = locx;
    int testy = locy;

    char input;

    bool game_won = false;
    bool maze [21][21]=
    {
        {0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0},//1
        {0,1,1,1,1,1,0,1,0,1,1,1,0,1,1,1,0,1,1,1,0},//2
        {0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,0},//3
        {0,1,0,1,1,1,0,1,1,1,0,1,1,1,1,1,0,1,0,1,0},//4
        {0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0},//5
        {0,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0},//6
        {0,0,0,0,0,1,0,1,0,1,0,1,0,0,0,0,0,1,0,0,0},//7
        {0,1,0,1,1,1,0,1,0,1,0,1,1,1,1,1,1,1,0,1,0},//8
        {0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,0},//9
        {0,1,1,1,0,1,1,1,1,1,0,1,1,1,1,1,0,1,1,1,0},//10
        {0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0},//11
        {0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,0,1,0,1,0},//12
        {0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0},//13
        {0,1,0,1,1,1,1,1,0,1,0,1,1,1,0,1,1,1,1,1,0},//14
        {0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0},//15
        {0,1,1,1,0,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,0},//16
        {0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0},//17
        {0,1,1,1,0,1,1,1,0,1,1,1,0,1,1,1,1,1,0,1,0},//18
        {0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,0,0,1,0},//19
        {0,1,1,1,1,1,1,1,1,1,0,1,1,1,0,1,1,1,1,1,0},//20
        {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}//21
    };



    cout<<endl<<endl<<endl<<endl<<endl<<endl
        << "Ready to play a game! You are the Player represented by the P on the board. Go from the top to the bottom"<< endl
        << "and you win the game. You can navigate with the w,a,s,d buttons on the keyboard and then hit enter. Good luck!"<<endl<<endl;

    for(int i = 0; i<21;i++)
    {
        for(int j =0; j<21;j++)
        {
            if((i == locy)&&(j== locx))
            {
                cout << "P ";
            }
            else if(maze[i][j])
            {
                cout<<"  ";
            }
            else
            {
                cout<<"W ";
            }

        }
        cout<<endl;
    }


    while(!game_won)
    {
        cout<< endl<<endl;
        cout << "What move would you like to make?";
        cin >> input;
        system("^j");
        // cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl
        // << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl ;
        system("CLS");
        switch (input)
        {
            case 'w':
                testy--;

                break;
            case 's':
                testy++;

                break;
            case 'a':
                testx--;

                break;
            case 'd':
                testx++;

                break;
        }

        if(maze[testy][testx])
        {
            locy=testy;
            locx=testx;
        }
        else
        {
            testy=locy;
            testx=locx;
        }


        cout<<endl<<endl<<endl<<endl<<endl<<endl
            << "Ready to play a game! You are the Player represented by the P on the board. Go from the top to the bottom"<< endl
            << "and you win the game. You can navigate with the w,a,s,d buttons on the keyboard and then hit enter. Good luck!"<<endl<<endl;

        for(int i = 0; i<21;i++)
        {
            for(int j =0; j<21;j++)
            {
                if((i == locy)&&(j== locx))
                {
                    cout << "P ";
                }
                else if(maze[i][j])
                {
                    cout<<"  ";
                }
                else
                {
                    cout<<"W ";
                }

            }
            cout<<endl;
        }

        if((locy == winy)&&(locx == winx))
        {
            game_won = true;
        }











    }



    cout<<endl<<endl<<endl;
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl
        <<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl
        <<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl
        <<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl
        <<"!!!!!!!!!!!!!!!!!!!!!!!Congratulations you beat the game!!!!!!!!!!!!!!!!!!!!!!"<<endl
        <<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl
        <<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl
        <<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl
        <<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl
        <<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;

}




/*
int maze [6][6];
for(int i =0; i<6; i++)
{
    for(int j=0; j<6; j++)
    {
        maze[i][j] = 1;
    }
}



for(int i =0; i<6; i++)
{
    for(int j=0; j<6; j++)
    {
        cout<<maze[i][j];
    }
    cout << endl;
}


bool maze [7][7] ={{0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,1,1,1,0,0},{0,0,1,0,1,0,0},{0,0,1,0,1,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

for(int i = 0; i<7;i++)
{
    for(int j =0; j<7;j++)
    {
        if(maze[i][j])
        {
            cout<<"a ";
        }
        else
        {
            cout<<". ";
        }

    }
    cout<<endl;
}




for(int i = 0; i<21;i++)
{
    for(int j =0; j<21;j++)
    {
        if(maze[i][j])
        {
            cout<<". ";
        }
        else
        {
            cout<<"W ";
        }

    }
    cout<<endl;
}







*/
