/*
 * File   : Earth.h
 * Author : jsyoo
 * mail   : njsyoo@gmail.com
 * 
 */

#include <iostream>

using namespace std;

class Earth
{
    /* Declare public variables & functions */
    public:
    
    Earth()
    {
        cout<<"Earth is created!"<<endl;
        num_continent = 0;
    }

    void create_continent(void);

    /* Declare private variables */
    private:

    int num_continent;
};