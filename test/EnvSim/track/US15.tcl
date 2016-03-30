set edit::active 1

track::clear

# 5m: BG 900 (radio network registration)
edit::addBG 5 1 900 0 {nid_packet 45 q_dir 1 nid_nm 2114079}


# 10m: BG 901 (session management)
edit::addBG 10 1 901 1 {nid_packet 42 q_dir 1 q_rbc 1 nid_c 426 nid_rbc 1 nid_radio 500 q_sleepsession 0}


# 15m: BG 902 (conditional leveltrans + national values)
edit::addBG 15 1 902 1 {nid_packet 46 q_dir 1 n_iter 1 m_leveltr(0) 1 nid_ntc(0) 1 m_leveltr(1) 3} {
  nid_packet     3
  q_dir          1
  q_scale        1
  d_validnv      0
  v_nvshunt      8
  v_nvstff       8
  v_nvonsight    8
  v_nvunfit      2
  v_nvrel        3
  d_nvroll       5
  q_nvsrbktrg    0
  q_nvemrrls     0
  v_nvallowovtrp 0
  v_nvsupovtrp   8
  d_nvovtrp      200
  t_nvovtrp      60
  d_nvpotrp      60
  m_nvcontact    0
  t_nvcontact    35
  m_nvderun      1
  d_nvstff       32767
  q_nvdriver_adhes 1
  n_iter         0
  nid_c(0)       426
}


# 20m: MSG 3 (Pkt 15, 41, 5, 21, 27), LRBG 902
edit::addRMSG 20 {nid_message 3 m_ack 1 nid_lrbg 42600902} {
  nid_packet 15
  q_dir      1
  q_scale    1
  v_loa      0
  t_loa      1023
  l_endsection 5000
  q_sectiontimer 0
  t_sectiontimer 0
  d_sectiontimerstoploc 0
} {
  nid_packet   41
  q_dir        1
  q_scale      1
  d_leveltr    85
  n_iter       0
  m_leveltr(0) 3
  l_ackleveltr(0) 50
} {
  nid_packet 5
  q_dir      1
  q_scale    1
  n_iter     16
  d_link(0) 85   q_newcountry(0) 0   nid_bg(0) 903   q_linkorientation(0) 1   q_linkreaction(0) 0   q_locacc(0) 2
  d_link(1) 54  q_newcountry(1) 0   nid_bg(1) 904   q_linkorientation(1) 1   q_linkreaction(1) 0   q_locacc(1) 2
  d_link(2) 154 q_newcountry(2) 0   nid_bg(2) 905   q_linkorientation(2) 1   q_linkreaction(2) 0   q_locacc(2) 2
  d_link(3)  50 q_newcountry(3) 0   nid_bg(3) 906   q_linkorientation(3) 1   q_linkreaction(3) 0   q_locacc(3) 2
  d_link(4) 175 q_newcountry(4) 0   nid_bg(4) 907   q_linkorientation(4) 1   q_linkreaction(4) 0   q_locacc(4) 2
  d_link(5) 169 q_newcountry(5) 0   nid_bg(5) 908   q_linkorientation(5) 1   q_linkreaction(5) 0   q_locacc(5) 2
  d_link(6)  55 q_newcountry(6) 0   nid_bg(6) 909   q_linkorientation(6) 1   q_linkreaction(6) 0   q_locacc(6) 2
  d_link(7) 428 q_newcountry(7) 0   nid_bg(7) 910   q_linkorientation(7) 1   q_linkreaction(7) 0   q_locacc(7) 2
  d_link(8)  54 q_newcountry(8) 0   nid_bg(8) 911   q_linkorientation(8) 1   q_linkreaction(8) 0   q_locacc(8) 2
  d_link(9) 238 q_newcountry(9) 0   nid_bg(9) 912   q_linkorientation(9) 1   q_linkreaction(9) 0   q_locacc(9) 2
  d_link(10) 54  q_newcountry(10) 0 nid_bg(10) 913   q_linkorientation(10) 1   q_linkreaction(10) 0   q_locacc(10) 2
  d_link(11) 172 q_newcountry(11) 0 nid_bg(11) 914   q_linkorientation(11) 1   q_linkreaction(11) 0   q_locacc(11) 2
  d_link(12) 55  q_newcountry(12) 0 nid_bg(12) 915   q_linkorientation(12) 1   q_linkreaction(12) 0   q_locacc(12) 2
  d_link(13) 152 q_newcountry(13) 0 nid_bg(13) 916   q_linkorientation(13) 1   q_linkreaction(13) 0   q_locacc(13) 2
  d_link(14) 141 q_newcountry(14) 0 nid_bg(14) 917   q_linkorientation(14) 1   q_linkreaction(14) 0   q_locacc(14) 2
  d_link(15) 53  q_newcountry(15) 0 nid_bg(15) 918   q_linkorientation(15) 1   q_linkreaction(15) 0   q_locacc(15) 2
  d_link(16) 471 q_newcountry(16) 0 nid_bg(16) 919   q_linkorientation(16) 1   q_linkreaction(16) 0   q_locacc(16) 2
} {
  nid_packet    21
  q_dir         1
  q_scale       1
  n_iter        1
  d_gradient(0) 0
  q_gdir(0)     0
  g_a(0)        0
  d_gradient(1) 5000
  q_gdir(1)     0
  g_a(1)        255
} {
  nid_packet  27
  q_dir       1
  q_scale     1
  n_iter_k    3
  d_static(0) 0
  v_static(0) 28
  q_front(0)  1
  n_iter(0)   0
  d_static(1) 1000
  v_static(1) 24
  q_front(1)  1
  n_iter(1)   0
  d_static(2) 2000
  v_static(2) 20
  q_front(2)  1
  n_iter(2)   0
  d_static(3) 3000
  v_static(3) 25
  q_front(3)  1
  n_iter(3)   0
  d_static(3) 5000
  v_static(3) 127
  q_front(3)  1
  n_iter(3)   0
}

# 100m: BG 903 P41
edit::addBG 100 1 903 1  {
  nid_packet   41
  q_dir        1
  q_scale      1
  d_leveltr    0
  n_iter       0
  m_leveltr(0) 3
  l_ackleveltr(0) 50
}
# 154m: BG 904
edit::addBG 154 1 904 1  

# 308m: BG 905
edit::addBG 308 1 905 1  

# 358m: BG 906
edit::addBG 358 1 906 1  

# 533m: BG 907
edit::addBG 533 1 907 1  

# 702m: BG 908
edit::addBG 702 1 908 1  

# 757m: BG 909
edit::addBG 757 1 909 1  

# 1185m: BG 910
edit::addBG 1185 1 910 1  

# 1239m: BG 911
edit::addBG 1239 1 911 1  

# 1477m: BG 912
edit::addBG 1477 1 912 1  

# 1531m: BG 913
edit::addBG 1531 1 913 1  

# 1703m: BG 914
edit::addBG 1703 1 914 1  

# 1758m: BG 915
edit::addBG 1758 1 915 1  

# 1910m: BG 916
edit::addBG 1910 1 916 1  

# 2051m: BG 917
edit::addBG 2051 1 917 1  

# 2104m: BG 918
edit::addBG 2104 1 918 1

# 2575m: BG 919
edit::addBG 2575 1 919 1

# 3043m: BG 920
edit::addBG 3043 1 920 1

# 3096m: BG 921
edit::addBG 3096 1 921 1

track::title "User Story 15: Trip ([clock format [clock seconds] -format {%d.%m.%y %R}])"

ctrl::update

set edit::active 0
