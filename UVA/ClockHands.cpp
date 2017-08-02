#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;
int main ()
{

	int h;
	char e;
	float m,angle1,angle2,total;
	while(cin>>h>>e>>m)
	{
		if(h==0 & m==0)
		{
		break;
		}
		else
		{
			angle1 = 30.0 * (h + m / 60.0);
		   angle2 = 6.0 * m;

        if (angle1 >= 360.0)
		{
            angle1 -= 360.0;
		}

        total = abs(angle1-angle2);
        
        if (total > 180.0)
		{
           total = 360.0 - total;
		}
        cout << fixed << setprecision(3) << total << endl;
		}
	}
return 0;
}




#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main ()
{
	char e;
	float h,m,h_angle,m_angle,angle;
	while(cin>>h>>e>>m)
	{
		if(h==0 && m==0)
		{
		break;
		}
		else
		{
			h_angle= h*30 + m/2 ;
			if(h_angle>=360)
			{
			h_angle-=360;
			}
			m_angle=m*6;
			angle=abs(m_angle - h_angle);
			if(angle>180)
			{
			angle=360-angle;
			}
			cout<<fixed<<setprecision(3)<<angle<<endl;
		}
	}
return 0;
}
