#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s1[20]="234";
    char s2[10]="3.14";

    long int x = strtol(s1, NULL, 10); // 3rd - 0123456789 = from 0 to 10
    float y = strtof(s2,NULL);

    cout << x << " " << y << endl;


    char s3[20]="x=10;y=20;z=30";

    char *token = strtok(s3,"=;");
    cout << token[2] << endl;
    while(token != NULL) {
        cout << token << endl;
        token = strtok(NULL,"=;");
    }

    return 0;

}
