    #include <stdio.h>
    int main()
    {
        char ch;
        printf("enter a value btw 1 to 3:");
        scanf("%c", &ch);
        switch ( ch )
        {
        case "1":
            printf("1");
            break;
        case "2":
            printf("2");
            break;
        }
        return 0;
    }
	//[Error] case label does not reduce to an integer constant
