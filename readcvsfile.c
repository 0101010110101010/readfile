while(fscanf(fp,"%[^,],%[^,],%lf\n",no,time,&score)!=EOF)
{
  p=(struct check *)malloc(sizeof(struct check));
  strcpy(p->no,no);
  strcpy(p->time,time);
  p->score = score;

  p->next = *pCk;
  *pCk = p;
}
