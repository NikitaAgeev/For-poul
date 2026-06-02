f:
  {
    setwd     wsz = 0x5, nfx = 0x1
  }
  {
    adds,0,sm 0x0, 0x0, %r4
  }
.L4:
  {
    nop 4
    cmplsb,0  %r4, %r1, %pred0
    disp      %ctpr1, .L6; ipd 2
  }
  {
    ct        %ctpr1 ? ~%pred0
  }
.L9:
  {
    sxt,0,sm  0x2, %r4, %r5
    sxt,1,sm  0x2, %r4, %r6
    sxt,2,sm  0x2, %r4, %r7
    adds,3    %r4, 0x1, %r4
    disp      %ctpr1, .L4; ipd 2
  }
  {
    shld,0    %r5, 0x2, %r5
    shld,1    %r6, 0x2, %r6
    shld,2    %r7, 0x2, %r7
  }
  {
    addd,0    %r0, %r5, %r5
    addd,1    %r0, %r6, %r6
    addd,2    %r0, %r7, %r7
  }
  {
    ldw,0     %r6, 0x0, %r6
    ldw,2     %r7, 0x0, %r8
  }
  {
    nop 2
    ldw,0     %r5, 0x0, %r5
  }
  {
    adds,0    %r5, 0x3, %r5
  }
  {
    nop 5
    muls,0    %r5, %r6, %r5
  }
  {
    adds,0    %r8, %r5, %r5
  }
  {
    stw,2,sm  %r7, 0x0, %r5
    ct        %ctpr1
  }
.L6:
  {
    nop 5
    return    %ctpr3; ipd 2
  }
  {
    ct        %ctpr3
  }