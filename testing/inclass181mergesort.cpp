void sort(int * A, int n)
{
  if(n<2) return;
  int mid= n/2;
  sort(A, n/2);
  sort(A+mid, n-mid);

  merge(A, mid, A+mid, n-mid);

  //think of the 2 decks of cards analogy! ....
}