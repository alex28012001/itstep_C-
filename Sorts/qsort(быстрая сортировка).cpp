void quickSort(int*A, int size)
{
	int i = 0, j = size;
	int temp, p;
	p = A[size / 2];

	do
	{
		while (A[i]<p)i++;
		while (A[j]>p)j--;
		if (i <= j)
		{
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i++;
			j--;
		}
	}
	while (i <= j);
	if (j > 0)quickSort(A, j);
	if (size > i)
		quickSort(A + i, size - i);

}

надо в обьявление функции сделать size-1
