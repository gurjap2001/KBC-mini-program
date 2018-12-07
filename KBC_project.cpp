#include<iostream>
#include<string>
using namespace std;
int Guess;
int Total=0;
class Question
{
	 public:
		string Question_Text;
		string Answer_1;
		string Answer_2;
		string Answer_3;
		string Answer_4;
		
		int Correct_Answer;
		int Question_Score;
		
			void setValues(string,string,string,string,string,int,int);
			void askQuestion();
		};
		
		int main()
		{
			system("color 5f");
			cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
			cout<<"*                                                                     *"<<endl;
			cout<<"*             * WELCOME TO KAUN BANEGA CROREPATI QUIZ *               *"<<endl;
			cout<<"*---------------------------------------------------------------------*"<<endl;
		    cout<<"*                               * BY  *                               *"<<endl;
			cout<<"*---------------------------------------------------------------------*"<<endl;
			cout<<"*                          * SUSHMITA SAH *                           *"<<endl;
			cout<<"*                                                                     *"<<endl;
			cout<<"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
			cout<<endl;
			
			cout<<"PRESS ENTER TO START THE QUIZ.............."<<endl;
			cin.get();
			system("color 6f");
			string Name;
			int Age;
			cout<<"What is your good name?"<<endl;
			
			cin>>Name;
			cout<<endl;
		    cout<<"How old are you?"<<endl;
		    fflush(stdin);
		    cin>>Age;
		    cout<<endl;
		    string Respond;
		    cout<<"Are you ready to take the Quiz "<< Name<<" ?  Yes/No."<<endl;
		    cin>>Respond;
		    system("color 4f");
		    if(Respond=="yes"||Respond=="Yes")
		    {
		    	cout<<endl;
		    	cout<<"Ok,good luck!"<<endl;
		    	cout<<endl;
			}
			else
			{
				cout<<"Ok,goodbye!"<<endl;
				return 0;
			}
			
			Question q1;
			Question q2;
			Question q3;
			Question q4;
			Question q5;
			Question q6;
			Question q7;
			Question q8;
			Question q9;
			Question q10;
			
			q1.setValues("By which of this nicknames is Nagpur also known as?",
			
			"Diamond city",
			"Orange city",
			"Pink city",
			"City of lakes",
			2,10);
			
			q2.setValues("Which pieces are maximum in number at the start of the chess game?",
			
			"Rook",
			"Knight",
			"Pawn",
			"Bishop",
			3,20);
			
			q3.setValues("What is was the name of India's first unmanned lunar spacecraft launched in October 2008?",
			
			"Chandravahaan 1",
			"Chandrayaan 1",
			"Chandrayaan 1",
			"Chandrakhoj 1",
			2,30);
			
			q4.setValues("What kind of animal is Shera,the mascot of the 2010 Delhi Commonwealth Games?",
			"Bear",
			"Leopard",
			"Lion",
			"Tiger",
			4,40);
			
			q5.setValues("Which film has the tag line 'EVERY CHILD IS SPECIAL'?",
			"Paa",
			"Koi mil gaya",
			"Taare zameen par",
			"Paathshaala",
			3,50);
			
			q6.setValues("What can you hear when a bell rings in a vaccum?",
			"No sound",
		    "Loud sound",
		    "Usual sound",
		    "Vibrating sound",
		    1,60);
			
		    q7.setValues("What does  'S' stand for in a 'SIM' card used in mobile phones?",
			"Service",
			"Smart",
			"Science",
			"Subscriber",
			4,70);
			
			q8.setValues("Which lyricist won an oscar for the song 'JAI HO'?",
			"Gulzaar",
			"Prasoon Joshi",
			"Piyush Pandey",
			"Javed Akhtar",
			4,80);
			
			q9.setValues("Which of these town hosted the Kumbh Mela in 2010?",
			"Nasik",
			"Ujjain",
			"Allahabad",
			"Haridwar",
			4,90);
			q10.setValues("With reference to the human body,what is 'raktchaap'?",
			"Blood test",
			"Blood donation",
			"Blood circulation",
			"Blood Pressure",
			4,100);
			
			
			q1.askQuestion();
			q2.askQuestion();
			q3.askQuestion();
			q4.askQuestion();
			q5.askQuestion();
			q6.askQuestion();
			q7.askQuestion();
			q8.askQuestion();
			q9.askQuestion();
			q10.askQuestion();
			
			cout<<"Your total score is:"<<Total<<" out of 100"<<endl;
			cout<<endl;
			
			if(Total>=70)
			{ system("color 1f");
				cout<<"Great you passed the quiz!"<<endl;
				cout<<endl;
				cout<<"$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $"<<endl;
				cout<<"$                                                             $"<<endl;
				cout<<"$                      **CONGRATULATIONS**                    $"<<endl;
				cout<<"$                                                             $"<<endl;
				cout<<"$ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $ $"<<endl;
			}
			
			else
			{
				cout<<endl;
				cout<<"Sorry!You failed the quiz"<<endl;
				cout<<endl;
				cout<<"Better luck next time!"<<endl;
			}
			cout<<"\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||";
			cout<<"\n\t\t\t\t\t||             Thank You              ||";
		    cout<<"\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||";
		    cout<<"\n\t\t\t\t\t||          By Sushmita Sah           ||";
			cout<<"\n\t\t\t\t\t||=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*||";
			return 0;
		}
		void Question::setValues(string q,string a1,string a2,string a3,string a4,int ca,int pa)
		{  Question_Text=q;
		    Answer_1=a1;
		    Answer_2=a2;
		    Answer_3=a3;
		    Answer_4=a4;
		    Correct_Answer=ca;
		    Question_Score=pa;
			}
			
		void Question::askQuestion()
		{
			Question_Text;
			cout<<endl;
			cout<<Question_Text<<endl;
			cout<<"1.  "<<Answer_1<<endl;
			cout<<"2.  "<<Answer_2<<endl;
			cout<<"3.  "<<Answer_3<<endl;
			cout<<"4.  "<<Answer_4<<endl;
			cout<<endl;
			
			
			cout<<"What is your answer?"<<endl;
			cin>>Guess;
			int x=0;
			if(Guess==Correct_Answer)
			{   system("color 9f");
			    x=x+10;
				cout<<endl;
				cout<<"Great!You are correct."<<endl;
				Total=Total+x;
				cout<<"Score:"<<Total<<" out of "<<Question_Score<<"!"<<endl;
				cout<<endl;
	}
	
	
	
	else
	{
		system("color 2f");
		cout<<endl;
		cout<<"Oh No!You are Wrong."<<endl;
		cout<<"You are given 0 marks for this question !"<<endl;
		cout<<endl<<"So,your score is "<<Total<<endl;
		cout<<"The correct answer is "<<Correct_Answer<<"."<<endl;
	    cout<<endl;
	}}
	
		
		
	
	
				
					
			
			
			
			
			
			
			
			
			
			
			
		
		
		
		
