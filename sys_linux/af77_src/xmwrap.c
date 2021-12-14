void xwdriv_();

/*
 * This is a wrapper function used to call the /xmotif driver from
 * Absoft FORTRAN (NeXT).
 *--
 * 24-Mar-1997 - [mcs]
 */
void XMDRIV(ifunc,   rbuf,   nbuf,   chr,   lchr,   mode,
	  w_ifunc, w_rbuf, w_nbuf, w_chr, w_lchr, w_mode)
 int *ifunc;
 float *rbuf;
 int *nbuf;
 char *chr;
 int *lchr;
 int w_ifunc, w_rbuf, w_nbuf, w_chr, w_lchr, w_mode;  /* Argument widths */
{
  xmdriv_(ifunc, rbuf, nbuf, chr, lchr, mode, w_chr);
  return;
}
