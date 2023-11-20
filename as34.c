int i;
  printf("enter a number\n" );
  scanf("%d\n", &num);
  /* pcount is the number of primary numbers and concount is the number of composite numbers */

  do {
    count = 0;
    if (num>1)
    {
      i =1 ;
      while (i < num)
      {
        if (num%i == 0)
        count ++;
        i ++;

      }

      if (count ==2)
      {
        printf("%d is a prime number\n", num);
        pcount ++
      }
      else
      {
        printf("%d is not a prime number\n", num);
        concount++
      }
    }

  } while(num!= -1);
  printf("The number of prime numbers is %d\n", pcount);
  printf("The number of composite numbers is\n", concount);

  return 0;
}
