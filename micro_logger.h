// Printing values
#define PR_I(a)   printf("\n%s - %d | %d",__FILE__,__LINE__,a);
#define PR_F(a)   printf("\n%s - %d | %f",__FILE__,__LINE__,a);

#define PR_L(a)   printf("\n%s - %d | %ld",__FILE__,__LINE__,a);
#define PR_U_L(a)   printf("\n%s - %d | %lu",__FILE__,__LINE__,a);

#define PR_C(a)   printf("\n%s - %d | %c",__FILE__,__LINE__,a);
#define PR_S(a)   printf("\n%s - %d | %s",__FILE__,__LINE__,a);

// Printing values with variable names
#define PR_V_I(a)   printf("\n%s - %d | %s = %d",__FILE__,__LINE__,#a,a);
#define PR_V_F(a)   printf("\n%s - %d | %s = %f",__FILE__,__LINE__,#a,a);
#define PR_V_L(a)   printf("\n%s - %d | %s = %ld",__FILE__,__LINE__,#a,a);
#define PR_V_U_L(a)   printf("\n%s - %d | %s = %lu",__FILE__,__LINE__,#a,a);

#define PR_V_C(a)   printf("\n%s - %d | %s = %c",__FILE__,__LINE__,#a,a);
#define PR_V_S(a)   printf("\n%s - %d | %s = %s",__FILE__,__LINE__,#a,a);