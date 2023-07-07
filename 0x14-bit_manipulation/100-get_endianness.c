/**
 * get_endianness - check for endiannesss
 * Return: 0 or 1;
 */

int get_endianness(void)
{
	unsigned int val = 0x01;
	unsigned char checkbytes;
	unsigned char *byte = (unsigned char *)&val;

	checkbytes = *byte;

	switch (checkbytes)
	{
		case 0x01:
			return (1);
		default:
			return (0);
	}

}
