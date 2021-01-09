function convert1x(fahr int){
  return 5 * (fahr - 32) / 9;
}
$$

  int low, high, step;

  get(low,high,step);
  while(low <= high) {
    put(low);
    put(convert1x(low));
    low = low + step;
  }

$$
