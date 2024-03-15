while True:
  h_h = 0
  h_m = 0
  for i in range(8):
    m_h = int(input())
    if m_h > h_h:
      h_h = m_h
      h_m = i
  print(h_m)
