# Practico 3 #
## ask1 ##
> int var = 40;
> 
> int &ref= var;

Its valid because int & its a value reference and to assigned var does not show error.

> int &ref = 1;

Its invalid because i cant assign constant to reference.

> int var = 1;
> int *ptr;
> int &ref = var;
> *ptr = ref;

Its invalid I dont know why but if replace `*ptr = ref` to `ptf = &ref` its a valid case.

## ask2 ##
	int indice [] = {1,2,3,4,5,6,7,8,9,10};
	int *ptr;
	ptr ++;
	if (( *ptr *5 )==( *(ptr + )))
	{
	printf( "true" );
	}
	else
	{
	printf( "false" );
	}
to

    int indice[] = { 1,2,3,4,5,6,7,8,9,10 };
    int *ptr = indice;
    ptr++;
    if ((*ptr * 5) == (*(ptr + 8)))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }