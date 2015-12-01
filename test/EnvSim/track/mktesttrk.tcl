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


# 20m: MSG 3 (Pkt 15, 41, 5, 21, 27)
edit::addRMSG 20 {nid_message 3 m_ack 1 nid_lrbg 42600902} {
  nid_packet 15
  q_dir      1
  q_scale    1
  v_loa      0
  t_loa      1023
  l_endsection 20000
  q_sectiontimer 0
  t_sectiontimer 0
  d_sectiontimerstoploc 0
} {
  nid_packet   41
  q_dir        1
  q_scale      1
  d_leveltr    20
  n_iter       0
  m_leveltr(0) 3
  l_ackleveltr(0) 200
} {
  nid_packet 5
  q_dir      1
  q_scale    1
  n_iter     4
  d_link(0) 25   q_newcountry(0) 0   nid_bg(0) 903   q_linkorientation(0) 1   q_linkreaction(0) 0   q_locacc(0) 2
  d_link(1) 960  q_newcountry(1) 0   nid_bg(1) 904   q_linkorientation(1) 1   q_linkreaction(1) 0   q_locacc(1) 2
  d_link(2) 1000 q_newcountry(2) 0   nid_bg(2) 905   q_linkorientation(2) 1   q_linkreaction(2) 0   q_locacc(2) 2
  d_link(3) 1000 q_newcountry(3) 0   nid_bg(3) 906   q_linkorientation(3) 1   q_linkreaction(3) 0   q_locacc(3) 2
  d_link(4) 1000 q_newcountry(4) 0   nid_bg(4) 907   q_linkorientation(4) 1   q_linkreaction(4) 0   q_locacc(4) 2
} {
  nid_packet    21
  q_dir         1
  q_scale       1
  n_iter        1
  d_gradient(0) 0
  q_gdir(0)     0
  g_a(0)        0
  d_gradient(1) 50000
  q_gdir(1)     0
  g_a(1)        255
} {
  nid_packet  27
  q_dir       1
  q_scale     1
  n_iter_k    1
  d_static(0) 0
  v_static(0) 60
  q_front(0)  1
  n_iter(0)   0
  d_static(1) 50000
  v_static(1) 60
  q_front(1)  1
  n_iter(1)   0
}


# 40m: BG 903
edit::addBG 40 1 903 1 {
  nid_packet   41
  q_dir        1
  q_scale      1
  d_leveltr    0
  n_iter       0
  m_leveltr(0) 3
  l_ackleveltr(0) 10
} 


# 1000m: BG 904
edit::addBG 1000 1 904 1


# 2000m: BG 905
edit::addBG 2000 1 905 1


# 3000m: BG 906
edit::addBG 3000 1 906 1


# 4000m: BG 907
edit::addBG 4000 1 907 1


track::title "Test Track ([clock format [clock seconds] -format {%d.%m.%y %R}])"

ctrl::update

set edit::active 0
