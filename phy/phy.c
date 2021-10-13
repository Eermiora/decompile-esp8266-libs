typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined3;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined8;
typedef unsigned short    word;
typedef enum Elf_ProgramHeaderType {
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType;

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_ANDROID_REL=1610612737,
    SHT_ANDROID_RELA=1610612738,
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType;

struct Elf32_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    dword sh_flags;
    dword sh_addr;
    dword sh_offset;
    dword sh_size;
    dword sh_link;
    dword sh_info;
    dword sh_addralign;
    dword sh_entsize;
};

typedef struct Elf32_Sym Elf32_Sym, *PElf32_Sym;

struct Elf32_Sym {
    dword st_name;
    dword st_value;
    dword st_size;
    byte st_info;
    byte st_other;
    word st_shndx;
};

typedef struct Elf32_Phdr Elf32_Phdr, *PElf32_Phdr;

struct Elf32_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_offset;
    dword p_vaddr;
    dword p_paddr;
    dword p_filesz;
    dword p_memsz;
    dword p_flags;
    dword p_align;
};

typedef struct Elf32_Ehdr Elf32_Ehdr, *PElf32_Ehdr;

struct Elf32_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_osabi;
    byte e_ident_abiversion;
    byte e_ident_pad[7];
    word e_type;
    word e_machine;
    dword e_version;
    dword e_entry;
    dword e_phoff;
    dword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef ulong size_t;




void register_phy_ops(void)

{
  undefined4 in_a2;
  
  DAT_ram_0040d550 = in_a2;
  phy_init(1,0);
  return;
}



void register_get_phy_addr(void)

{
  undefined4 in_a2;
  
  DAT_ram_0040d550 = in_a2;
  return;
}



void phy_change_channel(void)

{
  (**(code **)(DAT_ram_0040d550 + 4))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_get_mactime(void)

{
  memw();
  return;
}



void phy_get_romfuncs(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void set_cca(void)

{
  int in_a2;
  
  if (in_a2 != 0) {
    memw();
    memw();
    memw();
    memw();
    _DAT_ram_60009b64 = _DAT_ram_60009b64 & 0xfff00fff;
    _DAT_ram_60009d68 = _DAT_ram_60009d68 | 0x40000;
    return;
  }
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009b64 = _DAT_ram_60009b64 & 0xfff00fff | 0xb4000;
  _DAT_ram_60009d68 = _DAT_ram_60009d68 | 0x40000;
  return;
}



void tx_pwr_backoff_old(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  byte *in_a2;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  char cVar12;
  int iVar13;
  char cVar14;
  char acStack48 [4];
  undefined4 uStack24;
  byte *pbStack20;
  int iStack12;
  
  iVar9 = 1;
  uVar10 = 0x1f;
  ram_rfcal_pwrctrl(0x40,in_a2,1,0x1f,(int)rfcal_bb_atten_init,acStack48,0x138,0);
  cVar14 = '\0';
  iVar5 = 0;
  iStack12 = 0;
  bVar1 = in_a2[5];
  bVar2 = *in_a2;
  acStack48[0] = acStack48[0] + '\x1f';
  pbStack20 = (byte *)0xfffffff9;
  iVar11 = -1;
  uStack24 = 0xffffffff;
  while( true ) {
    acStack48[0] = acStack48[0] + (char)iVar5;
    cVar3 = (char)((uint)bVar2 - (uint)bVar1 >> 0x10);
    cVar12 = cVar3 + acStack48[0];
    iVar5 = 0x6f;
    if (acStack48[0] < 0x70) {
      iVar5 = (int)acStack48[0];
    }
    acStack48[0] = (char)iVar5;
    iVar7 = (int)acStack48[0];
    cVar4 = 'o';
    if (cVar12 < 'p') {
      cVar4 = cVar12;
    }
    iVar13 = (int)cVar4;
    meas_tone_pwr_db(iVar7,in_a2,iVar9,uVar10,iVar5,iVar11);
    iVar8 = iVar13;
    meas_tone_pwr_db(iVar13,in_a2,iVar9,uVar10,iVar5,iVar11);
    iVar6 = iVar7 - iVar8 >> 0x10;
    in_a2 = pbStack20;
    if ((-8 < iVar6) && (in_a2 = (byte *)0xa8, iVar7 < 0xa9)) {
      return;
    }
    if ((((cVar14 != '\0') && (iVar9 = iStack12, uVar10 = uStack24, iVar6 <= iStack12)) &&
        (uVar10 = 0xffffffff, -2 < iVar6)) && (iVar7 < 0xa9)) {
      return;
    }
    if (iVar8 < 0x50) {
      return;
    }
    if (iVar13 == 0x6f) break;
    cVar14 = cVar14 + '\x01';
    iVar5 = iVar6 + 2;
    if (-1 < iVar6 + 1) {
      iVar5 = iVar6 + 1;
    }
    iVar11 = (int)(char)((cVar3 - (char)(iVar5 >> 1)) + -1);
    iVar5 = 2;
    if (1 < iVar11) {
      iVar5 = iVar11;
    }
    iStack12 = iVar6;
    if (cVar14 == '\n') {
      return;
    }
  }
  return;
}



void unsign_to_sign(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_get_bb_freqoffset(void)

{
  short sVar1;
  uint uVar2;
  
  memw();
  if ((_DAT_ram_3ff2003c >> 0x10 & 0xf) < 8) {
    memw();
    if ((_DAT_ram_60009800 & 1) == 0) {
      phy_meas_freq_offset = 0x7fff;
    }
    else {
      uVar2 = _DAT_ram_60009800 >> 8 & 0xff;
      sVar1 = (short)uVar2;
      unsign_to_sign(uVar2,8);
      phy_meas_freq_offset = (short)(sVar1 * 0x6b >> 0x16);
    }
  }
  else {
    phy_meas_freq_offset = 0x7fff;
  }
  memw();
  memw();
  _DAT_ram_600098dc = _DAT_ram_600098dc | 0xf;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_get_bb_evm(void)

{
  memw();
  memw();
  memw();
  memw();
  memw();
  if ((_DAT_ram_3ff00058 >> 0xc & 10) == 10) {
    memw();
    _DAT_ram_60009d74 = 0xe690a568;
  }
  else {
    memw();
    _DAT_ram_60009d74 = 0xeab4d027;
  }
  memw();
  _DAT_ram_60000d48 = _DAT_ram_60000d48 & 0xfffffffe;
  return;
}



void fix_cache_bug(void)

{
  undefined4 in_a2;
  
  vPortEnterCritical();
  Cache_Read_Disable(in_a2);
  phy_get_bb_evm(in_a2);
  Cache_Read_Enable_New(in_a2);
  vPortExitCritical(in_a2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_rtc_clock_cali_trig(void)

{
  memw();
  memw();
  memw();
  rtc_cali_trig_en = 1;
  _DAT_ram_6000036c = 0x80000101;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_rtc_clock_cali(void)

{
  uint uVar1;
  int in_a2;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_a4;
  undefined *puVar4;
  undefined4 unaff_a5;
  int unaff_a7;
  
  if (rtc_cali_trig_en == '\0') {
    unaff_a5 = 0x101;
    memw();
    unaff_a4 = 0x80000000;
    memw();
    _DAT_ram_6000036c = 0x80000101;
    memw();
  }
  ets_delay_us(10,&periodic_cal_sat,unaff_a4,unaff_a5);
  memw();
  while (-1 < _DAT_ram_60000370) {
    memw();
    unaff_a7 = _DAT_ram_60000370;
  }
  puVar4 = (undefined *)0xfffffff;
  memw();
  rtc_cali_trig_en = 0;
  if (chip6_phy_init_ctrl[1] < 3) {
    puVar4 = &DAT_ram_0040c4d0;
  }
  uVar2 = 0;
  __udivsi3(0,0x28,puVar4,unaff_a5,_DAT_ram_60000370,unaff_a7);
  if (uVar2 != 0) {
    uVar1 = *(uint *)(in_a2 + 4);
    if (uVar1 != 0) {
      if (uVar1 < uVar2) {
        uVar3 = uVar2 - uVar1;
      }
      else {
        uVar3 = uVar1 - uVar2;
      }
      if (0x1ff < uVar3) {
        return;
      }
      uVar2 = uVar1 * 3 + uVar2 * 5 >> 3;
    }
    *(uint *)(in_a2 + 4) = uVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_goto_sleep(void)

{
  ushort uVar1;
  uint in_a2;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = lslp_mem_opt_8266;
  uVar4 = (uint)lslp_mem_opt_8266;
  memw();
  uVar2 = (_DAT_ram_3ff00058 & 0x8000) >> 0xf;
  if ((in_a2 == 1) || (in_a2 == 2)) {
    pm_sdio_nidle();
    SDIO_slp_reject = (byte)in_a2;
    software_slp_reject = SDIO_slp_reject | periodic_cal_sat & periodic_cal_flag;
    if ((in_a2 & 0xff | (uint)(periodic_cal_sat & periodic_cal_flag)) == 0) {
      bbpll_cal_flag = 1;
      memw();
      _DAT_ram_60000724 = 0xffffffff;
      if (uVar2 == 1) {
        memw();
        memw();
        memw();
        _DAT_ram_3ff00008 = _DAT_ram_3ff00008 & 0xfff0cfff | uVar4 & 0xf;
        memw();
        memw();
        _DAT_ram_3ff0001c = _DAT_ram_3ff0001c & 0xffffffc0 | uVar1 >> 6 & 0x3f;
        memw();
      }
      memw();
      _DAT_ram_60000708 = _DAT_ram_60000708 | 0x100000;
      memw();
      memw();
      _DAT_ram_60000d40 = _DAT_ram_60000d40 & 0xfffffff3 | 8;
      memw();
      iVar3 = 100;
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
      if (uVar2 == 1) {
        memw();
        while ((_DAT_ram_60000728 & 3) == 0) {
          memw();
        }
        memw();
        memw();
        memw();
        _DAT_ram_3ff00008 = _DAT_ram_3ff00008 & 0xfff0cfff;
        memw();
        memw();
        _DAT_ram_3ff0001c = _DAT_ram_3ff0001c & 0xffffffc0;
        memw();
        memw();
        hardware_reject = (byte)_DAT_ram_60000728 & 2;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_set_sleep_mode(void)

{
  int in_a2;
  uint uVar1;
  uint uVar2;
  
  noise_check_loop(1,0);
  memw();
  _DAT_ram_60009b08 = _DAT_ram_60009b08 | 0x8000000;
  memw();
  pm_set_pll_xtal_wait_time(0x60009a00,0x8000000);
  if (in_a2 != 4) {
    sleep_mode_flag = 1;
    if (in_a2 == 1) {
      pm_sleep_opt_bb_off();
    }
    else {
      if ((in_a2 == 2) || (in_a2 == 8)) {
        pm_sleep_opt_bb_on();
      }
    }
  }
  memw();
  uVar1 = _DAT_ram_3ff20c14 & 0xfffff000 | 2;
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_3ff20c14 = _DAT_ram_3ff20c14 & 0xbffff000 | 0x80000002;
  memw();
  memw();
  uVar2 = _DAT_ram_3ff20c74 & 0xff3fffff | 0x800000;
  memw();
  _DAT_ram_3ff20c74 = uVar2;
  pm_set_sleep_btco(uVar1,2,0xfffff000,uVar2,0x3ff20a00,0x800000);
  pm_sleep_set_mac(uVar1,2,0xfffff000,uVar2,0x3ff20a00,0x800000);
  pm_check_mac_idle(uVar1,2,0xfffff000,uVar2,0x3ff20a00,0x800000);
  if (in_a2 == 8) {
    if (chip6_phy_init_ctrl[108] == -1) {
      memw();
      _DAT_ram_60000594 = _DAT_ram_60000594 | 1;
      memw();
      (**(code **)(g_phyFuns + 0xac))(6,1,2,0xff,0xff,0x800000);
      memw();
      _DAT_ram_60000594 = _DAT_ram_60000594 & 0xfffffffe;
      memw();
    }
    memw();
    _DAT_ram_3ff00018 = _DAT_ram_3ff00018 & 0xfc70ffff;
    memw();
  }
  if ((in_a2 == 2) || (in_a2 == 1)) {
    memw();
    _DAT_ram_3ff00018 = _DAT_ram_3ff00018 & 0xfc70ffff;
    memw();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void clockgate_watchdog(void)

{
  int in_a2;
  
  if (in_a2 != 0) {
    memw();
    memw();
    _DAT_ram_3ff00018 = _DAT_ram_3ff00018 & 0xfffffff7;
    return;
  }
  memw();
  memw();
  _DAT_ram_3ff00018 = _DAT_ram_3ff00018 | 8;
  return;
}



void Cache_Read_Disable(void)

{
  return;
}



void Cache_Read_Enable_New(void)

{
  return;
}



void Uart_Init(void)

{
  return;
}



void __adddf3(void)

{
  return;
}



void __addsf3(void)

{
  return;
}



void __ashrdi3(void)

{
  return;
}



void __divdf3(void)

{
  return;
}



void __divdi3(void)

{
  return;
}



void __divsf3(void)

{
  return;
}



void __divsi3(void)

{
  return;
}



void __extendsfdf2(void)

{
  return;
}



void __fixdfsi(void)

{
  return;
}



void __fixsfsi(void)

{
  return;
}



void __fixunssfsi(void)

{
  return;
}



void __floatsidf(void)

{
  return;
}



void __floatsisf(void)

{
  return;
}



void __floatunsidf(void)

{
  return;
}



void __floatunsisf(void)

{
  return;
}



void __modsi3(void)

{
  return;
}



void __muldf3(void)

{
  return;
}



void __muldi3(void)

{
  return;
}



void __mulsf3(void)

{
  return;
}



void __subsf3(void)

{
  return;
}



void __truncdfsf2(void)

{
  return;
}



void __udivdi3(void)

{
  return;
}



void __udivsi3(void)

{
  return;
}



void __umodsi3(void)

{
  return;
}



void ets_delay_us(void)

{
  return;
}



void ets_update_cpu_frequency(void)

{
  return;
}



void gpio_output_set(void)

{
  return;
}



void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *in_o2;
  
  return in_o2;
}



void os_delay_us(void)

{
  return;
}



int printf(char *__format,...)

{
  int in_o2;
  
  return in_o2;
}



void uart_buff_switch(void)

{
  return;
}



void uart_tx_flush(void)

{
  return;
}



void vPortETSIntrLock(void)

{
  return;
}



void vPortETSIntrUnlock(void)

{
  return;
}



void vPortEnterCritical(void)

{
  return;
}



void vPortExitCritical(void)

{
  return;
}



void _start(void)

{
  return;
}



void rf_init(void)

{
  char in_a2;
  
  (**DAT_ram_0040d550)((int)in_a2);
  return;
}



void bb_init(void)

{
  (**(code **)(DAT_ram_0040d550 + 0x18))();
  return;
}



void phy_init(void)

{
  char in_a2;
  
  (**DAT_ram_0040d550)((int)in_a2);
  (*DAT_ram_0040d550[6])();
  return;
}



void RFChannelSel(void)

{
  int in_a2;
  
  (**(code **)(DAT_ram_0040d550 + 8))((in_a2 << 0x18) >> 0x18,in_a2 << 0x18);
  return;
}



void phy_delete_channel(void)

{
  (**(code **)(DAT_ram_0040d550 + 0xc))();
  return;
}



void phy_enable_agc(void)

{
  (**(code **)(DAT_ram_0040d550 + 0x10))();
  return;
}



void phy_disable_agc(void)

{
  (**(code **)(DAT_ram_0040d550 + 0x14))();
  return;
}



void phy_initialize_bb(void)

{
  (**(code **)(DAT_ram_0040d550 + 0x18))();
  return;
}



void phy_set_sense(void)

{
  (**(code **)(DAT_ram_0040d550 + 0x1c))();
  return;
}



void rom_ana_inf_gating_en(void)

{
  bool bVar1;
  uint in_a2;
  uint unaff_a3;
  uint unaff_a4;
  
  if (in_a2 != 0) {
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,0,0,0);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1a,4,4,0);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1a,4,4,1);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1a,5,5,0);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1a,5,5,1);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0,7,0,unaff_a3 >> 0xc & 0xff);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,1,7,0,unaff_a3 >> 4 & 0xff);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,2,3,0,unaff_a3 & 0xf);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,4,7,0,unaff_a4 & 0xff);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,3,7,0,unaff_a4 >> 8 & 0xff);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,2,7,4,unaff_a4 >> 0x10 & 0xf);
  }
  bVar1 = (in_a2 & 1) == 0;
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0xf,3,3,bVar1);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,0,0,bVar1);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,0,0);
  return;
}



void rom_set_channel_freq(void)

{
  undefined uVar1;
  int in_a2;
  byte *pbVar2;
  undefined uVar3;
  uint *unaff_a3;
  uint *puVar4;
  int unaff_a4;
  uint uVar5;
  uint *unaff_a5;
  uint *unaff_a6;
  undefined4 unaff_a7;
  undefined uVar6;
  uint *puVar7;
  uint **ppuVar8;
  uint uVar9;
  undefined2 uVar10;
  byte local_30;
  undefined uStack47;
  byte bStack46;
  uint *puVar11;
  undefined4 uVar12;
  
  pbVar2 = &local_30;
  if ((in_a2 < 1) || (0xd < in_a2)) {
    uVar9 = 0xd;
  }
  else {
    uVar9 = in_a2 - 1U & 0xff;
  }
  puVar4 = unaff_a5;
  puVar7 = unaff_a6;
  puVar11 = unaff_a3;
  uVar12 = unaff_a7;
  (**(code **)(g_phyFuns + 0xdc))();
  uVar5 = SEXT24(*(short *)(uVar9 * 2 + unaff_a4));
  if (in_a2 - 1U < 0xd) {
    uVar10 = 0x40;
  }
  else {
    uVar10 = 0x9b4;
  }
  if (uVar5 != 0) {
    ppuVar8 = (uint **)(puVar7 + uVar9);
    if ((*puVar4 >> ((byte)uVar9 & 0x1f) & 1) == 0) {
      (**(code **)(g_phyFuns + 0xe4))(uVar10,puVar11,uVar5,&local_30);
      unaff_a6 = (uint *)(uint)local_30;
      unaff_a7 = 0;
      unaff_a5 = (uint *)(uint)(bStack46 | local_30);
      *ppuVar8 = unaff_a5;
      uVar5 = 1 << 0x20 - (' ' - ((byte)uVar9 & 0x1f));
      *puVar4 = *puVar4 | uVar5;
    }
    else {
      local_30 = (byte)((uint)*ppuVar8 >> 0x10);
      bStack46 = (byte)*ppuVar8;
      puVar4 = unaff_a3;
      uStack47 = (char)((uint)*ppuVar8 >> 8);
    }
    goto LAB_ram_00400e3f;
  }
  bStack46 = 0x3b;
  uVar1 = 0x3b;
  if (puVar11 != (uint *)0x0) {
    unaff_a6 = (uint *)0x5b;
    puVar7 = (uint *)0x5d;
    puVar4 = (uint *)0x5e;
    uVar5 = 0xffffffb7;
    unaff_a5 = (uint *)0x5c;
    unaff_a7 = 0xe;
    switch(in_a2) {
    case 0:
    default:
      bStack46 = 0x76;
      uStack47 = 0x62;
      local_30 = 0x5f;
      puVar4 = (uint *)0x5f;
      break;
    case 1:
      local_30 = 0x5b;
      puVar4 = (uint *)0xffffffb1;
      goto LAB_ram_00400e39;
    case 2:
      local_30 = 0x5b;
      bStack46 = 0xdf;
      uVar5 = 0xfffffff2;
      uStack47 = 0xf2;
      break;
    case 3:
      bStack46 = 0x83;
      local_30 = 0x5c;
      unaff_a6 = (uint *)0x34;
      uStack47 = 0x34;
      break;
    case 4:
      local_30 = 0x5c;
      uStack47 = 0x76;
      bStack46 = 0x27;
      break;
    case 5:
      local_30 = 0x5c;
      uStack47 = 0xb7;
      bStack46 = 0xcb;
      break;
    case 6:
      local_30 = 0x5c;
      bStack46 = 0x6f;
      unaff_a6 = (uint *)0xfffffff9;
      uStack47 = 0xf9;
      break;
    case 7:
      uVar5 = 0x13;
      goto LAB_ram_00400f4c;
    case 8:
      uVar1 = 0x7c;
LAB_ram_00400f4c:
      local_30 = 0x5d;
      bStack46 = (byte)uVar5;
      uStack47 = uVar1;
      break;
    case 9:
      unaff_a5 = (uint *)0xffffffbe;
      uStack47 = 0xbe;
      puVar4 = unaff_a6;
      goto LAB_ram_00400f33;
    case 10:
      uStack47 = 0;
      puVar4 = (uint *)0x0;
      puVar7 = puVar4;
LAB_ram_00400f33:
      bStack46 = (byte)puVar4;
      local_30 = (byte)puVar7;
      puVar4 = puVar7;
      break;
    case 0xb:
      local_30 = 0x5e;
      bStack46 = 0xa4;
      uVar5 = 0x41;
      uStack47 = 0x41;
      break;
    case 0xc:
      local_30 = 0x5e;
      uStack47 = 0x83;
      bStack46 = 0x48;
      break;
    case 0xd:
      local_30 = 0x5e;
      bStack46 = 0xec;
      puVar4 = (uint *)0xffffffc4;
LAB_ram_00400e39:
      uStack47 = (char)puVar4;
    }
    goto LAB_ram_00400e3f;
  }
  unaff_a7 = 0x32;
  uVar5 = 0x30;
  unaff_a6 = (uint *)0x11;
  uVar6 = 0xe6;
  unaff_a5 = (uint *)0xffffffbb;
  uVar3 = 0x91;
  uStack47 = 0x91;
  puVar4 = (uint *)0x66;
  switch(in_a2) {
  case 0:
  default:
    uVar5 = 0x32;
    unaff_a6 = (uint *)0xffffffcc;
    uStack47 = 0xcc;
    puVar4 = unaff_a6;
    unaff_a5 = unaff_a6;
    break;
  case 1:
    goto LAB_ram_00400eff;
  case 2:
    puVar4 = unaff_a6;
    unaff_a5 = unaff_a6;
    break;
  case 3:
    puVar4 = (uint *)0xffffffbb;
    uVar6 = 0xbb;
    goto LAB_ram_00400fa2;
  case 4:
LAB_ram_00400fa2:
    uVar5 = 0x30;
    unaff_a5 = puVar4;
    uStack47 = uVar6;
    break;
  case 5:
    puVar4 = (uint *)0x11;
    uVar5 = 0x31;
    unaff_a5 = (uint *)0x11;
    uStack47 = 0x11;
    break;
  case 6:
    puVar4 = unaff_a5;
    uVar5 = 0x31;
    uStack47 = uVar1;
    break;
  case 7:
    puVar4 = (uint *)0x66;
    uVar3 = 0x66;
    unaff_a6 = puVar4;
    goto LAB_ram_00400f88;
  case 8:
    puVar4 = unaff_a6;
    goto LAB_ram_00400f88;
  case 9:
    uVar3 = 0xbb;
    puVar4 = unaff_a5;
    goto LAB_ram_00400f88;
  case 10:
    uVar3 = 0xe6;
LAB_ram_00400f88:
    uVar5 = 0x31;
    uStack47 = uVar3;
    break;
  case 0xb:
    unaff_a5 = (uint *)0x11;
    uVar1 = 0x11;
    goto LAB_ram_00400f94;
  case 0xc:
LAB_ram_00400f94:
    puVar4 = unaff_a5;
    uVar5 = 0x32;
    uStack47 = uVar1;
    break;
  case 0xd:
    uVar5 = 0x32;
LAB_ram_00400eff:
    uStack47 = 0x66;
  }
  bStack46 = (byte)puVar4;
  local_30 = (byte)uVar5;
LAB_ram_00400e3f:
  (**(code **)(g_phyFuns + 0xe0))(&local_30,puVar4,uVar5,unaff_a5,unaff_a6,unaff_a7);
  (**(code **)(g_phyFuns + 0xd8))(pbVar2,puVar4,uVar5,unaff_a5,unaff_a6,unaff_a7);
  ets_delay_us(uVar12,puVar4,uVar5,unaff_a5,unaff_a6,unaff_a7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_chip_50_set_channel(void)

{
  uint in_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int unaff_a4;
  undefined4 unaff_a6;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined2 in_stack_00000000;
  
  uVar4 = in_a2;
  (**(code **)(g_phyFuns + 0x80))();
  switch(in_a2) {
  case 0:
  default:
    iVar6 = 0x6a;
    iVar7 = 0x108;
    break;
  case 1:
    iVar6 = 0x2e1;
    iVar7 = 0x109;
    break;
  case 2:
    iVar7 = 0x105;
    iVar6 = 0x2b4;
    break;
  case 3:
    iVar7 = 0x108;
    iVar6 = 0x287;
    break;
  case 4:
    iVar7 = 0x109;
    iVar6 = 0x25a;
    break;
  case 5:
    iVar7 = 0x109;
    iVar6 = 0x22e;
    break;
  case 6:
    iVar7 = 0x10d;
    iVar6 = 0x202;
    break;
  case 7:
    iVar7 = 0xff;
    iVar6 = 0x1d6;
    break;
  case 8:
    iVar7 = 0x11b;
    iVar6 = 0x1aa;
    break;
  case 9:
    iVar7 = 0x108;
    iVar6 = 0x17e;
    break;
  case 10:
    iVar7 = 0x101;
    iVar6 = 0x153;
    break;
  case 0xb:
    iVar6 = 0x127;
    iVar7 = 0x102;
    break;
  case 0xc:
    iVar6 = 0xfc;
    iVar7 = 0x108;
    break;
  case 0xd:
    iVar6 = 0xd1;
    iVar7 = 0x108;
  }
  if (unaff_a4 != 0) {
    memw();
    if ((_DAT_ram_3ff20c70 >> 1 & 1) == 0) {
      unaff_a6 = 4;
      (**(code **)(g_phyFuns + 0x98))(0x67,4,7,4);
    }
    iVar3 = (uVar4 & 0xffff) * iVar7;
    (**(code **)(g_phyFuns + 0x7c))(1,iVar3,iVar7 * 0x960,unaff_a6);
    ets_delay_us(5,iVar3,iVar7 * 0x960,unaff_a6);
  }
  uVar5 = (iVar6 + 21000) * 0x20000;
  memw();
  uVar4 = _DAT_ram_60009b14 & 0x1fff | uVar5 | 0x6000;
  memw();
  if (in_a2 - 5 < 10) {
    uVar1 = SEXT14((char)(&DAT_ram_0040be5b)[in_a2]);
  }
  else {
    uVar1 = 0;
  }
  _DAT_ram_60009b14 = uVar4;
  __floatsidf(uVar1,uVar4,0x60009a00,0x6000,uVar5,in_stack_00000000);
  uVar2 = uVar1;
  __muldf3(uVar1,uVar4,0x9999999a,0x40499999,uVar5,in_stack_00000000);
  __adddf3(uVar2,uVar4,0,0x3fe00000,uVar5,in_stack_00000000);
  __fixdfsi(uVar2,uVar4,0,0x3fe00000,uVar5,in_stack_00000000);
  __muldf3(uVar1,uVar4,0x9999999a,0x40e99999,uVar5,in_stack_00000000);
  __adddf3(uVar1,uVar4,0,0x3fe00000,uVar5,in_stack_00000000);
  __fixdfsi(uVar1,uVar4,0,0x3fe00000,uVar5,in_stack_00000000);
  memw();
  memw();
  _DAT_ram_600098a0 = _DAT_ram_600098a0 & 0xc0000000 | (uVar2 & 0x3ff) << 0x14 | uVar1 & 0xfffff;
  return;
}



void rom_chip_v5_rx_init(void)

{
  (**(code **)(g_phyFuns + 0x98))(0x61,1,8,0x11);
  (**(code **)(g_phyFuns + 0x98))(0x61,1,6,0x15);
  (**(code **)(g_phyFuns + 0x98))(0x61,1,7,0x51);
  (**(code **)(g_phyFuns + 0x98))(100,0,4,0x79);
  (**(code **)(g_phyFuns + 0x98))(100,0,7,0x7b);
  return;
}



void rom_chip_v5_tx_init(void)

{
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,1,0x68);
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,2,0xf);
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,3,0xa8);
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,4,6);
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,5,8);
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,6,0xb8);
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,7,0x5b);
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,8,4);
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,9,0);
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,10,0x74);
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,0xb,7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_i2c_readReg(void)

{
  char *in_a2;
  char *pcVar1;
  char *unaff_a6;
  
  pcVar1 = in_a2;
  if (phy_interrup_flag != '\0') {
    pcVar1 = "INTP_ERR 0\n";
    printf("INTP_ERR 0\n");
  }
  vPortETSIntrLock(pcVar1);
  memw();
  memw();
  while (((uint)in_a2 >> 0x19 & 1) != 0) {
    memw();
    unaff_a6 = in_a2;
  }
  memw();
  phy_interrup_flag = 0;
  _DAT_ram_60000d00 = in_a2;
  vPortETSIntrUnlock(0x60000a00,in_a2,in_a2,0,unaff_a6,(uint)in_a2 >> 0x10 & 0xff);
  return;
}



void rom_i2c_readReg_Mask(void)

{
  (**(code **)(g_phyFuns + 0x90))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_i2c_writeReg(void)

{
  uint uVar1;
  char *in_a2;
  char *pcVar2;
  uint uVar3;
  uint unaff_a5;
  uint unaff_a7;
  
  pcVar2 = in_a2;
  if (phy_interrup_flag != '\0') {
    pcVar2 = "INTP_ERR 0\n";
    printf("INTP_ERR 0\n");
  }
  vPortETSIntrLock(pcVar2);
  uVar3 = (uint)in_a2 | unaff_a5;
  _DAT_ram_60000d00 = uVar3 | 0x1000000;
  memw();
  memw();
  uVar1 = uVar3 & 0x2000000;
  while (uVar1 != 0) {
    memw();
    unaff_a7 = _DAT_ram_60000d00;
    uVar1 = (uVar3 & 0x2000000) >> 0x19;
  }
  phy_interrup_flag = 0;
  vPortETSIntrUnlock(0x60000a00,_DAT_ram_60000d00,_DAT_ram_60000d00,0x1000000,unaff_a5,unaff_a7);
  return;
}



void rom_i2c_writeReg_Mask(void)

{
  (**(code **)(g_phyFuns + 0x90))();
  (**(code **)(g_phyFuns + 0x98))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_pbus_debugmode(void)

{
  uint uVar1;
  
  memw();
  if ((_DAT_ram_60000594 & 1) == 0) {
    memw();
    if ((_DAT_ram_3ff20c70 >> 1 & 1) != 0) {
      (**(code **)(g_phyFuns + 0x74))(_DAT_ram_60000594);
      ets_delay_us(5);
      do {
        do {
          uVar1 = 0;
          (**(code **)(g_phyFuns + 0xb0))(2,1);
        } while ((~uVar1 & 0x184) != 0);
        uVar1 = 3;
        (**(code **)(g_phyFuns + 0xb0))(3,2);
      } while ((uVar1 & 6) != 6);
    }
  }
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60000594 = _DAT_ram_60000594 | 1;
  _DAT_ram_60009b08 = _DAT_ram_60009b08 | 0x8000000;
  return;
}



void rom_pbus_enter_debugmode(void)

{
  undefined4 in_a2;
  
  (**(code **)(g_phyFuns + 0xa0))();
  (**(code **)(g_phyFuns + 0xc0))(1);
  (**(code **)(g_phyFuns + 0xd0))(in_a2);
  return;
}



void rom_pbus_exit_debugmode(void)

{
  undefined4 in_a2;
  
  (**(code **)(g_phyFuns + 200))();
  (**(code **)(g_phyFuns + 0xc4))(in_a2);
  (**(code **)(g_phyFuns + 0xbc))(in_a2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_pbus_force_test(void)

{
  memw();
  memw();
  memw();
  while (_DAT_ram_600005a0 < 0) {
    memw();
  }
  memw();
  memw();
  _DAT_ram_60000594 = _DAT_ram_60000594 & 0xffff0001;
  return;
}



void rom_pbus_rd(void)

{
  int in_a2;
  int unaff_a3;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_20;
  undefined4 uStack28;
  
  iVar1 = unaff_a3 + -4;
  iVar2 = unaff_a3 + -1;
  uStack28 = 0xc0b0907;
  local_20 = 0x5040200;
  if (iVar1 == 0) {
    iVar2 = 2;
  }
  uVar3 = iVar2 + (uint)*(byte *)((int)&local_20 + in_a2) & 0xff;
  if (uVar3 != 0xc) {
    __umodsi3(uVar3,3,iVar1,0xc0b0907,0x5040200);
  }
  __udivsi3(uVar3,3,iVar1,0xc0b0907,0x5040200);
  memw();
  return;
}



void rom_pbus_set_rxgain(void)

{
  uint in_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 3;
  (**(code **)(g_phyFuns + 0xb0))(3,2);
  uVar2 = 0;
  (**(code **)(g_phyFuns + 0xb0))(2,1);
  uVar3 = in_a2 >> 9 & 1;
  (**(code **)(g_phyFuns + 0xac))(3,1,in_a2 >> 9 & 1,0,uVar3,0);
  (**(code **)(g_phyFuns + 0xac))(3,2,uVar1 & 0x1c7,0,uVar3,0);
  (**(code **)(g_phyFuns + 0xac))(2,1,uVar2 & 0x185,uVar2 & 0x185,0,0x185);
  return;
}



void rom_pbus_set_txgain(void)

{
  uint in_a2;
  
  (**(code **)(g_phyFuns + 0xac))(4,1,in_a2 >> 7 & 3,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_pbus_workmode(void)

{
  memw();
  _DAT_ram_60000594 = _DAT_ram_60000594 & 0xfffffffe;
  memw();
  memw();
  _DAT_ram_60009b08 = _DAT_ram_60009b08 & 0xf7ffffff;
  memw();
  (**(code **)(g_phyFuns + 0x78))
            (_DAT_ram_60009b08,0x60009a00,0xf7ffffff,_DAT_ram_60000594,0x60000200,0xfffffffe);
  return;
}



void rom_pbus_xpd_rx_off(void)

{
  short in_a2;
  
  (**(code **)(g_phyFuns + 0xac))(2,1,in_a2 + 0x80);
  (**(code **)(g_phyFuns + 0xac))(3,1,0);
  (**(code **)(g_phyFuns + 0xac))(3,2,0);
  return;
}



void rom_pbus_xpd_rx_on(void)

{
  (**(code **)(g_phyFuns + 0xac))(2,1,0x184);
  (**(code **)(g_phyFuns + 0xac))(3,2,6);
  return;
}



void rom_pbus_xpd_tx_off(void)

{
  (**(code **)(g_phyFuns + 0xac))(6,1,0);
  (**(code **)(g_phyFuns + 0xac))(1,1,0xc);
  (**(code **)(g_phyFuns + 0xac))(2,1,0x80);
  return;
}



void rom_pbus_xpd_tx_on(void)

{
  undefined4 in_a2;
  
  (**(code **)(g_phyFuns + 0xac))(2,1,0x81);
  (**(code **)(g_phyFuns + 0xac))(7,1,0x5f);
  (**(code **)(g_phyFuns + 0xac))(0,1,in_a2);
  (**(code **)(g_phyFuns + 0xac))(1,1,0x7f);
  (**(code **)(g_phyFuns + 0xac))(6,1,0x7f);
  return;
}



void rom_pbus_xpd_tx_on__low_gain(void)

{
  undefined4 in_a2;
  
  (**(code **)(g_phyFuns + 0xac))(2,1,0x81);
  (**(code **)(g_phyFuns + 0xac))(7,1,0);
  (**(code **)(g_phyFuns + 0xac))(0,1,in_a2);
  (**(code **)(g_phyFuns + 0xac))(1,1,0x7f);
  (**(code **)(g_phyFuns + 0xac))(6,1,0x7f);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_phy_reset_req(void)

{
  memw();
  memw();
  _DAT_ram_60000710 = _DAT_ram_60000710 & 0xc3ffffff;
  return;
}



void rom_restart_cal(void)

{
  (**(code **)(g_phyFuns + 0x98))(0x62,1,0,0x5f);
  (**(code **)(g_phyFuns + 0x98))(0x62,1,0,0x7f);
  (**(code **)(g_phyFuns + 0x98))(0x62,1,0,0x3f);
  return;
}



void rom_rfpll_reset(void)

{
  (**(code **)(g_phyFuns + 0x98))(0x62,1,10,0xa6);
  (**(code **)(g_phyFuns + 0x98))(0x62,1,10,0xa7);
  (**(code **)(g_phyFuns + 0x98))(0x62,1,10,0xa5);
  (**(code **)(g_phyFuns + 0x98))(99,0,1,0xf3);
  (**(code **)(g_phyFuns + 0x98))(0x62,1,0xb,0xc0);
  return;
}



void rom_write_rfpll_sdm(void)

{
  undefined *in_a2;
  
  (**(code **)(g_phyFuns + 0x98))(99,0,0,7);
  (**(code **)(g_phyFuns + 0x98))(99,0,3,*in_a2);
  (**(code **)(g_phyFuns + 0x98))(99,0,4,in_a2[1]);
  (**(code **)(g_phyFuns + 0x98))(99,0,5,in_a2[2]);
  (**(code **)(g_phyFuns + 0x98))(99,0,0,0x17);
  return;
}



void rom_rfpll_set_freq(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_a3;
  undefined *unaff_a5;
  
  uVar1 = 0;
  __floatunsidf(0);
  __divdf3(uVar1);
  __truncdfsf2(uVar1);
  __extendsfdf2(uVar1);
  if (unaff_a3 == 0) {
    __divdf3(uVar1);
    __adddf3(uVar1);
    __truncdfsf2(uVar1);
  }
  else {
    __divdf3(uVar1);
    __adddf3(uVar1);
    __truncdfsf2(uVar1);
  }
  uVar2 = uVar1;
  __fixunssfsi(uVar1);
  *unaff_a5 = (char)uVar2;
  uVar2 = uVar2 & 0xff;
  __floatsisf(uVar2);
  __subsf3(uVar1,uVar2,0,0xc0400000);
  __mulsf3(uVar1,0x43800000,0,0xc0400000);
  uVar2 = uVar1;
  __fixunssfsi(uVar1,0x43800000,0,0xc0400000);
  unaff_a5[1] = (char)uVar2;
  uVar2 = uVar2 & 0xff;
  __floatsisf(uVar2,0x43800000,0,0xc0400000);
  __subsf3(uVar1,uVar2,0,0xc0400000);
  __mulsf3(uVar1,0x43800000,0,0xc0400000);
  __fixunssfsi(uVar1,0x43800000,0,0xc0400000);
  unaff_a5[2] = (char)uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_cal_tos_v50(void)

{
  int in_a2;
  undefined2 unaff_a3;
  char cVar1;
  undefined4 unaff_a4;
  uint unaff_a5;
  char *unaff_a6;
  char cVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  short sVar6;
  uint uStack40;
  char *pcVar7;
  uint uVar8;
  
  sVar6 = 0x40;
  sVar4 = 0x40;
  pcVar7 = unaff_a6;
  uVar8 = unaff_a5;
  (**(code **)(g_phyFuns + 0xac))(0,1,unaff_a3);
  if (uVar8 != 0) {
    iVar3 = 0x14;
    cVar2 = '\x14';
    uStack40 = 0;
    do {
      (**(code **)(g_phyFuns + 0xac))(1,2,sVar4,unaff_a5,unaff_a6);
      (**(code **)(g_phyFuns + 0xac))(0,2,sVar6,unaff_a5,unaff_a6);
      memw();
      memw();
      _DAT_ram_60000d4c = 0x1113cf3;
      ets_delay_us(unaff_a4,0x1113cf1,sVar6,unaff_a5,unaff_a6);
      memw();
      unaff_a5 = 1;
      memw();
      unaff_a6 = (char *)(_DAT_ram_60000d4c & 0x40000000);
      if ((int)_DAT_ram_60000d4c < 0) {
        cVar5 = (char)sVar6 - cVar2;
        cVar1 = '\0';
        if (-1 < cVar5) {
          cVar1 = cVar5;
        }
      }
      else {
        cVar5 = cVar2 + (char)sVar6;
        cVar1 = '\x7f';
        if (cVar5 < -0x80) {
          cVar1 = cVar5;
        }
      }
      sVar6 = (short)cVar1;
      uStack40 = uStack40 + 1 & 0xff;
      if (unaff_a6 == (char *)0x0) {
        cVar5 = cVar2 + (char)sVar4;
        cVar1 = '\x7f';
        if (cVar5 < -0x80) {
          cVar1 = cVar5;
        }
      }
      else {
        cVar5 = (char)sVar4 - cVar2;
        cVar1 = '\0';
        if (-1 < cVar5) {
          cVar1 = cVar5;
        }
      }
      sVar4 = (short)cVar1;
      if (cVar2 != '\x01') {
        cVar2 = (char)(iVar3 >> 1);
        iVar3 = (int)cVar2;
      }
    } while (uVar8 != uStack40);
  }
  cVar2 = (char)sVar4;
  (**(code **)(g_phyFuns + 0xac))(1,2,(int)cVar2 & 0xffff,unaff_a5,unaff_a6);
  cVar1 = (char)sVar6;
  (**(code **)(g_phyFuns + 0xac))(0,2,(int)cVar1 & 0xffff,unaff_a5,unaff_a6);
  (**(code **)(g_phyFuns + 0xac))(1,1,0x7f,unaff_a5,unaff_a6);
  memw();
  _DAT_ram_60000d4c = 0x1113cf0;
  *pcVar7 = cVar1;
  pcVar7[1] = cVar2;
  if (in_a2 != 0) {
    memw();
    _DAT_ram_60009864 = _DAT_ram_60009864 & 0x3ffff | (int)cVar2 << 0x19 | (int)cVar1 << 0x12;
    memw();
  }
  return;
}



void rom_pbus_dco___SA2(void)

{
  undefined *puVar1;
  uint in_a2;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int unaff_a3;
  uint uVar5;
  undefined4 unaff_a4;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint unaff_a5;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int unaff_a6;
  uint uVar13;
  uint *unaff_a7;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  short *psVar18;
  byte bVar19;
  uint uStack112;
  uint *puStack108;
  uint uStack104;
  uint uVar20;
  int iStack56;
  uint uStack44;
  int iVar21;
  uint uStack28;
  uint uStack24;
  uint uStack20;
  uint uStack16;
  
  uStack44 = 0;
  uVar20 = unaff_a5;
  (**(code **)(g_phyFuns + 0xb0))(3,1);
  if ((uStack44 & 0x7c) == 0) {
    uStack104 = 0;
  }
  else {
    uStack104 = 0;
    uStack20 = uStack44 & 0x7c;
    do {
      unaff_a5 = uStack20 >> 1;
      uStack104 = uStack104 + (uStack20 & 1) & 0xff;
      uStack20 = unaff_a5;
    } while (unaff_a5 != 0);
  }
  uVar17 = 0;
  (**(code **)(g_phyFuns + 0xb0))(3,2,uStack44 & 0x7c,unaff_a5);
  (**(code **)(g_phyFuns + 0xac))(4,2,0x100,unaff_a5);
  (**(code **)(g_phyFuns + 0xac))(5,2,0x100,unaff_a5);
  uVar2 = uStack104 + 6;
  uStack20 = uVar2 & 0xff;
  if (uStack104 < 3) {
    uStack24 = 2;
  }
  else {
    uStack24 = 10;
    if (uStack104 < 4) {
      uStack24 = 5;
    }
  }
  uVar5 = 5;
  uVar17 = uVar17 >> 3 & 0xff;
  uStack28 = 0;
  iStack56 = 2;
  if (uStack104 < 4) {
    uVar5 = 2;
  }
  do {
    iVar16 = 0x200;
    iVar15 = 0x200;
    uStack16 = 0;
    psVar18 = (short *)(uStack28 * 4 + unaff_a3);
    uVar9 = uStack28 + 1;
    uVar10 = uVar9 & 0xff;
    iVar21 = unaff_a6;
    do {
      puVar1 = g_phyFuns;
      iVar11 = (int)(iVar15 + 1U) >> 1;
      *psVar18 = (short)iVar11;
      (**(code **)(puVar1 + 0xac))(4,uVar10,iVar15 + 1U >> 1 & 0xffff,iVar11,0,unaff_a7);
      puVar1 = g_phyFuns;
      iVar11 = (int)(iVar16 + 1U) >> 1;
      psVar18[1] = (short)iVar11;
      uVar6 = iVar16 + 1U >> 1 & 0xffff;
      (**(code **)(puVar1 + 0xac))(5,uVar10,uVar6,iVar11,0,unaff_a7);
      ets_delay_us(unaff_a4,uVar10,uVar6,iVar11,0,unaff_a7);
      puVar7 = &uStack112;
      (**(code **)(g_phyFuns + 0x10))(1,in_a2,puVar7,iVar11,0,unaff_a7);
      uVar6 = in_a2;
      if (iVar21 != 0) {
        printf(" (%d,%d) ",iVar15,iVar16,iVar11,0,unaff_a7);
        puVar7 = puStack108;
        uVar6 = uStack112;
        printf("%d,%d ",uStack112,puStack108,iVar11,0,unaff_a7);
      }
      uVar3 = uStack112;
      (**(code **)g_phyFuns)(uStack112,uVar6,puVar7,iVar11,0,unaff_a7);
      if (((int)uVar3 <= (int)uStack24) &&
         (puVar4 = puStack108, (**(code **)g_phyFuns)(puStack108,uStack24,puVar7,iVar11,0,unaff_a7),
         uVar6 = uStack24, (int)puVar4 <= (int)uStack24)) break;
      if (uStack28 == 0) {
        uStack20 = uVar2 & 0xff;
        bVar19 = (byte)uVar2 & 0x1f;
        iVar14 = (int)((int)puStack108 * (uint)(byte)s_iVPH_72_ram_0040d4e0[uVar17]) >> bVar19;
        iVar11 = (int)(uStack112 * (byte)s_iVPH_72_ram_0040d4e0[uVar17]) >> bVar19;
      }
      else {
        bVar19 = (byte)uStack20 & 0x1f;
        iVar14 = 0 >> bVar19;
        iVar11 = 0 >> bVar19;
      }
      iVar15 = iVar15 - iVar11 >> 0x10;
      uVar6 = uStack16 + 1;
      iVar11 = iVar16 - iVar14 >> 0x10;
      uStack16 = uVar6 & 0xff;
      iVar16 = 0x3ff;
      if (iVar15 < 0x400) {
        iVar16 = iVar15;
      }
      iVar15 = 0;
      if (-1 < iVar16) {
        iVar15 = iVar16;
      }
      iVar15 = iVar15 >> 0x10;
      iVar14 = 0x3ff;
      if (iVar11 < 0x400) {
        iVar14 = iVar11;
      }
      iVar16 = 0;
      if (-1 < iVar14) {
        iVar16 = iVar14;
      }
      iVar16 = iVar16 >> 0x10;
    } while (uStack16 != 0xc);
    uVar3 = uStack104;
    puVar7 = puStack108;
    uVar10 = uStack112;
    unaff_a7 = (uint *)(uStack44 >> 4 & 1);
    uStack44 = (uStack44 >> 2 & 3) + (int)unaff_a7;
    if (uStack44 == 0) {
      uStack20 = 4;
    }
    else {
      uStack20 = 5;
      if (1 < uStack44) {
        uStack20 = 6;
      }
    }
    uVar8 = uStack44;
    uVar12 = uVar5;
    uVar13 = uStack44;
    unaff_a6 = iVar21;
    if (uVar20 != 0) {
      printf("stage %d: CGAIN=%d FGAIN=%d, DC_OS=(%d,%d), DAC=(%d,%d) \n",uVar9,uStack104,uVar17,
             uStack112,puStack108,(int)*psVar18,(int)psVar18[1]);
      uVar6 = uVar9;
      uVar8 = uVar3;
      uVar12 = uVar17;
      uVar13 = uVar10;
      unaff_a7 = puVar7;
    }
    if (iVar21 != 0) {
      printf("\n",uVar6,uVar8,uVar12,uVar13,unaff_a7);
    }
    iStack56 = iStack56 + -1;
    uStack28 = uVar9 & 0xff;
    uStack24 = uVar5;
    if (iStack56 == 0) {
      if (uVar20 != 0) {
        printf("\n",uVar6,uVar8,uVar12,0,unaff_a7);
      }
      return;
    }
  } while( true );
}



void rom_rfcal_pwrctrl(void)

{
  int iVar1;
  undefined4 in_a2;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint unaff_a3;
  uint uVar7;
  uint uVar8;
  uint unaff_a4;
  uint unaff_a5;
  uint unaff_a6;
  uint unaff_a7;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  char cVar14;
  ushort in_stack_00000000;
  ushort in_stack_00000004;
  byte in_stack_00000008;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  uVar15 = unaff_a3;
  uVar16 = unaff_a7;
  uVar17 = unaff_a4;
  uVar18 = unaff_a5;
  (**(code **)(g_phyFuns + 0xa0))();
  (**(code **)(g_phyFuns + 0xc0))(1);
  (**(code **)(g_phyFuns + 0xcc))(unaff_a6 & 0x1f);
  (**(code **)(g_phyFuns + 0x18))(0);
  if (uVar17 != 0) {
    uVar12 = 0;
    uVar7 = (uint)in_stack_00000000;
    uVar9 = (unaff_a6 >> 3 & 3) * 6 + (unaff_a6 & 7);
    unaff_a4 = (uint)in_stack_00000008;
    unaff_a5 = (uint)in_stack_00000004;
    unaff_a7 = uVar9;
    do {
      iVar13 = 0;
      cVar14 = '\0';
      uVar10 = (uint)*(byte *)(uVar15 + uVar12);
      iVar11 = uVar10 - uVar18;
      do {
        uVar8 = iVar11 - iVar13 & 0xff;
        uVar2 = uVar9;
        (**(code **)(g_phyFuns + 0x1c))(uVar9,uVar8,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
        uVar3 = uVar2 & 0xff;
        uVar4 = uVar3;
        (**(code **)(g_phyFuns + 0x50))(uVar3,uVar8,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
        unaff_a5 = 0;
        unaff_a7 = 0;
        (**(code **)(g_phyFuns + 0x68))(1,in_a2,uVar4,0,0,0,0,0,0);
        if ((uVar12 == 0) && (cVar14 == '\0')) {
          ets_delay_us((uint)in_stack_00000004,in_a2,uVar4,0,0,0);
        }
        uVar8 = uVar7;
        (**(code **)(g_phyFuns + 0x2c))(uVar7,in_a2,uVar4,0,0,0);
        uVar5 = uVar7;
        (**(code **)(g_phyFuns + 0x2c))(uVar7,in_a2,uVar4,0,0,0);
        iVar1 = ((int)(uVar8 + uVar5) >> 0x10) + 4 >> 3;
        unaff_a6 = (int)(iVar1 - uVar10) >> 0x10;
        unaff_a4 = uVar4;
        if (unaff_a6 == 0) break;
        iVar13 = unaff_a6 + iVar13;
        cVar14 = cVar14 + '\x01';
      } while (cVar14 != '\x04');
      if (uVar3 < uVar18) {
        iVar11 = 0;
      }
      else {
        iVar11 = uVar2 - uVar18;
      }
      *(char *)(uVar16 + uVar12) = (char)iVar11;
      unaff_a3 = uVar18;
      if (in_stack_00000008 != 0) {
        unaff_a5 = SEXT14((char)iVar1);
        printf("pwctrl: rate_i=%d, target_power=%d, detect_power=%d\n",uVar12,uVar10,unaff_a5,iVar11
               ,0);
        unaff_a3 = uVar12;
        unaff_a4 = uVar10;
      }
      uVar12 = uVar12 + 1 & 0xff;
      unaff_a6 = uVar17 - uVar12;
    } while (unaff_a6 != 0);
  }
  uVar6 = 1;
  (**(code **)(g_phyFuns + 0x6c))(1,unaff_a3,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
  (**(code **)(g_phyFuns + 200))(uVar6,unaff_a3,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
  (**(code **)(g_phyFuns + 0xc4))(uVar6,unaff_a3,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
  (**(code **)(g_phyFuns + 0xbc))(uVar6,unaff_a3,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
  return;
}



void rom_rfcal_rxiq(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_a2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_a3;
  undefined4 unaff_a4;
  undefined *unaff_a5;
  int unaff_a6;
  int iVar8;
  int iVar9;
  byte bStack64;
  byte bStack63;
  undefined uStack62;
  undefined uStack61;
  undefined4 uStack60;
  
  iVar3 = 0x77;
  uStack60 = in_a2;
  (**(code **)(g_phyFuns + 0x94))(0x77,0,0x10,0,0);
  iVar4 = 0x77;
  (**(code **)(g_phyFuns + 0x94))(0x77,0,0xf,6,6);
  iVar5 = 0x77;
  (**(code **)(g_phyFuns + 0x94))(0x77,0,0x18,5,5);
  iVar6 = 0x77;
  (**(code **)(g_phyFuns + 0x94))(0x77,0,0x18,3,3);
  uVar7 = 0x77;
  (**(code **)(g_phyFuns + 0x94))(0x77,0,9,7,0);
  (**(code **)(g_phyFuns + 0x40))(1,0,9,7,0);
  if (iVar4 != 0) {
    iVar4 = 1;
  }
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  bStack64 = (byte)iVar3;
  bStack63 = (byte)iVar4;
  if (unaff_a6 != 0) {
    (**(code **)(g_phyFuns + 0x114))(&bStack64,&bStack63,9,7,0);
  }
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,2,2,1);
  iVar9 = iVar3 - (uint)bStack64;
  iVar8 = iVar4 - (uint)bStack63;
  if (iVar8 != 0) {
    iVar8 = 1;
  }
  if (iVar9 != 0) {
    iVar9 = 1;
  }
  bStack64 = (byte)iVar9;
  bStack63 = (byte)iVar8;
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,7,7,1);
  (**(code **)(g_phyFuns + 0x50))(unaff_a4,0,0x18,7,7,1);
  (**(code **)(g_phyFuns + 0x68))(1,unaff_a3,unaff_a4,0,0,0,0,0,0);
  bVar2 = bStack63;
  bVar1 = bStack64;
  if (iVar6 != 0) {
    iVar6 = 1;
  }
  if (iVar5 != 0) {
    iVar5 = 1;
  }
  (**(code **)(g_phyFuns + 0x10c))(uStack60,bStack64,bStack63,iVar5,iVar6,&uStack62,&uStack61);
  (**(code **)(g_phyFuns + 0x6c))(1,bVar1,bVar2,iVar5,iVar6,&uStack62);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,0,0,iVar3);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0xf,6,6,iVar4);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,5,5,iVar5);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,3,3,iVar6);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,9,7,0,uVar7);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,7,7,0);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,2,2,0);
  (**(code **)(g_phyFuns + 0x40))(0,0,0x10,2,2,0);
  *unaff_a5 = uStack62;
  unaff_a5[1] = uStack61;
  return;
}



void rom_rfcal_rxiq_set_reg(void)

{
  bool bVar1;
  int in_a2;
  int iVar2;
  int iVar3;
  undefined4 unaff_a3;
  int unaff_a4;
  int unaff_a5;
  uint uVar4;
  uint unaff_a13;
  
  if (unaff_a5 != 0) {
    bVar1 = in_a2 < 0;
    if (bVar1) {
      in_a2 = (int)(char)-(char)in_a2;
    }
    unaff_a13 = (uint)bVar1;
    *(bool *)unaff_a3 = bVar1;
  }
  iVar2 = 0x1f;
  if (unaff_a4 != 0) {
    iVar2 = 0xf;
  }
  if (unaff_a5 == 0) {
    iVar3 = iVar2;
    if ((in_a2 <= iVar2) && (iVar3 = in_a2, in_a2 < -iVar2)) {
      iVar3 = -iVar2;
    }
    uVar4 = SEXT14((char)iVar3);
  }
  else {
    if (in_a2 < iVar2) {
      iVar2 = in_a2;
    }
    uVar4 = SEXT14((char)iVar2);
    if (unaff_a4 == 0) {
      (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,3,3,unaff_a13);
    }
    else {
      (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,5,5,unaff_a13);
    }
  }
  if (unaff_a4 == 0) {
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x19,7,5,uVar4 >> 3 & 7);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1a,2,0,uVar4 & 7);
  }
  else {
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x19,4,0,uVar4 & 0x1f);
  }
  return;
}



void rom_rfcal_txcap(void)

{
  code *pcVar1;
  uint *in_a2;
  int iVar2;
  uint *unaff_a3;
  uint uVar3;
  uint unaff_a4;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int unaff_a7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte in_stack_00000000;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uStack44;
  int iStack40;
  uint uStack32;
  
  if ((*in_a2 >> 0x12 & 1) == 0) {
    pcVar1 = *(code **)(g_phyFuns + 0xa0);
    *unaff_a3 = 0;
    (*pcVar1)(0);
    (**(code **)(g_phyFuns + 0xc0))(1);
    (**(code **)(g_phyFuns + 0xcc))(unaff_a4 & 0x1f);
    (**(code **)(g_phyFuns + 0x18))(0);
    (**(code **)(g_phyFuns + 0x50))();
    uVar7 = 0;
    uVar8 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    (**(code **)(g_phyFuns + 0x68))(1);
    uVar11 = 0;
    uVar6 = 3;
    uVar4 = (uint)in_stack_00000000;
    iStack40 = 3;
    uStack44 = 3;
    uVar5 = uVar4;
    do {
      if (uVar11 < 3) {
        uVar8 = (uint)(byte)(&DAT_ram_0040bf64)[uVar11];
        uStack44 = uVar8;
      }
      iVar12 = 0;
      uVar10 = 0;
      uStack32 = 0;
      uVar9 = uStack44 + 1;
      iVar2 = unaff_a7;
      do {
        if (uVar11 == 0) {
          uVar5 = 1;
          uVar6 = 3;
          uVar7 = 0;
          (**(code **)(g_phyFuns + 0x9c))(0x6b,2,1,3,0,uVar10,uVar13,uVar14,uVar15);
          uVar8 = uVar10;
        }
        else {
          if (uVar11 == 1) {
            uVar5 = 2;
            uVar6 = 3;
            uVar7 = 0;
            (**(code **)(g_phyFuns + 0x9c))(0x6b,2,2,3,0,uVar10);
            uVar8 = uVar10;
          }
          else {
            if (uVar11 == 2) {
              uVar5 = 2;
              uVar6 = 6;
              uVar7 = 4;
              (**(code **)(g_phyFuns + 0x9c))(0x6b,2,2,6,4,uVar10);
              uVar8 = uVar10;
            }
          }
        }
        unaff_a7 = iVar2;
        (**(code **)(g_phyFuns + 0x70))(iVar2,10,uVar5,uVar6,uVar7,uVar8);
        uVar3 = 10;
        if (uVar4 != 0) {
          printf("num_k=%d, power_out=%d, ",uVar10,iVar2,uVar6,uVar7,uVar8);
          uVar3 = uVar10;
        }
        if (iVar12 < iVar2) {
          iVar12 = iVar2;
          uStack32 = uVar10;
        }
        uVar10 = uVar10 + 1 & 0xff;
        uVar5 = uVar9;
        iVar2 = unaff_a7;
      } while (uVar9 != uVar10);
      if (uVar4 != 0) {
        printf("reg_i=%d, indata=%d\n",uVar11,uStack32,uVar6,uVar7,uVar8);
        uVar3 = uVar11;
        uVar5 = uStack32;
      }
      if (uVar11 == 0) {
        uVar3 = 2;
        uVar5 = 1;
        uVar6 = 3;
        uVar7 = 0;
        (**(code **)(g_phyFuns + 0x9c))(0x6b,2,1,3,0,uStack32);
        uVar8 = uStack32;
      }
      else {
        if (uVar11 == 1) {
          uVar3 = 2;
          uVar5 = 2;
          uVar6 = 3;
          uVar7 = 0;
          (**(code **)(g_phyFuns + 0x9c))(0x6b,2,2,3,0,uStack32);
          uVar8 = uStack32;
        }
        else {
          if (uVar11 == 2) {
            uVar3 = 2;
            uVar5 = 2;
            uVar6 = 6;
            uVar7 = 4;
            (**(code **)(g_phyFuns + 0x9c))(0x6b,2,2,6,4,uStack32);
            uVar8 = uStack32;
          }
        }
      }
      uVar11 = uVar11 + 1 & 0xff;
      iStack40 = iStack40 + -1;
      *unaff_a3 = uStack32 | *unaff_a3;
    } while (iStack40 != 0);
    uVar13 = 1;
    (**(code **)(g_phyFuns + 0x6c))(1,uVar3,uVar5,uVar6,uVar7,uVar8);
    (**(code **)(g_phyFuns + 0xa8))(uVar13,uVar3,uVar5,uVar6,uVar7,uVar8);
    *in_a2 = *in_a2 | 0x40000;
  }
  else {
    (**(code **)(g_phyFuns + 0x9c))(0x6b,2,1,3,0,*unaff_a3 >> 0x10 & 0xff);
    (**(code **)(g_phyFuns + 0x9c))(0x6b,2,2,3,0,*unaff_a3 >> 8 & 0xff);
    (**(code **)(g_phyFuns + 0x9c))(0x6b,2,2,6,4,*(undefined *)unaff_a3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_rfcal_txiq(void)

{
  undefined4 uVar1;
  char cVar2;
  uint *in_a2;
  int iVar3;
  uint uVar4;
  uint *unaff_a3;
  uint unaff_a4;
  int iVar5;
  undefined4 unaff_a5;
  undefined4 unaff_a6;
  undefined4 unaff_a7;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char in_stack_00000000;
  undefined in_stack_00000004;
  char local_40;
  char cStack63;
  undefined4 uStack60;
  int iStack56;
  
  if ((*in_a2 >> 0x11 & 1) == 0) {
    iStack56 = 0x77;
    (**(code **)(g_phyFuns + 0x94))(0x77,0,0x10,0,0);
    iVar3 = 0x77;
    (**(code **)(g_phyFuns + 0x94))(0x77,0,0xf,6,6);
    uStack60 = 0x77;
    (**(code **)(g_phyFuns + 0x94))(0x77,0,9,7,0);
    (**(code **)(g_phyFuns + 0xa0))(uStack60,0,9,7,0);
    (**(code **)(g_phyFuns + 0xc0))(1,0,9,7,0);
    (**(code **)(g_phyFuns + 0xcc))(unaff_a4 & 0x1f,0,9,7,0);
    (**(code **)(g_phyFuns + 0x18))(0,0,9,7,0);
    (**(code **)(g_phyFuns + 0x3c))(1,0,9,7,0);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,2,2,1);
    if (in_stack_00000000 != '\0') {
      printf("txiq: tone_atten=%d\n",unaff_a6,0x10,2,2,1);
    }
    txiq_cover(unaff_a6,unaff_a5,&local_40,unaff_a7,in_stack_00000000,in_stack_00000004);
    iVar7 = iStack56;
    (**(code **)(g_phyFuns + 0x6c))
              (1,unaff_a5,&local_40,unaff_a7,in_stack_00000000,in_stack_00000004);
    uVar1 = uStack60;
    if (iVar7 != 0) {
      iVar7 = 1;
    }
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,0,0,iVar7);
    if (iVar3 != 0) {
      iVar3 = 1;
    }
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0xf,6,6,iVar3);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,9,7,0,uVar1);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,2,2,0);
    memw();
    _DAT_ram_60009a28 = _DAT_ram_60009a28 | 0x20;
    memw();
    memw();
    _DAT_ram_6000983c = _DAT_ram_6000983c & 0xfffffff0 | 2;
    memw();
    memw();
    _DAT_ram_60009864 = _DAT_ram_60009864 & 0xfffffe0e | 1;
    memw();
    cVar2 = -0xf;
    if (-0x10 < local_40) {
      cVar2 = local_40;
    }
    local_40 = '\x0f';
    if (cVar2 < '\x10') {
      local_40 = cVar2;
    }
    iVar7 = (int)local_40;
    iVar3 = -0x1f;
    if (-0x20 < cStack63) {
      iVar3 = (int)cStack63;
    }
    iVar5 = 0x1f;
    if (iVar3 < 0x20) {
      iVar5 = iVar3;
    }
    cStack63 = (char)iVar5;
    uVar4 = SEXT14(cStack63);
    if (iVar7 < 1) {
      iVar7 = -iVar7;
    }
    else {
      iVar7 = 0x20 - iVar7;
    }
    uVar6 = uVar4 + 0x40;
    if (-1 < (int)uVar4) {
      uVar6 = uVar4;
    }
    uVar8 = SEXT14((char)iVar7);
    (**(code **)(g_phyFuns + 0xa8))(uVar4,iVar7,iVar5,0x20,0xfffffe0e,_DAT_ram_6000983c);
    *unaff_a3 = (int)(char)uVar6;
    *in_a2 = *in_a2 | 0x20000;
  }
  else {
    uVar6 = *unaff_a3;
    uVar8 = uVar6 >> 8;
  }
  memw();
  memw();
  _DAT_ram_60009860 =
       _DAT_ram_60009860 & 0xe000ffff | uVar8 << 0x18 | (int)(char)uVar6 << 0x12 | 0x30000U;
  return;
}



void rom_rfcal_txiq_cover(void)

{
  return;
}



void rom_rfcal_txiq_set_reg(void)

{
  int in_a2;
  int iVar1;
  int iVar2;
  int unaff_a3;
  int unaff_a4;
  byte bVar3;
  undefined4 unaff_a15;
  
  if (unaff_a4 != 0) {
    if (in_a2 < 0) {
      unaff_a15 = 1;
      in_a2 = (int)(char)-(char)in_a2;
    }
    else {
      unaff_a15 = 0;
    }
  }
  iVar1 = 0x1f;
  if (unaff_a3 != 0) {
    iVar1 = 0xf;
  }
  if (unaff_a4 == 0) {
    iVar2 = iVar1;
    if ((in_a2 <= iVar1) && (iVar2 = in_a2, in_a2 < -iVar1)) {
      iVar2 = -iVar1;
    }
    bVar3 = (byte)iVar2;
  }
  else {
    if (in_a2 < iVar1) {
      iVar1 = in_a2;
    }
    bVar3 = (byte)iVar1;
    if (unaff_a3 == 0) {
      (**(code **)(g_phyFuns + 0x9c))(0x77,0,0xf,6,6,unaff_a15);
    }
    else {
      (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,0,0,unaff_a15);
    }
  }
  if (unaff_a3 == 0) {
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x11,5,0,bVar3 & 0x3f);
  }
  else {
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,7,3,bVar3 & 0x1f);
  }
  return;
}



void rom_rxiq_cover_mg_mp(void)

{
  int iVar1;
  undefined4 in_a2;
  int iVar2;
  undefined4 unaff_a3;
  undefined4 unaff_a4;
  int unaff_a5;
  int iVar3;
  int unaff_a6;
  char *unaff_a7;
  int iVar4;
  int iVar5;
  char *in_stack_00000000;
  undefined in_stack_00000004;
  undefined in_stack_00000008;
  byte bStack64;
  byte bStack63;
  char cStack62;
  char cStack61;
  char *pcVar6;
  undefined4 uVar7;
  int iStack4;
  
  iVar5 = 0;
  iStack4 = 2;
  iVar1 = 0;
  pcVar6 = unaff_a7;
  iVar2 = unaff_a6;
  do {
    (**(code **)(g_phyFuns + 0xf8))(iVar1,&bStack64,1,in_stack_00000004,unaff_a6,unaff_a7);
    (**(code **)(g_phyFuns + 0xf8))(iVar5,&bStack63,0,in_stack_00000004,unaff_a6,unaff_a7);
    (**(code **)(g_phyFuns + 0x34))
              (1,1 << 0x20 - (' ' - ((byte)in_a2 & 0x1f)) & 0xffff,0,in_stack_00000004,unaff_a6,
               unaff_a7);
    unaff_a6 = (uint)bStack64 - unaff_a5;
    if (unaff_a6 != 0) {
      unaff_a6 = 1;
    }
    bStack64 = (byte)unaff_a6;
    iVar3 = (uint)bStack63 - iVar2;
    if (iVar3 != 0) {
      iVar3 = 1;
    }
    bStack63 = (byte)iVar3;
    unaff_a7 = &cStack62;
    uVar7 = unaff_a4;
    (**(code **)(g_phyFuns + 0x48))
              (in_a2,unaff_a3,unaff_a4,iVar3,unaff_a6,unaff_a7,in_stack_00000008);
    iVar5 = (int)(char)((char)iVar5 - cStack61);
    iVar4 = (int)(char)(cStack62 + iVar1);
    (**(code **)(g_phyFuns + 0x30))(cStack62 + iVar1,iVar1,unaff_a4,iVar3,unaff_a6,unaff_a7);
    iStack4 = iStack4 + -1;
    iVar1 = iVar4;
    unaff_a4 = uVar7;
  } while (iStack4 != 0);
  iVar1 = -0xf;
  if (-0x10 < iVar4) {
    iVar1 = iVar4;
  }
  iVar2 = 0xf;
  if (iVar1 < 0x10) {
    iVar2 = iVar1;
  }
  iVar1 = -0x1f;
  if (-0x20 < iVar5) {
    iVar1 = iVar5;
  }
  iVar5 = 0x1f;
  if (iVar1 < 0x20) {
    iVar5 = iVar1;
  }
  (**(code **)(g_phyFuns + 0xf8))((int)(char)iVar2,&bStack64,1,in_stack_00000004,unaff_a6,unaff_a7);
  (**(code **)(g_phyFuns + 0xf8))((int)(char)iVar5,&bStack63,0,in_stack_00000004,unaff_a6,unaff_a7);
  *pcVar6 = (char)iVar2;
  *in_stack_00000000 = (char)iVar5;
  return;
}



void rom_set_txbb_atten(void)

{
  byte *in_a2;
  uint unaff_a3;
  uint uVar1;
  byte *unaff_a4;
  byte *pbVar2;
  int unaff_a5;
  int unaff_a6;
  uint uVar3;
  
  if (unaff_a6 != 0) {
    printf("bt, ");
    uVar1 = unaff_a3;
    pbVar2 = unaff_a4;
    if (unaff_a3 != 0) {
      uVar3 = 0;
      do {
        pbVar2 = (byte *)(uint)*(byte *)(unaff_a5 + uVar3);
        uVar1 = (uint)unaff_a4[uVar3] - (int)pbVar2;
        printf("%d, ",uVar1,pbVar2);
        uVar3 = uVar3 + 1 & 0xff;
      } while (unaff_a3 != uVar3);
    }
    printf("\n",uVar1,pbVar2);
  }
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,9,7,0,0);
  uVar1 = 0;
  do {
    if (uVar1 < 8) {
      uVar3 = (uint)*in_a2 + (uint)*unaff_a4;
    }
    else {
      uVar3 = (uint)unaff_a4[in_a2[uVar1 - 7]];
    }
    memw();
    memw();
    *(uint *)(&DAT_ram_60000504 + uVar1 * 4) =
         *(uint *)(&DAT_ram_60000504 + uVar1 * 4) & 0xffffff00 | -uVar3 & 0xff;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 != 0x18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_set_txiq_cal(void)

{
  char cVar1;
  uint uVar2;
  byte *in_a2;
  byte *unaff_a3;
  uint uVar3;
  
  memw();
  uVar3 = SEXT14((char)((byte)(_DAT_ram_60009860 >> 0x18) & 0x1f));
  memw();
  cVar1 = (char)((_DAT_ram_60009860 & 0xfc0000) >> 0x12);
  uVar2 = SEXT14(cVar1);
  if (0xf < uVar3) {
    uVar3 = uVar3 - 0x20;
  }
  if (0x1f < uVar2) {
    uVar2 = SEXT14((char)(cVar1 + -0x40));
  }
  *in_a2 = (byte)(-uVar3 >> 7) & 1;
  *unaff_a3 = (byte)(uVar2 >> 0x1f);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,0,0,*in_a2);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0xf,6,6,*unaff_a3);
  return;
}



void rom_abs_temp(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_chip_v5_disable_cca(void)

{
  memw();
  memw();
  _DAT_ram_60009b00 = _DAT_ram_60009b00 | 0x10000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_chip_v5_enable_cca(void)

{
  memw();
  memw();
  _DAT_ram_60009b00 = _DAT_ram_60009b00 & 0xefffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_chip_v5_sense_backoff(void)

{
  uint in_a2;
  uint uVar1;
  uint uVar2;
  
  if ((in_a2 >> 7 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1fc00;
  }
  memw();
  memw();
  uVar2 = 0;
  if ((char)in_a2 < '\0') {
    uVar2 = 0xfe;
  }
  memw();
  memw();
  _DAT_ram_60009c28 = _DAT_ram_60009c28 & 0xfffe03ff | uVar1;
  _DAT_ram_60009d24 = _DAT_ram_60009d24 & 0xffffff01 | uVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_dc_iq_est(void)

{
  undefined *puVar1;
  int iVar2;
  int unaff_a3;
  int *unaff_a4;
  int iVar3;
  
  (**(code **)(g_phyFuns + 0x34))();
  iVar3 = unaff_a3 + 1;
  memw();
  iVar2 = _DAT_ram_600005dc >> 6;
  __divsi3(iVar2,iVar3);
  *unaff_a4 = iVar2;
  memw();
  iVar2 = _DAT_ram_600005e0 >> 6;
  __divsi3(iVar2,iVar3);
  puVar1 = g_phyFuns;
  unaff_a4[1] = iVar2;
  (**(code **)(puVar1 + 0x30))(iVar2,iVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_en_pwdet(void)

{
  int in_a2;
  
  (**(code **)(g_phyFuns + 0x4c))();
  memw();
  memw();
  memw();
  memw();
  if (in_a2 == 0) {
    memw();
    _DAT_ram_60000d50 = _DAT_ram_60000d50 & 0xfffffffe;
    memw();
  }
  else {
    memw();
    _DAT_ram_60000d50 = _DAT_ram_60000d50 | 1;
    memw();
  }
  _DAT_ram_60000d5c = _DAT_ram_60000d5c & 0xff5fffff;
  return;
}



void rom_get_bb_atten(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_get_corr_power(void)

{
  int *in_a2;
  char unaff_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  memw();
  memw();
  memw();
  memw();
  bVar4 = unaff_a3 - 2;
  memw();
  iVar3 = _DAT_ram_600005dc >> (bVar4 & 0x1f);
  memw();
  iVar5 = _DAT_ram_600005e0 >> (bVar4 & 0x1f);
  memw();
  iVar1 = (_DAT_ram_60000580 >> 0x12) + (_DAT_ram_6000058c >> 0x12);
  iVar2 = (_DAT_ram_60000584 >> 0x12) - (_DAT_ram_60000588 >> 0x12);
  *in_a2 = _DAT_ram_600005e4 >> (bVar4 & 0x1f);
  in_a2[2] = iVar3 * iVar3 + iVar5 * iVar5 >> 0x10;
  in_a2[1] = iVar1 * iVar1 + iVar2 * iVar2 >> (unaff_a3 * '\x02' - 0x16U & 0x1f);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_get_fm_sar_dout(void)

{
  int iVar1;
  short *in_a2;
  short *unaff_a3;
  uint uVar2;
  short *psVar3;
  short local_20 [4];
  short sStack24;
  short sStack22;
  short sStack20;
  short sStack18;
  
  memw();
  memw();
  memw();
  _DAT_ram_60000d50 = _DAT_ram_60000d50 & 0xfffffffd | 2;
  memw();
  ets_delay_us(0x19);
  uVar2 = 0;
  do {
    iVar1 = uVar2 * 4;
    psVar3 = local_20 + uVar2;
    memw();
    uVar2 = uVar2 + 1 & 0xff;
    *psVar3 = 0x800 - ((ushort)*(undefined4 *)(&DAT_ram_60000d80 + iVar1) & 0xfff);
  } while (uVar2 != 8);
  *in_a2 = (local_20[3] + local_20[1] + local_20[2]) * 2 + (sStack20 + sStack18) * -3;
  *unaff_a3 = (sStack24 + sStack22) * 3 + (sStack20 + sStack18) * -3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_get_noisefloor(void)

{
  memw();
  return;
}



void rom_get_power_db(void)

{
  short local_10;
  short asStack14 [3];
  int iStack8;
  
  (**(code **)(g_phyFuns + 0x24))(&local_10,asStack14);
  iStack8 = (int)local_10;
  (**(code **)(g_phyFuns + 0x38))(iStack8,3);
  (**(code **)(g_phyFuns + 0x38))((int)asStack14[0],3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_iq_est_disable(void)

{
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_6000057c = _DAT_ram_6000057c & 0xfffa0000 | 0x1000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_iq_est_enable(void)

{
  int in_a2;
  
  memw();
  memw();
  memw();
  _DAT_ram_6000057c = _DAT_ram_6000057c & 0xfffa0001 | 1 | in_a2 << 0x12 | 2;
  memw();
  memw();
  while (-1 < (int)_DAT_ram_6000057c) {
    memw();
  }
  return;
}



void rom_linear_to_db(void)

{
  undefined auStack32 [16];
  
  memcpy(auStack32,&DAT_ram_0040bf70,0x10);
  return;
}



void rom_set_txclk_en(void)

{
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,6,6);
  (**(code **)(g_phyFuns + 0x9c))(0x7c,1,0x15,0,0);
  return;
}



void rom_set_rxclk_en(void)

{
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,5,5);
  (**(code **)(g_phyFuns + 0x9c))(0x7c,1,0x15,1,1);
  return;
}



void rom_mhz2ieee(void)

{
  uint in_a2;
  uint unaff_a3;
  
  if ((unaff_a3 >> 7 & 1) == 0) {
    if ((in_a2 != 0x9b4) && (in_a2 < 0x9b4)) {
      __divsi3(in_a2 - 0x967,5);
    }
  }
  else {
    if (in_a2 != 0x9b4) {
      if (in_a2 < 0x9b4) {
        __divsi3(in_a2 - 0x967,5);
      }
      else {
        __divsi3(in_a2 - 0x9d0,0x14,0xfffff630);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_rxiq_get_mis(void)

{
  int iVar1;
  char in_a2;
  char cVar2;
  char cVar3;
  uint unaff_a3;
  char cVar4;
  uint unaff_a4;
  uint unaff_a5;
  int iVar5;
  byte bVar6;
  uint unaff_a6;
  char *unaff_a7;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack16;
  int iStack12;
  
  bVar6 = in_a2 - 2;
  memw();
  iVar7 = _DAT_ram_60000580 >> (bVar6 & 0x1f);
  memw();
  iVar8 = _DAT_ram_6000058c >> (bVar6 & 0x1f);
  iVar10 = iVar7 - iVar8;
  memw();
  iVar5 = _DAT_ram_60000588 >> (bVar6 & 0x1f);
  memw();
  iVar7 = iVar7 + iVar8;
  iVar1 = _DAT_ram_60000584 >> (bVar6 & 0x1f);
  iVar9 = iVar5 + iVar1;
  iVar1 = iVar1 - iVar5;
  iVar5 = iVar1;
  iVar8 = iVar7;
  if ((unaff_a3 ^ unaff_a4) != (unaff_a5 ^ unaff_a6)) {
    iVar5 = iVar9;
    iVar8 = iVar10;
    iVar9 = iVar1;
    iVar10 = iVar7;
  }
  iStack12 = iVar8 * iVar8 + iVar5 * iVar5;
  iStack16 = iStack12 >> 0x1f;
  if (iStack12 == 0) {
    iStack12 = 1;
    iStack16 = 0;
  }
  cVar2 = '\0';
  __divdi3(0,iVar10 * iVar8 - iVar9 * iVar5 >> 0x17,iStack12,iStack16,unaff_a5 ^ unaff_a6,unaff_a6);
  cVar3 = '\0';
  iVar1 = cVar2 + 1 >> 1;
  cVar2 = (char)iVar1;
  cVar4 = -cVar2;
  if (unaff_a6 == 0) {
    cVar4 = cVar2;
  }
  *unaff_a7 = cVar4;
  __divdi3(0,iVar10 * iVar5 + iVar9 * iVar8 >> 0x17,iStack12,iStack16,iVar1,unaff_a6);
  cVar2 = (char)(cVar3 + 1 >> 1);
  cVar4 = -cVar2;
  if (unaff_a5 == 0) {
    cVar4 = cVar2;
  }
  unaff_a7[1] = cVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_sar_init(void)

{
  memw();
  _DAT_ram_60000710 = _DAT_ram_60000710 | 0x2000000;
  memw();
  (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,4,4,1);
  (**(code **)(g_phyFuns + 0x9c))(0x6c,2,1,1,0,2);
  return;
}



void rom_set_ana_inf_tx_scale(void)

{
  uint in_a2;
  uint uVar1;
  
  if (in_a2 < 0x40) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x3f - in_a2 & 0xff;
  }
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,9,7,0,uVar1);
  return;
}



void rom_set_loopback_gain(void)

{
  undefined4 in_a2;
  undefined4 unaff_a3;
  undefined4 unaff_a4;
  undefined4 unaff_a5;
  
  (**(code **)(g_phyFuns + 0xac))(2,1,0x185);
  (**(code **)(g_phyFuns + 0xac))(7,1,in_a2);
  (**(code **)(g_phyFuns + 0xac))(2,1,unaff_a3);
  (**(code **)(g_phyFuns + 0xac))(3,1,unaff_a4);
  (**(code **)(g_phyFuns + 0xac))(3,2,unaff_a5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_set_noise_floor(void)

{
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009b60 = _DAT_ram_60009b60 & 0xfffd7ffd | 2;
  _DAT_ram_60009b64 = _DAT_ram_60009b64 & 0xfffffe00;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_start_noisefloor(void)

{
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009b60 = _DAT_ram_60009b60 | 0x28002;
  _DAT_ram_60009b64 = _DAT_ram_60009b64 & 0xfffff000 | 0x1a0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_start_tx_tone(void)

{
  int in_a2;
  uint uVar1;
  uint unaff_a3;
  int unaff_a5;
  uint unaff_a6;
  byte in_stack_00000000;
  short in_stack_00000004;
  
  (**(code **)(g_phyFuns + 0x3c))(1);
  if (in_a2 != 0) {
    memw();
    _DAT_ram_600005b8 = _DAT_ram_600005b8 & 0xf0000000 | in_a2 << 0x12 | unaff_a3;
    memw();
  }
  if (unaff_a5 != 0) {
    memw();
    _DAT_ram_600005bc = _DAT_ram_600005bc & 0xf0000000 | unaff_a5 << 0x12 | unaff_a6;
    memw();
  }
  uVar1 = (uint)in_stack_00000000;
  if (uVar1 != 0) {
    memw();
    _DAT_ram_600005c4 =
         _DAT_ram_600005c4 & 0xe0000000 | uVar1 << 0x1c | uVar1 << 0x12 | (int)in_stack_00000004;
    memw();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_stop_tx_tone(void)

{
  int in_a2;
  uint unaff_a3;
  uint unaff_a5;
  uint unaff_a6;
  
  if (in_a2 == 1) {
    memw();
    unaff_a6 = _DAT_ram_600005b8 & 0xfffbffff;
    memw();
    _DAT_ram_600005b8 = unaff_a6;
  }
  else {
    if (in_a2 == 2) {
      memw();
      unaff_a3 = _DAT_ram_600005bc & 0xfffbffff;
      memw();
      _DAT_ram_600005bc = unaff_a3;
    }
    else {
      if (in_a2 == 3) {
        memw();
        _DAT_ram_600005c4 = _DAT_ram_600005c4 & 0xfffbffff;
        memw();
      }
      else {
        memw();
        unaff_a5 = _DAT_ram_600005b8 & 0xfffbffff;
        memw();
        memw();
        unaff_a3 = _DAT_ram_600005bc & 0xfffbffff;
        memw();
        memw();
        _DAT_ram_600005c4 = _DAT_ram_600005c4 & 0xfffbffff;
        memw();
        _DAT_ram_600005b8 = unaff_a5;
        _DAT_ram_600005bc = unaff_a3;
      }
    }
  }
  (**(code **)(g_phyFuns + 0x3c))(0,unaff_a3,0xfffbffff,unaff_a5,unaff_a6);
  return;
}



void rom_txtone_linear_pwr(void)

{
  uint in_a2;
  byte unaff_a3;
  int iVar1;
  undefined4 unaff_a4;
  uint uVar2;
  short local_20;
  short local_1e;
  
  if (in_a2 != 0) {
    uVar2 = 0;
    do {
      (**(code **)(g_phyFuns + 0x24))(&local_20,&local_1e,unaff_a4);
      unaff_a4 = 1;
      iVar1 = (int)local_1e;
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      local_1e = (short)iVar1;
      __divsi3((int)local_20 << 0x20 - (' ' - (unaff_a3 & 0x1f)),iVar1,1);
      uVar2 = uVar2 + 1 & 0xff;
    } while (in_a2 != uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_tx_mac_disable(void)

{
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_3ff20c94 = _DAT_ram_3ff20c94 & 0xfffffffe;
  _DAT_ram_3ff20de0 = _DAT_ram_3ff20de0 & 0xfc | _DAT_ram_3ff20de0 >> 1 & 0x7f800000 | 3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rom_tx_mac_enable(void)

{
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_3ff20c94 = _DAT_ram_3ff20c94 | 1;
  _DAT_ram_3ff20de0 = _DAT_ram_3ff20de0 & 0xfc | _DAT_ram_3ff20de0 >> 1 & 0x7f800000;
  return;
}



void ram_pbus_set_rxgain(void)

{
  uint in_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 3;
  (**(code **)(g_phyFuns + 0xb0))(3,2);
  uVar2 = 0;
  (**(code **)(g_phyFuns + 0xb0))(2,1);
  (**(code **)(g_phyFuns + 0xac))(3,1,in_a2 >> 9 & 1,0,0,0);
  (**(code **)(g_phyFuns + 0xac))(3,2,uVar1 & 0x1c7,0,0,0);
  (**(code **)(g_phyFuns + 0xac))(2,1,uVar2 & 0x185,0,0,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ram_pbus_debugmode(void)

{
  uint uVar1;
  
  memw();
  if (((_DAT_ram_60000594 & 1) == 0) && (memw(), (_DAT_ram_3ff20c70 >> 1 & 1) != 0)) {
    (**(code **)(g_phyFuns + 0x74))(_DAT_ram_60000594);
    ets_delay_us(5);
    do {
      do {
        uVar1 = 0;
        (**(code **)(g_phyFuns + 0xb0))(2,1);
      } while ((~uVar1 & 0x184) != 0);
      uVar1 = 3;
      (**(code **)(g_phyFuns + 0xb0))(3,2);
    } while ((uVar1 & 6) != 6);
  }
  memw();
  memw();
  memw();
  memw();
  memw();
  if ((_DAT_ram_3ff20c70 >> 1 & 1) != 0) {
    memw();
    uVar1 = _DAT_ram_600005a0 >> 0x1e & 1;
    while (uVar1 == 0) {
      memw();
      uVar1 = _DAT_ram_600005a0 & 0x40000000;
    }
  }
  _DAT_ram_60000594 = _DAT_ram_60000594 | 1;
  _DAT_ram_60009b08 = _DAT_ram_60009b08 | 0x8000000;
  return;
}



void ram_pbus_xpd_tx_on(void)

{
  uint in_a2;
  
  (**(code **)(g_phyFuns + 0xac))(2,1,0x81);
  (**(code **)(g_phyFuns + 0xac))(7,1,in_a2 >> 5);
  (**(code **)(g_phyFuns + 0xac))(0,1,in_a2 & 0x1f);
  (**(code **)(g_phyFuns + 0xac))(1,1,0x7f);
  (**(code **)(g_phyFuns + 0xac))(6,1,0x7f);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void set_rf_freq_offset(void)

{
  undefined4 in_a2;
  undefined *puVar1;
  undefined4 unaff_a3;
  undefined4 unaff_a4;
  undefined auStack32 [4];
  undefined4 uStack28;
  
  puVar1 = auStack32;
  memw();
  _DAT_ram_600005c8 = _DAT_ram_600005c8 | 0xf00000;
  memw();
  uStack28 = in_a2;
  (**(code **)(g_phyFuns + 0xdc))(_DAT_ram_600005c8,0x60000200,0xf00000);
  ram_rfpll_set_freq(unaff_a3,uStack28,unaff_a4,auStack32);
  (**(code **)(g_phyFuns + 0xe0))(auStack32,uStack28,unaff_a4,auStack32);
  (**(code **)(g_phyFuns + 0xd8))(puVar1,uStack28,unaff_a4,auStack32);
  wait_rfpll_cal_end(puVar1,uStack28,unaff_a4,auStack32);
  memw();
  memw();
  _DAT_ram_600005c8 = _DAT_ram_600005c8 & 0xff0fffff;
  return;
}



void chip_v6_rxmax_ext_ana(void)

{
  int iVar1;
  uint in_a2;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = 0x62;
  (**(code **)(g_phyFuns + 0x94))(0x62,1,5,7,0);
  iVar3 = iVar2 * 0x18 + -0x154;
  __divsi3(iVar3,0xe3,5,7,0);
  iVar3 = iVar3 >> 0x10;
  iVar4 = 0;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  iVar1 = 0xf;
  if (iVar4 < 0x10) {
    iVar1 = iVar4;
  }
  iVar2 = iVar2 * 0x17 + 0x1d;
  uVar7 = iVar1 >> 0x10;
  __divsi3(iVar2,0xcf,0xf,iVar3,0);
  iVar4 = 0;
  if (-1 < iVar2 >> 0x10) {
    iVar4 = iVar2 >> 0x10;
  }
  iVar2 = 0xf;
  if (iVar4 < 0x10) {
    iVar2 = iVar4;
  }
  uVar6 = iVar2 >> 0x10;
  if (2 < in_a2) {
    iVar4 = 8;
    if (7 < (int)uVar7) {
      iVar4 = -8;
    }
    uVar7 = uVar7 + iVar4;
  }
  (**(code **)(g_phyFuns + 0x98))(100,0,4,uVar7 & 0xf | 0x40,0);
  if (1 < in_a2) {
    iVar4 = 8;
    if (7 < (int)uVar6) {
      iVar4 = -8;
    }
    uVar6 = uVar6 + iVar4;
  }
  (**(code **)(g_phyFuns + 0x98))(100,0,7,uVar6 & 0xf | 0x40,0);
  pcVar5 = *(code **)(g_phyFuns + 0x98);
  if (in_a2 == 0) {
    (*pcVar5)(0x61,1,5,0xe0,0,pcVar5);
  }
  else {
    (*pcVar5)(0x61,1,5,0xef,0,pcVar5);
  }
  return;
}



void ram_chip_v6_rx_init(void)

{
  (**(code **)(g_phyFuns + 0x98))(0x61,1,8,0x11);
  chip_v6_rxmax_ext_ana(rxmax_ext_level,1,8,0x11);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void tsen_meas(void)

{
  uint uVar1;
  
  memw();
  _DAT_ram_60000d50 = _DAT_ram_60000d50 & 0xffffffdf;
  memw();
  memw();
  uVar1 = _DAT_ram_60000d5c | 0x200000;
  memw();
  memw();
  _DAT_ram_60000d5c = _DAT_ram_60000d5c & 0xff7fffff | 0x200000;
  memw();
  ets_delay_us(200,0xff7fffff,uVar1,0x200000,_DAT_ram_60000d50,0xffffffdf);
  (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,6,6,0);
  (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,6,6,1);
  memw();
  _DAT_ram_60000d50 = _DAT_ram_60000d50 | 0x20;
  memw();
  (**(code **)(g_phyFuns + 0x94))(0x6c,2,2,7,0,1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void readvdd33(void)

{
  undefined4 uVar1;
  int in_a2;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined local_30 [16];
  undefined4 uStack32;
  undefined4 uStack28;
  
  if (in_a2 != 0) {
    memw();
    _DAT_ram_60000594 = _DAT_ram_60000594 | 1;
    memw();
  }
  uVar2 = 6;
  (**(code **)(g_phyFuns + 0xb0))(6,1);
  uStack28 = 0x6b;
  (**(code **)(g_phyFuns + 0x94))(0x6b,2,9,2,0);
  uStack32 = 0x6c;
  (**(code **)(g_phyFuns + 0x94))(0x6c,2,0,5,5);
  (**(code **)(g_phyFuns + 0xac))(6,1,uVar2 & 0xffff | 2,5,5);
  (**(code **)(g_phyFuns + 0x9c))(0x6b,2,9,7,7,1);
  (**(code **)(g_phyFuns + 0x9c))(0x6b,2,9,2,0,0);
  (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,5,5,1);
  memw();
  uVar6 = _DAT_ram_60000d5c | 0x800000;
  memw();
  memw();
  uVar5 = _DAT_ram_60000d5c & 0xffdfffff | 0x800000;
  memw();
  memw();
  uVar3 = _DAT_ram_60000d50 >> 0x18 & 7;
  uVar7 = uVar3;
  while (uVar7 != 0) {
    memw();
    uVar7 = _DAT_ram_60000d50 >> 0x18 & 7;
  }
  memw();
  memw();
  memw();
  _DAT_ram_60000d50 = _DAT_ram_60000d50 & 0xfffffffd | 2;
  memw();
  _DAT_ram_60000d5c = uVar5;
  ets_delay_us(0x19,uVar3,uVar5,0xffdfffff,uVar6,0x800000);
  read_sar_dout(local_30,uVar3,uVar5,0xffdfffff,uVar6,0x800000);
  uVar1 = uStack32;
  cVar4 = '\0';
  do {
    cVar4 = cVar4 + '\x01';
  } while (cVar4 != '\b');
  (**(code **)(g_phyFuns + 0xac))(6,1,uVar2,0xffdfffff,uVar6,0x800000);
  (**(code **)(g_phyFuns + 0x9c))(0x6b,2,9,7,7,0);
  (**(code **)(g_phyFuns + 0x9c))(0x6b,2,9,2,0,uStack28);
  (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,5,5,uVar1);
  if (in_a2 != 0) {
    memw();
    _DAT_ram_60000594 = _DAT_ram_60000594 & 0xfffffffe;
    memw();
  }
  return;
}



void txpwr_offset(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_a2;
  undefined4 unaff_a4;
  
  uVar1 = (uint)chip6_phy_init_ctrl[108];
  if (uVar1 == 0xff) {
    uVar1 = 1;
    readvdd33(1);
  }
  else {
    if ((uVar1 < 0x12) || (unaff_a4 = 0x24, 0x24 < uVar1)) {
      uVar1 = 0xd33;
    }
    else {
      uVar1 = uVar1 * 0x66;
    }
  }
  if (uVar1 < 0xd33) {
    (**(code **)(g_phyFuns + 0x38))(uVar1,3,unaff_a4);
    (**(code **)(g_phyFuns + 0x38))(0xd33,3,unaff_a4);
  }
  uVar3 = 0;
  do {
    uVar2 = uVar3 + 1 & 0xff;
    chip6_sleep_params[uVar3 + 0x32] =
         (char)((uint)in_a2 >> 0x10) + chip6_phy_init_ctrl[uVar3 + 0x24];
    uVar3 = uVar2;
  } while (uVar2 != 6);
  uVar3 = 0xffffff81;
  if (-0x80 < in_a2 >> 0x10) {
    uVar3 = in_a2 >> 0x10;
  }
  chip6_sleep_params._84_4_ = uVar1 + (uVar3 & 0xff);
  return;
}



void set_txcap_reg(void)

{
  byte *in_a2;
  
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,1,*in_a2 | 0x40,0x40);
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,2,in_a2[1],0);
  return;
}



void ram_ana_inf_gating_en(void)

{
  bool bVar1;
  uint in_a2;
  uint unaff_a3;
  uint unaff_a4;
  
  if (in_a2 != 0) {
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,0,0,0);
    (**(code **)(g_phyFuns + 0x98))(0x77,0,0x1a,0x28,0,0);
    (**(code **)(g_phyFuns + 0x98))(0x77,0,0x1a,0x38,0,0);
    (**(code **)(g_phyFuns + 0x98))(0x77,0,0x1a,0x18,0,0);
    (**(code **)(g_phyFuns + 0x98))(0x77,0,0x1a,0x38,0,0);
    (**(code **)(g_phyFuns + 0x98))(0x77,0,0,unaff_a3 >> 0xc & 0xff,0,0);
    (**(code **)(g_phyFuns + 0x98))(0x77,0,1,unaff_a3 >> 4 & 0xff,0,0);
    (**(code **)(g_phyFuns + 0x98))(0x77,0,4,unaff_a4 & 0xff,0,0);
    (**(code **)(g_phyFuns + 0x98))(0x77,0,3,unaff_a4 >> 8 & 0xff,0,0);
    (**(code **)(g_phyFuns + 0x98))(0x77,0,2,unaff_a3 & 0xf,0,0);
  }
  bVar1 = (in_a2 & 1) == 0;
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0xf,3,3,bVar1);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,0,0,bVar1);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,0,0);
  return;
}



void ram_restart_cal(void)

{
  (**(code **)(g_phyFuns + 0x9c))(0x62,1,0,6,6,1);
  (**(code **)(g_phyFuns + 0x9c))(0x62,1,0,5,5,0);
  (**(code **)(g_phyFuns + 0x9c))(0x62,1,0,5,5,1);
  (**(code **)(g_phyFuns + 0x9c))(0x62,1,0,6,6,0);
  return;
}



void wait_rfpll_cal_end(void)

{
  int iVar1;
  undefined4 unaff_a3;
  undefined4 unaff_a4;
  undefined4 unaff_a5;
  undefined4 unaff_a6;
  char cVar2;
  
  cVar2 = '\0';
  do {
    ets_delay_us(0x14,unaff_a3,unaff_a4,unaff_a5,unaff_a6);
    iVar1 = 0x62;
    unaff_a3 = 1;
    unaff_a4 = 7;
    unaff_a5 = 7;
    unaff_a6 = 7;
    (**(code **)(g_phyFuns + 0x94))(0x62,1,7,7,7);
    if (iVar1 != 0) {
      return;
    }
    if (cVar2 == 'c') {
      printf("error: pll_cal exceeds 2ms!!!\n",1,7,7,7);
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 != 'd');
  return;
}



void ram_rfpll_set_freq(void)

{
  uint uVar1;
  uint uVar2;
  int unaff_a3;
  undefined *unaff_a5;
  undefined4 uVar3;
  
  uVar3 = 0x42200000;
  if (unaff_a3 != 0) {
    if (unaff_a3 == 1) {
      uVar3 = 0x41d00000;
    }
    else {
      if (unaff_a3 == 2) {
        uVar3 = 0x41c00000;
      }
    }
  }
  uVar1 = 0;
  __floatunsidf(0);
  __divdf3(uVar1);
  __truncdfsf2(uVar1);
  __mulsf3(uVar3,0x44800000,0,0x40080000);
  __divsf3(uVar1,uVar3,0,0x40080000);
  __addsf3(uVar1,0xc2000000,0,0x40080000);
  uVar2 = uVar1;
  __fixunssfsi(uVar1,0xc2000000,0,0x40080000);
  *unaff_a5 = (char)uVar2;
  uVar2 = uVar2 & 0xff;
  __floatsisf(uVar2,0xc2000000,0,0x40080000);
  __subsf3(uVar1,uVar2,0,0x40080000);
  __mulsf3(uVar1,0x43800000,0,0x40080000);
  uVar2 = uVar1;
  __fixunssfsi(uVar1,0x43800000,0,0x40080000);
  unaff_a5[1] = (char)uVar2;
  uVar2 = uVar2 & 0xff;
  __floatsisf(uVar2,0x43800000,0,0x40080000);
  __subsf3(uVar1,uVar2,0,0x40080000);
  __mulsf3(uVar1,0x43800000,0,0x40080000);
  __fixunssfsi(uVar1,0x43800000,0,0x40080000);
  unaff_a5[2] = (char)uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ram_set_channel_freq(void)

{
  undefined uVar1;
  uint in_a2;
  undefined *puVar2;
  uint unaff_a3;
  uint uVar3;
  undefined4 uVar4;
  undefined uVar5;
  int unaff_a4;
  int iVar6;
  undefined *puVar7;
  int unaff_a6;
  undefined4 unaff_a7;
  undefined4 uVar8;
  undefined2 uVar9;
  char in_stack_00000000;
  undefined local_20;
  undefined uStack31;
  undefined uStack30;
  
  puVar7 = &local_20;
  puVar2 = &local_20;
  memw();
  _DAT_ram_600005c8 = _DAT_ram_600005c8 | 0xf00000;
  memw();
  (**(code **)(g_phyFuns + 0xdc))(_DAT_ram_600005c8,0xf00000);
  if (in_a2 - 1 < 0xd) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0x9b4;
  }
  if ((unaff_a4 != 0) || (1 < unaff_a3)) {
    ram_rfpll_set_freq(uVar9);
    goto LAB_ram_00404081;
  }
  uStack30 = 0x3b;
  uVar1 = 0x3b;
  if (unaff_a3 == 1) {
    uVar5 = 0xb7;
    local_20 = 0x5e;
    unaff_a7 = 0x5c;
    puVar7 = (undefined *)0xe;
    if (0xd < in_a2) {
LAB_ram_0040417b:
      unaff_a6 = 0x62;
      unaff_a7 = 0x5f;
      local_20 = 0x5f;
      uStack31 = 0x62;
      uStack30 = 0x76;
      goto LAB_ram_00404081;
    }
    unaff_a6 = in_a2 * 3 + 0x40404c;
    switch(in_a2) {
    case 0:
      goto LAB_ram_0040417b;
    case 1:
      local_20 = 0x5b;
      uStack31 = 0xb1;
      break;
    case 2:
      local_20 = 0x5b;
      uStack31 = 0xf2;
      uStack30 = 0xdf;
      break;
    case 3:
      local_20 = 0x5c;
      uStack31 = 0x34;
      uStack30 = 0x83;
      break;
    case 4:
      local_20 = 0x5c;
      uStack31 = 0x76;
      uStack30 = 0x27;
      break;
    case 5:
      local_20 = 0x5c;
      uStack31 = 0xb7;
      uStack30 = 0xcb;
      break;
    case 6:
      local_20 = 0x5c;
      uStack31 = 0xf9;
      uStack30 = 0x6f;
      break;
    case 7:
      uVar5 = 0x13;
      goto LAB_ram_00404212;
    case 8:
      uVar1 = 0x7c;
LAB_ram_00404212:
      local_20 = 0x5d;
      uStack31 = uVar1;
      uStack30 = uVar5;
      break;
    case 9:
      local_20 = 0x5d;
      uStack31 = 0xbe;
      uStack30 = 0x5b;
      break;
    case 10:
      uStack31 = 0;
      uStack30 = 0;
      break;
    case 0xb:
      local_20 = 0x5e;
      uStack31 = 0x41;
      uStack30 = 0xa4;
      break;
    case 0xc:
      local_20 = 0x5e;
      uStack31 = 0x83;
      uStack30 = 0x48;
      break;
    case 0xd:
      local_20 = 0x5e;
      uStack31 = 0xc4;
      uStack30 = 0xec;
    }
    goto LAB_ram_00404081;
  }
  uVar4 = 0x66;
  uStack31 = 0x91;
  unaff_a7 = 0xffffffbb;
  uVar5 = 0xe6;
  uVar8 = 0x11;
  local_20 = 0x30;
  puVar7 = (undefined *)0xe;
  if (0xd < in_a2) {
LAB_ram_00404138:
    local_20 = 0x32;
    uVar8 = 0xffffffcc;
    uStack31 = 0xcc;
    unaff_a7 = uVar8;
    goto LAB_ram_00404154;
  }
  puVar7 = (undefined *)0x40410e;
  unaff_a6 = in_a2 * 3 + 0x40410e;
  switch(in_a2) {
  case 0:
    goto LAB_ram_00404138;
  case 1:
    goto LAB_ram_00404151;
  case 2:
    unaff_a7 = uVar8;
    break;
  case 3:
    uVar4 = 0xffffffbb;
    uVar5 = 0xbb;
    goto LAB_ram_004041b9;
  case 4:
LAB_ram_004041b9:
    local_20 = 0x30;
    uVar8 = uVar4;
    unaff_a7 = uVar4;
    uStack31 = uVar5;
    break;
  case 5:
    uVar8 = 0x11;
    unaff_a7 = 0x11;
    local_20 = 0x31;
    uStack31 = 0x11;
    break;
  case 6:
    uVar8 = unaff_a7;
    local_20 = 0x31;
    uStack31 = uVar1;
    break;
  case 7:
    uVar8 = 0x66;
    uStack31 = 0x66;
    goto LAB_ram_00404173;
  case 8:
    goto LAB_ram_00404173;
  case 9:
    uStack31 = 0xbb;
    uVar8 = unaff_a7;
    goto LAB_ram_00404173;
  case 10:
    uVar8 = uVar4;
    uStack31 = 0xe6;
LAB_ram_00404173:
    local_20 = 0x31;
    break;
  case 0xb:
    unaff_a7 = 0x11;
    uVar1 = 0x11;
    goto LAB_ram_004041ab;
  case 0xc:
LAB_ram_004041ab:
    uVar8 = unaff_a7;
    local_20 = 0x32;
    uStack31 = uVar1;
    break;
  case 0xd:
    local_20 = 0x32;
LAB_ram_00404151:
    uStack31 = 0x66;
    uVar8 = uVar4;
  }
LAB_ram_00404154:
  uStack30 = (char)uVar8;
LAB_ram_00404081:
  uVar3 = (uint)chip6_phy_init_ctrl[110];
  iVar6 = 0xe;
  if (((chip6_phy_init_ctrl[110] & 1) != 0) && (in_a2 == 0xe)) {
    ram_rfpll_set_freq(chip6_phy_init_ctrl[111]);
    uVar3 = unaff_a3;
    iVar6 = unaff_a4;
    puVar7 = &local_20;
  }
  (**(code **)(g_phyFuns + 0xe0))(&local_20,uVar3,iVar6,puVar7,unaff_a6,unaff_a7);
  (**(code **)(g_phyFuns + 0xd8))(puVar2,uVar3,iVar6,puVar7,unaff_a6,unaff_a7);
  if (in_stack_00000000 != '\0') {
    wait_rfpll_cal_end(in_stack_00000000,uVar3,iVar6,puVar7,unaff_a6,unaff_a7);
  }
  memw();
  memw();
  _DAT_ram_600005c8 = _DAT_ram_600005c8 & 0xff0fffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void chip_60_set_channel(void)

{
  byte bVar1;
  int iVar2;
  int in_a2;
  uint uVar3;
  int unaff_a5;
  undefined4 unaff_a6;
  undefined4 uVar4;
  undefined4 unaff_a7;
  uint uVar5;
  int iVar6;
  byte in_stack_00000000;
  undefined auStack48 [4];
  int iStack44;
  
  iVar2 = -300;
  if (-0x12d < unaff_a5 >> 0x10) {
    iVar2 = unaff_a5 >> 0x10;
  }
  iStack44 = 300;
  if (iVar2 < 0x12d) {
    iStack44 = iVar2;
  }
  iStack44 = iStack44 >> 0x10;
  if ((chip6_phy_init_ctrl[113] & 1) == 0) {
    iStack44 = 0;
  }
  else {
    if (((chip6_phy_init_ctrl[113] >> 1 & 1) != 0) && (0 < iStack44)) {
      iStack44 = 0;
    }
    __divsi3(iStack44,3,chip6_phy_init_ctrl);
  }
  chip6_sleep_params[48] = (undefined)in_a2;
  if (rfpll_unlock != '\0') {
    or_pll_cap_last = '@';
  }
  if (or_pll_cap_last == '\0') {
    (**(code **)(g_phyFuns + 0x98))(0x62,1,1,0x60);
  }
  else {
    (**(code **)(g_phyFuns + 0x98))(0x62,1,1,or_pll_cap_last);
  }
  uVar5 = (uint)in_stack_00000000;
  iVar2 = in_a2;
  ram_set_channel_freq();
  uVar3 = 0x62;
  (**(code **)(g_phyFuns + 0x90))(0x62,1,5,unaff_a6,auStack48,unaff_a7,uVar5);
  or_pll_cap_last = (byte)uVar3;
  uVar5 = uVar3;
  bVar1 = or_pll_cap_last;
  if (2 < in_a2) {
    uVar5 = (uint)(byte)pll_cap_m;
    bVar1 = (byte)pll_cap_m;
  }
  pll_cap_m._0_1_ = bVar1;
  bVar1 = or_pll_cap_last;
  if (in_a2 < 10) {
    uVar3 = (uint)pll_cap_m._1_1_;
    bVar1 = pll_cap_m._1_1_;
  }
  pll_cap_m._1_1_ = bVar1;
  if ((uVar3 == uVar5) && (uVar5 != 0)) {
    rfpll_unlock = '\x01';
  }
  memw();
  memw();
  if (((_DAT_ram_3ff00058 >> 0xd & 7) == 0) && ((_DAT_ram_60009830 & 7) == 0)) {
    memw();
    _DAT_ram_60000d00 = 0x1041d77;
  }
  uVar5 = in_a2 - 1;
  uVar4 = 0xc;
  if (uVar5 < 0xd) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0x6a;
  }
  if ((chip6_phy_init_ctrl[113] & 1) != 0) {
    (**(code **)(g_phyFuns + 0x98))(0x77,0,4,iStack44 + 0xc6186U & 0xff,0xc6186,uVar5);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,6,6,1);
    uVar4 = 5;
    uVar5 = 1;
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,5,5,1);
    ets_delay_us(5,0,0x1c,5,5,1);
  }
  uVar3 = (iVar6 + 21000) * 0x20000;
  memw();
  _DAT_ram_60009b14 = _DAT_ram_60009b14 & 0x1fff | uVar3 | 0x6000;
  memw();
  phy_dig_spur_set();
  phy_dig_spur_prot(in_a2,iVar2,0x6000,uVar3,uVar4,uVar5);
  return;
}



void chip_v6_set_chan_offset(void)

{
  char in_a2;
  int unaff_a3;
  
  if ((chip6_phy_init_ctrl[113] >> 2 & 1) == 0) {
    if ((int)phy_freq_offset != unaff_a3 >> 0x10) {
      phy_freq_offset = (short)unaff_a3;
      chip_v6_set_chan((int)in_a2);
    }
  }
  else {
    phy_freq_offset = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void chip_v6_set_chan(void)

{
  uint uVar1;
  undefined uVar2;
  int in_a2;
  int iVar3;
  undefined4 uVar4;
  int iStack16;
  
  if ((chip6_sleep_params._0_4_ >> 0x19 & 1) == 0) {
    iStack16 = in_a2;
    stop_dig_rx();
  }
  else {
    pm_set_sleep_mode(4);
  }
  uVar2 = chip6_phy_init_ctrl[1];
  iVar3 = (int)phy_freq_offset;
  uVar4 = 1;
  chip_60_set_channel();
  chip_v6_set_chan_misc();
  bbpll_cal(0,uVar2,0,iVar3,chip6_sleep_params,100,uVar4);
  uVar1 = chip6_sleep_params._0_4_;
  if ((chip6_sleep_params._0_4_ >> 0x19 & 1) == 0) {
    start_dig_rx(iStack16,uVar2,chip6_sleep_params._0_4_,iVar3,chip6_sleep_params,100);
  }
  else {
    uVar4 = 4;
    pm_wakeup_init(4,0,chip6_sleep_params._0_4_,iVar3,chip6_sleep_params,100);
    phy_after_init_enrx(uVar4,0,uVar1,iVar3,chip6_sleep_params,100);
  }
  memw();
  memw();
  memw();
  _DAT_ram_60000d60 = _DAT_ram_60000d60 & 0xfffffffe | 1;
  memw();
  if (chip6_phy_init_ctrl[91] == '\x02') {
    memw();
    _DAT_ram_3ff20400 = 0x55555555;
  }
  if (chan14_mic_en != '\0') {
    if (in_a2 == 0xe) {
      chan14_mic_cfg(1,0xe,uVar1,chip6_phy_init_ctrl[91],_DAT_ram_60000d60,0x60000a00);
    }
    else {
      chan14_mic_cfg(0,0xe,uVar1,chip6_phy_init_ctrl[91],_DAT_ram_60000d60,0x60000a00);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void chip_v6_set_chan_wakeup(void)

{
  memw();
  _DAT_ram_600005c8 = _DAT_ram_600005c8 | 0xf00000;
  memw();
  chip_60_set_channel();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void chip_v6_set_chan_wakeup_exit(void)

{
  uint in_a2;
  uint uVar1;
  undefined auStack16 [8];
  
  set_txcap_reg(in_a2 * 3 + 0x40d5c7,0x40d5c7);
  uVar1 = in_a2 & 0xff;
  tx_atten_set_interp(uVar1,auStack16);
  wait_rfpll_cal_end(uVar1,auStack16);
  chip_v6_rxmax_ext(rxmax_ext_level,auStack16);
  (**(code **)(g_phyFuns + 0x58))((int)chip6_sleep_params._46_2_,auStack16);
  memw();
  memw();
  _DAT_ram_600005c8 = _DAT_ram_600005c8 & 0xff0fffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void chip_v6_rf_init(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  memw();
  _DAT_ram_3ff00018 = _DAT_ram_3ff00018 | 0xffff0000;
  memw();
  memw();
  _DAT_ram_600005e8 = _DAT_ram_600005e8 & 0xf7ffffff;
  memw();
  memw();
  _DAT_ram_60000710 = _DAT_ram_60000710 | 0x2000000;
  memw();
  (**(code **)(g_phyFuns + 0x98))(0x6a,2,0,0x27,_DAT_ram_3ff00018,0x3feffe00);
  if (init_rf_no_cal != '\0') {
    memw();
    _DAT_ram_600005e8 = _DAT_ram_600005e8 & 0xfe7fffff | 0x800000;
    memw();
  }
  memw();
  _DAT_ram_60000710 = _DAT_ram_60000710 | 0x30000000;
  memw();
  memw();
  _DAT_ram_600005a0 = _DAT_ram_600005a0 & 0xe0ffffff | 0x1c000000;
  memw();
  memw();
  uVar3 = _DAT_ram_60000598 & 0xcfffffff | 0x10000000;
  memw();
  memw();
  _DAT_ram_3ff20c70 = _DAT_ram_3ff20c70 & 0xfffffffd;
  memw();
  uVar1 = 2;
  _DAT_ram_60000598 = uVar3;
  ets_delay_us(2,0x3ff20a00,0xfffffffd,uVar3,0x10000000,0xcfffffff);
  (**(code **)(g_phyFuns + 0xa0))(uVar1,0x3ff20a00,0xfffffffd,uVar3,0x10000000,0xcfffffff);
  (**(code **)(g_phyFuns + 0xac))(2,1,0x81,uVar3,0x10000000,0xcfffffff);
  memw();
  _DAT_ram_60000710 = _DAT_ram_60000710 | 0xc000000;
  memw();
  (**(code **)(g_phyFuns + 200))(_DAT_ram_60000710,0xc000000,0x81,uVar3,0x10000000,0xcfffffff);
  (**(code **)(g_phyFuns + 0x98))(0x6a,2,0,0x24,0x10000000,0xcfffffff);
  uVar1 = 0x6a;
  (**(code **)(g_phyFuns + 0x98))(0x6a,2,0,0x25,0x10000000,0xcfffffff);
  (**(code **)(g_phyFuns + 0xbc))(uVar1,2,0,0x25,0x10000000,0xcfffffff);
  memw();
  _DAT_ram_60000d40 = _DAT_ram_60000d40 & 0xfffff9ff | 0x400;
  memw();
  (**(code **)(g_phyFuns + 0x98))(0x62,1,0,0x28,0x10000000,0xcfffffff);
  uVar3 = chip6_sleep_params._0_4_;
  if ((chip6_sleep_params._0_4_ >> 0x1b & 1) == 0) {
    iVar2 = 1;
    chip_v6_set_chan(1,1,0,0x28,chip6_sleep_params._0_4_,0xcfffffff);
  }
  else {
    iVar2 = (int)chip6_sleep_params[48];
    chip_v6_set_chan_wakeup(iVar2,1,0,0x28,chip6_sleep_params._0_4_,0xcfffffff);
  }
  (**(code **)(g_phyFuns + 0x8c))(iVar2,1,0,0x28,uVar3,0xcfffffff);
  uVar1 = 0x6b;
  (**(code **)(g_phyFuns + 0x98))(0x6b,2,1,0x48,uVar3,0xcfffffff);
  (**(code **)(g_phyFuns + 0x88))(uVar1,2,1,0x48,uVar3,0xcfffffff);
  uVar1 = 0x6c;
  (**(code **)(g_phyFuns + 0x98))(0x6c,2,0,0x15,uVar3,0xcfffffff);
  (**(code **)(g_phyFuns + 0x4c))(uVar1,2,0,0x15,uVar3,0xcfffffff);
  (**(code **)(g_phyFuns + 0x98))(0x77,0,0x1a,8,uVar3,0xcfffffff);
  (**(code **)(g_phyFuns + 0x98))(0x77,0,0x1a,0x38,uVar3,0xcfffffff);
  (**(code **)(g_phyFuns + 0x9c))(0x67,4,4,7,7,1);
  (**(code **)(g_phyFuns + 0x98))(0x6a,2,0,0x29,7,1);
  return;
}



void low_power_set(void)

{
  int in_a2;
  uint uVar1;
  int unaff_a4;
  
  if (in_a2 != 0) {
    uVar1 = 0;
    do {
      memw();
      memw();
      *(uint *)(&DAT_ram_60000504 + uVar1 * 4) =
           *(uint *)(&DAT_ram_60000504 + uVar1 * 4) & 0xfffe1f00 |
           *(uint *)(&DAT_ram_60000504 + uVar1 * 4) - (unaff_a4 - chip6_sleep_params[92]) & 0xff;
      uVar1 = uVar1 + 1 & 0xff;
    } while (uVar1 != 0x18);
    chip6_sleep_params[92] = (char)unaff_a4;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void test_tout(void)

{
  int in_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  ushort local_20 [8];
  int iStack16;
  uint uStack12;
  
  tout_dis_txpwr_track = 1;
  iStack16 = in_a2;
  if ((sleep_mode_flag == '\0') && (in_a2 == 0)) {
    pm_set_sleep_mode(4,&rfpll_unlock);
  }
  uVar2 = 5;
  (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,5,5,1);
  memw();
  uVar1 = _DAT_ram_60000d5c | 0x200000;
  memw();
  memw();
  uVar3 = _DAT_ram_60000d50 >> 0x18 & 7;
  while (uVar3 != 0) {
    memw();
    uVar2 = _DAT_ram_60000d50 >> 0x18 & 7;
    uVar3 = uVar2;
  }
  memw();
  uVar4 = _DAT_ram_60000d50 & 0xfffffffd;
  memw();
  memw();
  uVar3 = uVar4 | 2;
  memw();
  _DAT_ram_60000d50 = uVar3;
  _DAT_ram_60000d5c = uVar1;
  ets_delay_us(2,uVar1,0x200000,uVar2,uVar3,uVar4);
  memw();
  while ((_DAT_ram_60000d50 >> 0x18 & 7) != 0) {
    memw();
  }
  read_sar_dout(local_20,uVar1,0x200000,uVar2,uVar3,uVar4);
  uVar3 = 0;
  uVar2 = 0;
  do {
    puVar5 = local_20 + uVar3;
    uVar3 = uVar3 + 1 & 0xff;
    uVar2 = *puVar5 + uVar2 & 0xffff;
  } while (uVar3 != 8);
  uStack12 = uVar2 + 8 >> 4;
  if (chip6_phy_init_ctrl[108] == -1) {
    uStack12 = 0xffff;
  }
  uVar2 = 5;
  (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,5,5,0);
  memw();
  uVar3 = _DAT_ram_60000d50 >> 0x18 & 7;
  while (uVar3 != 0) {
    memw();
    uVar2 = _DAT_ram_60000d50 >> 0x18 & 7;
    uVar3 = uVar2;
  }
  memw();
  _DAT_ram_60000d5c = _DAT_ram_60000d5c & 0xffdfffff;
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60000d60 = _DAT_ram_60000d60 & 0xfffffffe | 1;
  memw();
  if ((sleep_mode_flag == '\0') && (iStack16 == 0)) {
    pm_wakeup_init(4,0,&rfpll_unlock,uVar2,0,_DAT_ram_60000d60);
  }
  tout_dis_txpwr_track = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_adc_read_fast(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int in_a2;
  uint unaff_a3;
  undefined2 *puVar5;
  int iVar6;
  uint unaff_a4;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar3 = _DAT_ram_60000d58;
  uVar2 = _DAT_ram_60000d54;
  uVar1 = _DAT_ram_60000d50;
  tout_dis_txpwr_track = 1;
  uVar9 = 2;
  if (1 < unaff_a4) {
    uVar9 = unaff_a4;
  }
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60000d54 = _DAT_ram_60000d54 & 0xff000000 | (uVar9 & 0xff) * 6 - 2;
  memw();
  memw();
  _DAT_ram_60000d58 = _DAT_ram_60000d58 & 0xff000000 | (uVar9 & 0xff) * 0x15 - 2;
  memw();
  memw();
  _DAT_ram_60000d50 = _DAT_ram_60000d50 & 0xffff00e3;
  memw();
  puVar5 = (undefined2 *)0x2;
  (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,5,5,1);
  memw();
  _DAT_ram_60000d5c = _DAT_ram_60000d5c | 0x200000;
  memw();
  memw();
  while ((_DAT_ram_60000d50 >> 0x18 & 7) != 0) {
    memw();
  }
  if (unaff_a3 != 0) {
    uVar9 = 0;
    do {
      memw();
      uVar7 = _DAT_ram_60000d50 & 0xfffffffd;
      memw();
      memw();
      _DAT_ram_60000d50 = uVar7 | 2;
      memw();
      ets_delay_us(1,puVar5,0,_DAT_ram_60000d50,2,uVar7);
      memw();
      while ((_DAT_ram_60000d50 >> 0x18 & 7) != 0) {
        memw();
      }
      memw();
      iVar6 = ((_DAT_ram_60000d80 ^ 0xffffffff) & 0xff) - 0x15;
      iVar8 = 0;
      if (-1 < iVar6) {
        iVar8 = iVar6;
      }
      iVar6 = iVar8 * 0x117 >> 8;
      puVar5 = (undefined2 *)(uVar9 * 2 + in_a2);
      iVar8 = 0xff;
      if (iVar6 < 0x100) {
        iVar8 = iVar6;
      }
      uVar9 = uVar9 + 1 & 0xffff;
      uVar4 = (undefined2)
              ((int)((iVar8 + ((_DAT_ram_60000d80 ^ 0xffffffff) & 0x700) & 0xffff) + 1) >> 1);
      if (chip6_phy_init_ctrl[108] == -1) {
        uVar4 = 0xffff;
      }
      *puVar5 = uVar4;
    } while (unaff_a3 != uVar9);
  }
  (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,5,5,0);
  memw();
  memw();
  memw();
  memw();
  while ((uVar1 >> 0x18 & 7) != 0) {
    memw();
  }
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  tout_dis_txpwr_track = 0;
  _DAT_ram_60000d50 = uVar1;
  _DAT_ram_60000d54 = uVar2;
  _DAT_ram_60000d58 = uVar3;
  _DAT_ram_60000d5c = _DAT_ram_60000d5c & 0xffdfffff;
  _DAT_ram_60000d60 = _DAT_ram_60000d60 & 0xfffffffe | 1;
  return;
}



void check_data_flag(void)

{
  return;
}



void phy_get_check_flag(void)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  
  puVar7 = chip6_sleep_params;
  iVar8 = 0;
  do {
    iVar3 = (int)*(short *)(puVar7 + 0xc);
    check_data_flag(iVar3,0,0xc,iVar8,0);
    sVar1 = chip6_sleep_params._90_2_;
    puVar7 = puVar7 + 2;
    iVar8 = iVar3;
  } while (puVar7 != chip6_sleep_params + 8);
  iVar8 = 0x40d572;
  iVar9 = 1;
  do {
    if ((sVar1 == 0x3e4) || (iVar4 = iVar3, sVar1 == 0xff4)) {
      iVar4 = (int)*(char *)(iVar8 + 0x37);
      check_data_flag(iVar4,0xc,0x3c,iVar3,1);
    }
    iVar8 = iVar8 + 6;
    iVar9 = iVar9 + 1;
    iVar3 = iVar4;
  } while (iVar9 != 5);
  uVar5 = (uint)(chip6_sleep_params._20_2_ >> 8);
  uVar2 = chip6_sleep_params._20_2_ & 0xff;
  if (0xf < uVar5) {
    uVar5 = uVar5 - 0x20;
  }
  if (0x1f < uVar2) {
    uVar2 = uVar2 - 0x40;
  }
  check_data_flag(uVar5,0xfffffff3,0xd,iVar4,2);
  check_data_flag(uVar2,0xffffffe5,0x1b,uVar5,2);
  puVar7 = chip6_sleep_params;
  do {
    uVar6 = *(ushort *)(puVar7 + 0x16) >> 6 & 0x1f;
    uVar5 = *(ushort *)(puVar7 + 0x16) & 0x3f;
    if (0xf < uVar6) {
      uVar6 = uVar6 - 0x20;
    }
    if (0x1f < uVar5) {
      uVar5 = uVar5 - 0x40;
    }
    check_data_flag(uVar6,0xfffffff3,0xd,uVar2,3);
    check_data_flag(uVar5,0xffffffe5,0x1b,uVar6,3);
    puVar7 = puVar7 + 2;
    uVar2 = uVar5;
  } while (puVar7 != chip6_sleep_params + 10);
  puVar7 = chip6_sleep_params;
  do {
    uVar2 = (uint)(*(ushort *)(puVar7 + 4) >> 8);
    uVar6 = *(ushort *)(puVar7 + 4) & 0xff;
    check_data_flag(uVar6,3,0x7c,uVar5,4);
    check_data_flag(uVar2,3,0x7c,uVar6,4);
    puVar7 = puVar7 + 2;
    uVar5 = uVar2;
  } while (puVar7 != chip6_sleep_params + 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_get_vdd33(void)

{
  uint uVar1;
  
  if (sleep_mode_flag == '\0') {
    pm_set_sleep_mode(4);
  }
  if (chip6_phy_init_ctrl[108] == -1) {
    readvdd33(1,0xff);
  }
  memw();
  while ((_DAT_ram_60000d50 >> 0x18 & 7) != 0) {
    memw();
  }
  memw();
  uVar1 = _DAT_ram_60000d5c & 0xffdfffff;
  memw();
  memw();
  _DAT_ram_60000d5c = _DAT_ram_60000d5c & 0xff5fffff;
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60000d60 = _DAT_ram_60000d60 & 0xfffffffe | 1;
  memw();
  if (sleep_mode_flag == '\0') {
    pm_wakeup_init(4,0,uVar1,&rfpll_unlock,0,_DAT_ram_60000d60);
  }
  return;
}



void ram_tx_mac_enable(void)

{
  return;
}



void ram_tx_mac_disable(void)

{
  return;
}



void rtc_mem_backup(void)

{
  undefined4 *in_a2;
  int unaff_a3;
  int unaff_a4;
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = unaff_a3 - (int)in_a2;
  iVar2 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  iVar2 = (iVar2 >> 2) + 1;
  if (iVar2 != 0) {
    puVar1 = in_a2 + iVar2;
    iVar2 = unaff_a4 + 0x60000e00;
    do {
      memw();
      memw();
      *(undefined4 *)(iVar2 + 0x200) = *in_a2;
      in_a2 = in_a2 + 1;
      iVar2 = iVar2 + 4;
    } while (in_a2 != puVar1);
  }
  return;
}



void rtc_mem_recovery(void)

{
  undefined4 *in_a2;
  int unaff_a3;
  int unaff_a4;
  int iVar1;
  int iVar2;
  
  iVar2 = unaff_a3 - (int)in_a2;
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar1 = (iVar1 >> 2) + 1;
  if (iVar1 != 0) {
    iVar2 = unaff_a4 + 0x60000e00;
    do {
      memw();
      memw();
      *in_a2 = *(undefined4 *)(iVar2 + 0x200);
      iVar2 = iVar2 + 4;
      in_a2 = in_a2 + 1;
    } while (iVar2 != iVar1 * 4 + unaff_a4 + 0x60000e00);
  }
  return;
}



void set_cal_rxdc(void)

{
  uint uVar1;
  uint in_a2;
  uint unaff_a3;
  int unaff_a4;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (in_a2 >> 5 & 1) + (in_a2 >> 6 & 1) + (in_a2 >> 4 & 1) +
          (in_a2 >> 2 & 1) + (in_a2 >> 3 & 1) + (in_a2 & 1) + (in_a2 >> 1 & 1);
  uVar3 = 4;
  if (uVar1 < 5) {
    uVar3 = uVar1;
  }
  uVar1 = uVar3 * 6 + (unaff_a3 >> 3 & 7) & 0xff;
  uVar3 = 0x1d;
  if (uVar1 < 0x1e) {
    uVar3 = uVar1;
  }
  puVar2 = (uint *)(uVar3 * 8 + unaff_a4);
  uVar4 = puVar2[1];
  uVar3 = *puVar2;
  uVar5 = uVar4 >> 9 & 0x1ff;
  uVar1 = uVar3 & 0x1ff;
  uVar4 = uVar4 & 0x1ff;
  (**(code **)(g_phyFuns + 0xac))(4,1,uVar3 >> 9 & 0x1ff,uVar1,uVar4,uVar5);
  (**(code **)(g_phyFuns + 0xac))(5,1,uVar5,uVar1,uVar4,uVar5);
  (**(code **)(g_phyFuns + 0xac))(4,2,uVar1,uVar1,uVar4,uVar5);
  (**(code **)(g_phyFuns + 0xac))(5,2,uVar4,uVar1,uVar4,uVar5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void set_rx_gain_cal_iq(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint in_a2;
  uint uVar4;
  int iVar5;
  uint unaff_a3;
  undefined4 uVar6;
  int unaff_a4;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 unaff_a5;
  uint uVar10;
  char *pcVar11;
  undefined4 unaff_a6;
  undefined4 *puVar12;
  char cVar13;
  int unaff_a7;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  char cStack64;
  char cStack63;
  char cStack62;
  char cStack61;
  uint uVar17;
  uint uStack16;
  int iStack12;
  int iStack8;
  uint uStack4;
  
  memw();
  _DAT_ram_60000590 = _DAT_ram_60000590 & 0xffffffef;
  memw();
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x12,7,0,0);
  uVar10 = 7;
  puVar12 = (undefined4 *)0x0;
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,9,7,0,0);
  uVar4 = 5;
  uStack4 = 0;
  uVar7 = in_a2;
  if (in_a2 != 0) {
    uVar4 = 1;
  }
  do {
    iVar14 = 0;
    if (uVar4 <= uStack4) {
      memw();
      memw();
      _DAT_ram_60000590 = _DAT_ram_60000590 | 0x10;
      return;
    }
    if (uStack4 == 0) {
      iVar15 = 0;
LAB_ram_00404fe1:
      uStack16 = 0;
    }
    else {
      uVar7 = uStack4 - 1;
      if (uVar7 == 0) {
        iVar15 = 0x40;
        goto LAB_ram_00404fe1;
      }
      uVar10 = uStack4 - 2;
      if (uVar10 == 0) {
        iVar15 = 0x60;
        uStack16 = 0xf;
      }
      else {
        puVar12 = (undefined4 *)(uStack4 - 3);
        if (puVar12 == (undefined4 *)0x0) {
          iVar15 = 0x70;
          puVar12 = (undefined4 *)0x28;
          uStack16 = 0x28;
        }
        else {
          iVar14 = uStack4 - 4;
          if (iVar14 != 0) {
            iVar15 = 0;
            goto LAB_ram_00404fe1;
          }
          iVar15 = 0x78;
          iVar14 = 0x41;
          uStack16 = 0x41;
        }
      }
    }
    puVar16 = (undefined4 *)0x0;
    if (uStack4 == 0) {
      puVar16 = (undefined4 *)0x8;
    }
    (**(code **)(g_phyFuns + 0xd0))(puVar16,uStack4,uVar7,uVar10,puVar12,iVar14);
    uVar8 = unaff_a5;
    if (uStack4 < 2) {
      puVar12 = (undefined4 *)&cStack64;
      (**(code **)(g_phyFuns + 0xe8))(0,puVar16,500,0xc,puVar12,iVar14);
      uVar8 = unaff_a5;
    }
    (**(code **)(g_phyFuns + 0x54))(0,0x104,iVar15,0x16,puVar12,iVar14);
    uVar6 = 0x16;
    unaff_a5 = uVar8;
    set_cal_rxdc(iVar15,0x16,uVar8,0x16,puVar12,iVar14);
    uVar7 = 0x16;
    if (unaff_a7 != 0) {
      uVar6 = 0;
      uVar8 = 0x104;
      printf("set_rx_gain: rftx=%x, rfrx=x%x, att=%d, txbb=0x%x, bbrx1=0x%x, bbrx2=0x%x, tdc:%d,%d\n"
             ,0,0x104,uStack16,puVar16,iVar15,0x16,(int)cStack64,(int)cStack63);
      uVar7 = uStack16;
      puVar12 = puVar16;
      iVar14 = iVar15;
    }
    (**(code **)(g_phyFuns + 0x40))(1,uVar6,uVar8,uVar7,puVar12,iVar14);
    cVar2 = '\0';
    do {
      (**(code **)(g_phyFuns + 0x68))(1,unaff_a3,uStack16,0,0,0,0,0,0);
      uVar8 = 1;
      iVar15 = 0x400;
      (**(code **)(g_phyFuns + 0x34))(1,0x400,uStack16,0,0,0);
      iVar14 = _DAT_ram_600005e4;
      memw();
      (**(code **)(g_phyFuns + 0x30))(uVar8,0x400,uStack16,0,0,0);
      uVar7 = uStack16;
      if (unaff_a7 != 0) {
        iVar15 = iVar14 >> 8;
        uVar7 = 0x8000;
        printf("total_pwr=%ld, max=%ld, \n",iVar15,0x8000,0,0,0);
      }
      if (iVar14 < 0x800001) break;
      cVar2 = cVar2 + '\x01';
      uStack16 = uStack16 + 0x18 & 0xff;
    } while (cVar2 != '\x02');
    (**(code **)(g_phyFuns + 0x6c))(1,iVar15,uVar7,0,0,0);
    uVar10 = 0;
    iVar15 = 0;
    iVar14 = 0;
    iStack12 = 0;
    iStack8 = 0;
    do {
      uVar8 = unaff_a6;
      pcVar11 = &cStack62;
      unaff_a6 = uVar8;
      uVar17 = unaff_a3;
      ram_rfcal_rxiq(0xd,unaff_a3,uStack16,pcVar11,uVar8);
      uVar7 = unaff_a3;
      uVar9 = uStack16;
      unaff_a3 = uVar17;
      if (unaff_a7 != 0) {
        uVar9 = SEXT14(cStack62);
        pcVar11 = (char *)(int)cStack61;
        printf("%d_%d_%d\n",uVar10,uVar9,pcVar11,uVar8);
        uVar7 = uVar10;
        unaff_a3 = uVar17;
      }
      if (uVar10 != 0) {
        iVar5 = iVar14 - cStack62;
        (**(code **)g_phyFuns)(iVar5,uVar7,uVar9,pcVar11,uVar8);
        if (iVar5 < 2) {
          iVar5 = iVar15 - cStack61;
          (**(code **)g_phyFuns)(iVar5,uVar7,uVar9,pcVar11,uVar8);
          if (iVar5 < 2) {
            bVar1 = true;
            goto LAB_ram_00405184;
          }
        }
      }
      uVar10 = uVar10 + 1 & 0xff;
      iVar14 = (int)cStack62;
      iVar15 = (int)cStack61;
      iStack12 = iVar15 + iStack12;
      iStack8 = iVar14 + iStack8;
    } while (uVar10 != 4);
    bVar1 = false;
LAB_ram_00405184:
    if (bVar1) {
      cVar2 = (char)(cStack61 + iVar15 + 1 >> 1);
      cVar13 = (char)(cStack62 + iVar14 + 1 >> 1);
    }
    else {
      cVar2 = (char)(iStack12 + 2 >> 2);
      cVar13 = (char)(iStack8 + 2 >> 2);
    }
    cVar3 = -0xf;
    if (-0x10 < cVar13) {
      cVar3 = cVar13;
    }
    cVar13 = '\x0f';
    if (cVar3 < '\x10') {
      cVar13 = cVar3;
    }
    iVar14 = -0x1f;
    if (-0x20 < cVar2) {
      iVar14 = (int)cVar2;
    }
    iVar15 = 0x1f;
    if (iVar14 < 0x20) {
      iVar15 = iVar14;
    }
    if (in_a2 == 0) {
      *(ushort *)(uStack4 * 2 + unaff_a4) = (ushort)iVar15 & 0x3f;
    }
    if (unaff_a7 != 0) {
      printf("rxiq_reg: i=%d, a_mis=%d, p_mis=%d\n",uStack4,(int)cVar13,(int)(char)iVar15,uVar8,
             iVar15);
    }
    uVar10 = uVar10 & 3;
    puVar12 = &rxiq_compute_num;
    uVar7 = uStack4 + 1;
    uStack4 = uVar7 & 0xff;
    rxiq_compute_num = uVar10;
  } while( true );
}



// WARNING: Type propagation algorithm not settling

void gen_rx_gain_table(void)

{
  uint uVar1;
  int in_a2;
  int iVar2;
  uint unaff_a3;
  int unaff_a4;
  char *pcVar3;
  char *unaff_a5;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  int unaff_a6;
  int iVar7;
  char *pcVar8;
  int unaff_a7;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char **ppcVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  char *pcVar16;
  
  pcVar3 = (char *)(int)(char)unaff_a3;
  if ((int)pcVar3 < 0) {
    unaff_a3 = 0x7f;
  }
  cVar6 = DAT_ram_0040d4f0;
  if (0 < (int)unaff_a3) {
    uVar13 = 0;
    uVar1 = 0;
    iVar15 = 0;
    pcVar9 = (char *)(unaff_a6 + -1);
    pcVar4 = unaff_a5 + (int)pcVar9;
    pcVar5 = pcVar4;
    pcVar16 = unaff_a5;
    do {
      iVar7 = uVar13 - iVar15;
      iVar14 = (int)(char)iVar7;
      uVar11 = SEXT14(*unaff_a5);
      if ((int)uVar11 <= iVar14) {
        do {
          iVar7 = (int)(char)iVar7;
          if (((int)pcVar4 <= (int)unaff_a5) ||
             ((pcVar9 = (char *)(uVar11 & 0xff), pcVar9 == (char *)0x0 && (iVar7 < unaff_a5[1]))))
          break;
          iVar15 = iVar15 + (uVar11 & 0xff);
          uVar1 = uVar1 + 1 & 0xff;
          unaff_a5 = pcVar16 + uVar1;
          iVar7 = uVar13 - iVar15;
          iVar14 = (int)(char)iVar7;
          uVar11 = SEXT14(*unaff_a5);
        } while ((int)uVar11 <= iVar14);
      }
      if (iVar14 < 0x18) {
        iVar2 = iVar14;
        __divsi3(iVar14,6,pcVar3,pcVar5,iVar7,pcVar9);
        uVar11 = (1 << 0x20 - (' ' - ((byte)iVar2 & 0x1f))) - 1U & 0xffff;
        __modsi3(iVar14,6,pcVar3,pcVar5,iVar7,pcVar9);
        cVar6 = (char)iVar14;
      }
      else {
        cVar6 = (char)iVar14 + -0x18;
        uVar11 = 0xf;
      }
      if (cVar6 < 5) {
        pcVar8 = (char *)((int)cVar6 & 0xffff);
      }
      else {
        pcVar8 = (char *)0x5;
      }
      pcVar5 = (char *)(uint)*(ushort *)(uVar1 * 2 + unaff_a4);
      ppcVar12 = (char **)(((int)uVar13 >> 1) * 4 + in_a2);
      pcVar10 = pcVar8 + (int)(pcVar5 + uVar11 * 8);
      if ((uVar13 & 1) == 0) {
        *ppcVar12 = pcVar10;
      }
      else {
        pcVar9 = *ppcVar12;
        pcVar10 = pcVar9 + (int)pcVar10;
        *ppcVar12 = pcVar10;
      }
      if (unaff_a7 != 0) {
        printf("index: %d value: 0x%x 0x%x 0x%x 0x%x\n",uVar13,pcVar10,pcVar5,uVar11,pcVar8);
        pcVar3 = pcVar10;
        pcVar9 = pcVar8;
      }
    } while (((uVar11 != 0xf) || (cVar6 = (char)uVar13, pcVar8 != (char *)0x5)) &&
            (uVar13 = SEXT14((char)((char)uVar13 + '\x01')), cVar6 = DAT_ram_0040d4f0,
            uVar13 != unaff_a3));
  }
  DAT_ram_0040d4f0 = cVar6;
  return;
}



void pbus_set_rxbbgain(void)

{
  undefined4 uVar1;
  int in_a2;
  
  if (in_a2 < 0x18) {
    if (in_a2 < 0x12) {
      if (in_a2 < 0xc) {
        uVar1 = 0x40;
        if (in_a2 < 6) {
          uVar1 = 0;
        }
      }
      else {
        uVar1 = 0x60;
      }
    }
    else {
      uVar1 = 0x70;
    }
  }
  else {
    uVar1 = 0x78;
  }
  (**(code **)(g_phyFuns + 0xac))(3,1,uVar1);
  __modsi3();
  (**(code **)(g_phyFuns + 0xac))(3,2,6,6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void set_rx_gain_testchip_50(void)

{
  int in_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *unaff_a3;
  int unaff_a5;
  uint *puVar5;
  int unaff_a6;
  uint unaff_a7;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int in_stack_00000000;
  undefined in_stack_00000004;
  undefined in_stack_00000008;
  undefined in_stack_0000000c;
  undefined auStack80 [4];
  short sStack76;
  short sStack74;
  int iVar10;
  
  if ((rx_table_renew_en != '\0') || ((*unaff_a3 >> 0x10 & 1) == 0)) {
    memw();
    _DAT_ram_600005c8 = _DAT_ram_600005c8 | 0x30000;
    memw();
    memw();
    _DAT_ram_60009a68 = 0x1e0;
    (**(code **)(g_phyFuns + 0xa0))(_DAT_ram_600005c8,0x60000200,0x30000,rx_table_renew_en);
    uVar1 = 0x77;
    (**(code **)(g_phyFuns + 0x94))(0x77,0,0x12,7,0);
    iVar2 = 0x77;
    (**(code **)(g_phyFuns + 0x94))(0x77,0,0x18,5,5);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,5,5,0);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x12,7,0,0);
    iVar10 = unaff_a5;
    if (unaff_a7 != 0) {
      uVar8 = 0;
      uVar9 = 0;
      do {
        uVar6 = *(uint *)((uVar9 >> 1) * 4 + in_stack_00000000);
        if ((uVar9 & 1) != 0) {
          uVar6 = uVar6 >> 0x10;
        }
        uVar7 = uVar6 & 0x7fff;
        uVar3 = (uVar7 >> 8 & 1) + (uVar7 >> 9 & 1) + (uVar7 >> 7 & 1) +
                (uVar7 >> 5 & 1) + (uVar7 >> 6 & 1) + (uVar7 >> 3 & 1) + (uVar7 >> 4 & 1);
        uVar7 = 4;
        if (uVar3 < 5) {
          uVar7 = uVar3;
        }
        uVar3 = uVar7 * 6 + (uVar6 & 7);
        uVar7 = 0x1d;
        if (uVar3 < 0x1e) {
          uVar7 = uVar3;
        }
        if ((uVar8 >> ((byte)uVar7 & 0x1f) & 1) == 0) {
          puVar5 = (uint *)(uVar7 * 8 + unaff_a5);
          if (uVar7 < 0x18) {
            if ((uVar7 & 1) == 0) {
              ram_pbus_set_rxgain(uVar6 & 0xfff,0xfffffdec,unaff_a5,puVar5 + -0x85,0x17,1);
              unaff_a5 = iVar10;
              (**(code **)(g_phyFuns + 0xec))(4000,auStack80,10,in_stack_0000000c,0,1);
              uVar6 = (int)sStack74 & 0x1ff;
              *puVar5 = (int)sStack76 & 0x1ff;
              iVar10 = unaff_a5;
            }
            else {
              uVar6 = puVar5[-1];
              *puVar5 = puVar5[-2];
            }
          }
          else {
            uVar6 = puVar5[-0xb];
            *puVar5 = puVar5[-0xc];
          }
          puVar5[1] = uVar6;
          uVar8 = uVar8 | 1 << 0x20 - (' ' - ((byte)uVar7 & 0x1f));
        }
        uVar9 = uVar9 + 1 & 0xff;
      } while (unaff_a7 != uVar9);
    }
    unaff_a5 = iVar10;
    if (((*unaff_a3 >> 0x10 & 1) == 0) && (in_a2 != 0)) {
      set_rx_gain_cal_iq(0,8,unaff_a6,iVar10,in_stack_00000004,in_stack_00000008,in_stack_0000000c);
      unaff_a5 = iVar10;
    }
    memw();
    _DAT_ram_600005c8 = _DAT_ram_600005c8 & 0xfffcffff;
    memw();
    if (iVar2 != 0) {
      iVar2 = 1;
    }
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,5,5,iVar2);
    uVar4 = 0x77;
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x12,7,0,uVar1);
    (**(code **)(g_phyFuns + 200))(uVar4,0,0x12,7,0,uVar1);
    (**(code **)(g_phyFuns + 0xc4))(uVar4,0,0x12,7,0,uVar1);
    (**(code **)(g_phyFuns + 0xbc))(uVar4,0,0x12,7,0,uVar1);
    *unaff_a3 = *unaff_a3 | 0x10000;
  }
  if (unaff_a7 != 0) {
    uVar8 = 0;
    iVar10 = 0;
    do {
      uVar9 = *(uint *)(iVar10 + in_stack_00000000);
      if ((uVar8 & 1) != 0) {
        uVar9 = uVar9 >> 0x10;
      }
      uVar3 = uVar9 & 0x7fff;
      uVar7 = (uVar3 >> 8 & 1) + (uVar3 >> 9 & 1) + (uVar3 >> 7 & 1) +
              (uVar3 >> 5 & 1) + (uVar3 >> 6 & 1) + (uVar3 >> 3 & 1) + (uVar3 >> 4 & 1);
      uVar6 = 4;
      if (uVar7 < 5) {
        uVar6 = uVar7;
      }
      uVar7 = uVar6 * 6 + (uVar9 & 7);
      uVar9 = 0x1d;
      if (uVar7 < 0x1e) {
        uVar9 = uVar7;
      }
      puVar5 = (uint *)(uVar9 * 8 + unaff_a5);
      uVar9 = puVar5[1];
      uVar7 = *puVar5;
      memw();
      memw();
      *(uint *)(&DAT_ram_60009e00 + uVar8 * 4) = uVar3 * 0x20000 + (uVar7 >> 1 & 0xff);
      memw();
      _DAT_ram_60009a68 = 0x1e0;
      memw();
      *(uint *)(&DAT_ram_60009e00 + uVar8 * 4) =
           (uVar9 >> 9 & 0x1ff) * 0x400000 + uVar7 * -0x80000000 +
           (*(ushort *)(uVar6 * 2 + unaff_a6) & 0x7ff) * 4;
      uVar8 = uVar8 + 1 & 0xff;
      iVar10 = (uVar8 >> 1) << 2;
    } while (unaff_a7 != uVar8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ram_get_corr_power(void)

{
  int iVar1;
  int iVar2;
  int *in_a2;
  uint uVar3;
  int unaff_a3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = _DAT_ram_600005e0;
  iVar7 = _DAT_ram_600005dc;
  memw();
  memw();
  uVar4 = (_DAT_ram_60000580 >> 9) + (_DAT_ram_6000058c >> 9);
  memw();
  memw();
  iVar1 = (_DAT_ram_60000584 >> 9) - (_DAT_ram_60000588 >> 9);
  memw();
  uVar8 = _DAT_ram_600005dc >> 8;
  memw();
  iVar5 = _DAT_ram_600005e0 >> 8;
  memw();
  iVar2 = iVar1 >> 0x1f;
  iVar10 = unaff_a3 * 2 + -4;
  iVar6 = (int)uVar4 >> 0x1f;
  *in_a2 = _DAT_ram_600005e4 >> ((char)unaff_a3 - 2U & 0x1f);
  __muldi3(uVar4,iVar6,uVar4,iVar6,uVar8);
  __muldi3(iVar1,iVar2,iVar1,iVar2,uVar8);
  uVar3 = uVar4 + iVar1;
  iVar6 = iVar6 + iVar2;
  if (uVar3 < uVar4) {
    iVar6 = iVar6 + 1;
  }
  __ashrdi3(uVar3,iVar6,iVar10,iVar2,uVar4);
  in_a2[1] = uVar3;
  iVar7 = iVar7 >> 0x1f;
  iVar9 = iVar9 >> 0x1f;
  __muldi3(uVar8,iVar7,uVar8,iVar7,iVar9);
  __muldi3(iVar5,iVar9,iVar5,iVar9,iVar9);
  uVar4 = uVar8 + iVar5;
  iVar7 = iVar7 + iVar9;
  if (uVar4 < uVar8) {
    iVar7 = iVar7 + 1;
  }
  __ashrdi3(uVar4,iVar7,iVar10,iVar9,iVar9);
  in_a2[2] = uVar4;
  return;
}



void check_data_func(void)

{
  int in_a2;
  int unaff_a3;
  int unaff_a4;
  byte unaff_a5;
  
  if ((in_a2 < unaff_a3) || (unaff_a4 < in_a2)) {
    check_result = check_result | 1 << 0x20 - (' ' - (unaff_a5 & 0x1f));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void do_noisefloor_lsleep_v50(void)

{
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009b60 = _DAT_ram_60009b60 & 0xfffd7ffd | 2;
  _DAT_ram_60009b64 = _DAT_ram_60009b64 & 0xfffffe00 | 0x142;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void do_noisefloor(void)

{
  undefined4 in_a2;
  int unaff_a4;
  uint unaff_a5;
  
  do {
    memw();
    if ((_DAT_ram_60009b60 >> 1 & 1) == 0) {
      ets_delay_us();
      (**(code **)(g_phyFuns + 100))(in_a2);
      do {
        memw();
        if ((_DAT_ram_60009b60 >> 1 & 1) == 0) {
          return;
        }
        memw();
      } while ((uint)(_DAT_ram_3ff20c00 - unaff_a4) <= unaff_a5);
      return;
    }
    memw();
  } while ((uint)(_DAT_ram_3ff20c00 - unaff_a4) <= unaff_a5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void start_dig_rx(void)

{
  undefined4 in_a2;
  
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009a2c = in_a2;
  _DAT_ram_60009b08 = _DAT_ram_60009b08 & 0xf7ffffff;
  _DAT_ram_60009b60 = _DAT_ram_60009b60 & 0xfffffffe;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void stop_dig_rx(void)

{
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009a2c = _DAT_ram_60009a2c & 0xfff7ffff;
  _DAT_ram_60009b08 = _DAT_ram_60009b08 | 0x8000000;
  return;
}



void chip_v6_set_chanfreq(void)

{
  undefined4 in_a2;
  
  (**(code **)(g_phyFuns + 0x44))();
  chip_v6_set_chan(in_a2,0x80);
  return;
}



void tx_cap_init(void)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  uint unaff_a5;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined auStack48 [2];
  undefined uStack46;
  char cStack45;
  int iStack44;
  uint uStack20;
  
  uVar12 = chip6_sleep_params._0_4_;
  if ((chip6_sleep_params._0_4_ >> 0x12 & 1) == 0) {
    (**(code **)(g_phyFuns + 0xa0))();
    (**(code **)(g_phyFuns + 0xc0))(1,0,uVar12);
    ram_pbus_xpd_tx_on(tx_rf_ana_gain & 0xfff,0,uVar12);
    set_txdc_pbus(tx_rf_ana_gain,auStack48,1);
    (**(code **)(g_phyFuns + 0x18))(0,auStack48,1);
    uVar12 = 0;
    iVar14 = 3;
    iStack44 = 0x40d58c;
    do {
      if (uVar12 < 3) {
        cVar2 = (&DAT_ram_0040c2b0)[uVar12];
      }
      else {
        cVar2 = '\x0e';
      }
      pcVar11 = (char *)0x64;
      chip_60_set_channel((int)cVar2,chip6_phy_init_ctrl[1],0,(int)phy_freq_offset,
                          chip6_sleep_params,100,1);
      if (uVar12 == 0) {
        pcVar11 = &cStack45;
        uStack46 = 0x30;
        rfcal_bb_atten_init = 0x3c;
        ram_rfcal_pwrctrl(0x40,&uStack46,1,0x1f,0x3c,pcVar11,0x138,0);
        rfcal_bb_atten_init = cStack45 + '\x1f';
      }
      cVar7 = rfcal_bb_atten_init;
      uVar4 = 0x40;
      uVar8 = 2;
      uVar9 = 0;
      iVar6 = uVar12 * 3;
      iVar10 = iVar6 + iStack44;
      ram_rfcal_txcap(0x40,rfcal_bb_atten_init,2,0,iVar10,pcVar11);
      iVar14 = iVar14 + -1;
      cVar2 = chip6_sleep_params[iVar6 + 0x20];
      uVar12 = uVar12 + 1 & 0xff;
      if (((cVar2 == '\0') && (uVar4 = (uint)(byte)chip6_sleep_params[iVar6 + 0x21], uVar4 == 0)) &&
         (cVar7 = chip6_sleep_params[iVar6 + 0x22], cVar7 == '\0')) {
        uVar8 = 3;
        uVar9 = 7;
        iVar10 = 0xf;
        chip6_sleep_params[iVar6 + 0x20] = 0xf;
        chip6_sleep_params[iVar6 + 0x21] = 7;
        chip6_sleep_params[iVar6 + 0x22] = 3;
      }
    } while (iVar14 != 0);
    uVar12 = 0;
    do {
      chip6_sleep_params[uVar12 + 0x29] = chip6_sleep_params[uVar12 + 0x26];
      uVar12 = uVar12 + 1 & 0xff;
    } while (uVar12 != 3);
    (**(code **)(g_phyFuns + 200))(uVar4,cVar7,uVar8,uVar9,iVar10,cVar2);
    (**(code **)(g_phyFuns + 0xc4))(uVar4,cVar7,uVar8,uVar9,iVar10,cVar2);
    (**(code **)(g_phyFuns + 0xbc))(uVar4,cVar7,uVar8,uVar9,iVar10,cVar2);
    unaff_a5 = 0x40000;
    chip6_sleep_params._0_4_ = chip6_sleep_params._0_4_ | 0x40000;
  }
  uVar12 = chip6_sleep_params._0_4_ >> 0x1b & 1;
  if (uVar12 == 0) {
    uVar15 = 0;
    uVar8 = 3;
    uStack20 = 3;
    uVar4 = chip6_sleep_params._0_4_;
    do {
      iVar14 = 0xe;
      uVar13 = 0;
      do {
        if (uVar13 < 6) {
          bVar3 = chip6_sleep_params[uVar15 + 0x20];
          uVar5 = uVar13;
          __udivsi3(uVar13,5,uVar4,unaff_a5,uVar12,uVar8);
          uVar4 = (uint)(byte)chip6_sleep_params[uVar15 + 0x23] - (uint)bVar3;
          bVar3 = bVar3 + (char)uVar5 * (char)uVar4;
        }
        else {
          unaff_a5 = 10;
          if (uVar13 < 0xb) {
            bVar3 = chip6_sleep_params[uVar15 + 0x23];
            unaff_a5 = (uint)bVar3;
            uVar4 = (byte)chip6_sleep_params[uVar15 + 0x26] - unaff_a5;
            iVar6 = (uVar13 - 5) * uVar4;
            __divsi3(iVar6,5,uVar4,unaff_a5,uVar12,uVar8);
            bVar3 = (char)iVar6 + bVar3;
            uVar12 = unaff_a5;
          }
          else {
            bVar3 = chip6_sleep_params[uVar15 + 0x29];
            uVar8 = 0xc;
            if (uVar13 < 0xd) {
              bVar1 = chip6_sleep_params[uVar15 + 0x26];
              iVar6 = (uVar13 * 5 + -0x32) * ((uint)bVar3 - (uint)bVar1);
              __divsi3(iVar6,0x16,uVar4,10,uVar12,0xc);
              bVar3 = (char)iVar6 + bVar1;
            }
          }
        }
        iVar14 = iVar14 + -1;
        iVar6 = uVar13 * 3;
        uVar13 = uVar13 + 1 & 0xff;
        chip6_sleep_params[uVar15 + iVar6 + 0x5e] = bVar3;
      } while (iVar14 != 0);
      uVar15 = uVar15 + 1 & 0xff;
      uVar4 = uStack20 - 1;
      uStack20 = uVar4;
    } while (uVar4 != 0);
    set_txcap_reg(chip6_sleep_params[48] * 3 + 0x40d5c7,0x40d5c7,0,unaff_a5,uVar12,uVar8);
  }
  return;
}



void target_power_add_backoff(void)

{
  int in_a2;
  int unaff_a3;
  int unaff_a4;
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  iVar4 = 0x18;
  if (unaff_a4 < 0x19) {
    iVar4 = unaff_a4;
  }
  uVar1 = 0;
  do {
    pcVar3 = (char *)(in_a2 + uVar1);
    pcVar2 = (char *)(unaff_a3 + uVar1);
    uVar1 = uVar1 + 1 & 0xff;
    *pcVar3 = *pcVar2 - (char)iVar4;
  } while (uVar1 != 6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void tx_pwctrl_init_cal(void)

{
  char cVar1;
  uint uVar2;
  int in_a2;
  int iVar3;
  int iVar4;
  int unaff_a3;
  int iVar5;
  uint uVar6;
  char acStack48 [8];
  undefined auStack40 [8];
  uint uStack32;
  
  iVar5 = (int)phy_freq_offset;
  chip_60_set_channel((int)(char)in_a2,chip6_phy_init_ctrl[1],0,iVar5,chip6_sleep_params,100,1);
  iVar3 = in_a2 * 3 + 0x40d5c7;
  set_txcap_reg(iVar3,0x40d5c7,0,iVar5,chip6_sleep_params,100);
  cVar1 = do_pwctrl_flag;
  if ((do_pwctrl_flag == '\0') && (in_a2 == 6)) {
    cal_rf_ana_gain(iVar3,0x40d5c7,0,iVar5,chip6_sleep_params,100);
  }
  if (unaff_a3 == 1) {
    iVar3 = 0;
    iVar5 = 0;
    uStack32 = 0;
    do {
      iVar4 = 0x40d59e;
      tx_pwr_backoff(0x40d59e,acStack48,cVar1,0,chip6_sleep_params,100);
      iVar3 = iVar4 + iVar3 >> 0x10;
      if ((iVar4 == 0) && (acStack48[0] != '\0')) {
        if (uStack32 != 2) {
          uVar6 = 0;
          goto LAB_ram_00405cce;
        }
        break;
      }
      uStack32 = uStack32 + 1 & 0xff;
    } while (uStack32 != 2);
    iVar4 = iVar3 + 2;
    if (-1 < iVar3 + 1) {
      iVar4 = iVar3 + 1;
    }
    uVar6 = iVar4 >> 0x11;
  }
  else {
    uVar6 = 0;
  }
LAB_ram_00405cce:
  target_power_add_backoff(auStack40,0x40d59e,uVar6,iVar5,chip6_sleep_params,100);
  if (in_a2 - 1U < 0xb) {
    uVar2 = (uint)(byte)(&DAT_ram_0040c2bf)[in_a2];
  }
  else {
    uVar2 = 3;
  }
  *(short *)(chip6_sleep_params + uVar2 * 2 + 0xc) = (short)uVar6;
  if (unaff_a3 == 1) {
    memw();
    _DAT_ram_600005fc = _DAT_ram_600005fc & 0xffffff00 | uVar6 & 0xff;
    memw();
  }
  rfcal_bb_atten_init = rfcal_bb_atten_init + -6;
  ram_rfcal_pwrctrl(0x40,auStack40,6,0x1f,(int)rfcal_bb_atten_init,0x40d5a4,0x138,0);
  if ((int)(((uint)chip6_sleep_params[50] - (uint)chip6_sleep_params[51]) + 4) <
      (int)chip6_sleep_params[57] - (int)chip6_sleep_params[56]) {
    chip6_sleep_params._0_4_ = chip6_sleep_params._0_4_ | 0x20000000;
  }
  if (4 < *(short *)(chip6_sleep_params + uVar2 * 2 + 0xc)) {
    txbk_dpdby_flag = 1;
  }
  rfcal_bb_atten_init = chip6_sleep_params[61] + '%';
  return;
}



void tx_atten_set_interp(void)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint in_a2;
  int iVar5;
  int unaff_a3;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined *unaff_a7;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  
  if (chip6_phy_init_ctrl[94] == '\0') {
    set_most_pwr_reg(0);
  }
  iVar14 = 0;
  puVar11 = chip6_sleep_params;
  iVar12 = 6;
  iVar6 = in_a2 - 1;
  iVar9 = in_a2 * 5 + -0x37;
  iVar7 = iVar6;
  uVar13 = in_a2 - 6;
  iVar10 = iVar9;
  do {
    if (in_a2 < 7) {
      bVar1 = puVar11[0x38];
      iVar7 = (int)(char)puVar11[0x3e] - (int)(char)bVar1;
      iVar5 = iVar6 * iVar7;
      __divsi3(iVar5,5,iVar7,(int)(char)bVar1,iVar10,unaff_a7);
      iVar5 = iVar5 + (uint)bVar1;
      uVar8 = (uint)bVar1;
    }
    else {
      if (in_a2 < 0xc) {
        bVar1 = puVar11[0x3e];
        iVar7 = (int)(char)puVar11[0x44] - (int)(char)bVar1;
        iVar5 = (in_a2 - 6) * iVar7;
        __divsi3(iVar5,5,iVar7,(int)(char)bVar1,iVar10,unaff_a7);
        iVar5 = iVar5 + (uint)bVar1;
        uVar8 = (uint)bVar1;
      }
      else {
        iVar5 = (int)(char)puVar11[0x4a];
        uVar8 = uVar13;
        if (in_a2 < 0xe) {
          uVar8 = (uint)(byte)puVar11[0x44];
          iVar7 = iVar5 - (char)puVar11[0x44];
          iVar5 = iVar9 * iVar7;
          __divsi3(iVar5,0x16,iVar7,uVar13,0xd,unaff_a7);
          iVar5 = iVar5 + uVar8;
        }
      }
    }
    puVar11 = puVar11 + 1;
    iVar12 = iVar12 + -1;
    unaff_a7 = (undefined *)(iVar14 + unaff_a3);
    iVar14 = iVar14 + 1;
    iVar10 = chip6_sleep_params[92] + iVar5;
    *unaff_a7 = (char)iVar10;
    cVar3 = chip6_sleep_params[68];
    cVar4 = chip6_sleep_params[62];
    cVar2 = chip6_sleep_params[56];
    uVar13 = uVar8;
  } while (iVar12 != 0);
  if ((chip6_phy_init_ctrl[79] == '\x01') || (DAT_ram_0040d678 == '\x01')) {
    uVar13 = (uint)chip6_phy_init_ctrl[74];
    if (chip6_phy_init_ctrl[70] == '\0') {
      cVar2 = chip6_sleep_params[58];
      if ((in_a2 < 3) || (cVar2 = chip6_sleep_params[70], 9 < in_a2)) {
        chip6_sleep_params[82] = 1;
        iVar9 = (int)cVar2;
      }
      else {
        iVar9 = -0x80;
        chip6_sleep_params[82] = 0;
      }
    }
    else {
      if (uVar13 < in_a2) {
        if ((int)in_a2 < (int)(0xf - (uint)chip6_phy_init_ctrl[73])) {
          chip6_sleep_params[82] = 0;
          iVar9 = -0x80;
          goto LAB_ram_00405ed9;
        }
        cVar2 = chip6_sleep_params[chip6_phy_init_ctrl[71] + 0x4a];
        iVar9 = (int)cVar2;
        if (chip6_phy_init_ctrl[75] == '\x01') {
          if (in_a2 < 0xc) {
            iVar6 = ((int)chip6_sleep_params[68] - (int)chip6_sleep_params[62]) * (8 - uVar13);
            __divsi3(iVar6,5,iVar7,uVar8,iVar10,unaff_a7);
            cVar4 = cVar4 + (char)iVar6;
          }
          else {
            iVar7 = 3 - uVar13;
            iVar6 = ((int)chip6_sleep_params[74] - (int)chip6_sleep_params[68]) * iVar7 * 5;
            __divsi3(iVar6,0x16,iVar7,uVar8,iVar10,unaff_a7);
            cVar4 = cVar3 + (char)iVar6;
          }
          iVar6 = (cVar4 - iVar9) * (0xe - in_a2);
          __divsi3(iVar6,uVar13,iVar7,uVar8,iVar10,unaff_a7);
          iVar9 = (int)(char)(cVar2 + (char)iVar6);
        }
      }
      else {
        cVar4 = chip6_sleep_params[chip6_phy_init_ctrl[72] + 0x38];
        iVar9 = (int)cVar4;
        if (chip6_phy_init_ctrl[75] == '\x01') {
          iVar12 = uVar13 * ((int)chip6_sleep_params[62] - (int)chip6_sleep_params[56]);
          __divsi3(iVar12,5,iVar7,uVar8,iVar10,unaff_a7);
          iVar6 = iVar6 * ((char)(cVar2 + (char)iVar12) - iVar9);
          __divsi3(iVar6,uVar13,iVar7,uVar8,iVar10,unaff_a7);
          iVar9 = (int)(char)(cVar4 + (char)iVar6);
        }
      }
      chip6_sleep_params[82] = 1;
    }
  }
  else {
    chip6_sleep_params[82] = 0;
    iVar9 = -0x80;
  }
LAB_ram_00405ed9:
  chip6_sleep_params[49] = (undefined)iVar9;
  ram_set_txbb_atten(0x40d62a,5,unaff_a3,chip6_sleep_params[82],iVar9,unaff_a7);
  return;
}



void check_tx_pwr_cal(void)

{
  bool bVar1;
  uint uVar2;
  uint in_a2;
  int iVar3;
  int unaff_a3;
  int unaff_a4;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar8;
  int iStack20;
  uint uStack16;
  int iVar7;
  
  uStack16 = in_a2 >> 9 & 7;
  uVar2 = chip6_sleep_params._90_2_ >> 9 & 7;
  iVar7 = 0;
  cVar6 = '\0';
  bVar1 = uVar2 < uStack16;
  uVar4 = uVar2;
  if (bVar1) {
    uVar4 = uStack16;
    uStack16 = uVar2;
  }
  if (uStack16 < uVar4) {
    do {
      uVar2 = uStack16 & 0xff;
      if (bVar1) {
        get_rf_gain_qdb(uVar2);
        uVar2 = -uVar2;
      }
      else {
        get_rf_gain_qdb(uVar2);
      }
      iVar7 = iVar7 + uVar2;
      cVar6 = (char)iVar7;
      uStack16 = SEXT14((char)((char)uStack16 + '\x01'));
    } while ((int)uStack16 < (int)uVar4);
  }
  iVar7 = 0;
  iVar5 = 0;
  uStack16 = 0;
  do {
    iVar8 = (int)(char)(*(char *)(iVar7 + unaff_a3) - chip6_sleep_params[iVar7 * 6 + 0x3d]);
    iVar3 = iVar8;
    (**(code **)g_phyFuns)(iVar8);
    if (iVar5 < iVar3) {
      iVar5 = iVar8;
      (**(code **)g_phyFuns)(iVar8);
      iVar5 = (int)(char)iVar5;
      uStack16 = iVar8;
    }
    iVar7 = (int)(char)((char)iVar7 + '\x01');
  } while (iVar7 != 4);
  iVar7 = 0;
  iStack20 = 0;
  iVar5 = 0;
  do {
    iVar8 = (int)(char)((char)*(undefined2 *)(iVar7 * 2 + unaff_a4) -
                       (char)*(undefined2 *)(chip6_sleep_params + iVar7 * 2 + 0xc));
    iVar3 = iVar8;
    (**(code **)g_phyFuns)(iVar8);
    if (iVar5 < iVar3) {
      iVar5 = iVar8;
      (**(code **)g_phyFuns)(iVar8);
      iVar5 = (int)(char)iVar5;
      iStack20 = iVar8;
    }
    iVar7 = (int)(char)((char)iVar7 + '\x01');
  } while (iVar7 != 4);
  phy_txpwr_diff_flash._0_1_ = cVar6 + (char)uStack16;
  phy_txpwr_diff_flash._1_1_ = (char)iStack20;
  return;
}



void tx_pwctrl_init(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined uVar3;
  undefined4 in_a2;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined2 *puVar6;
  undefined *unaff_a6;
  uint uVar7;
  undefined local_40 [8];
  undefined2 local_38 [4];
  undefined auStack48 [8];
  undefined auStack40 [8];
  undefined4 uStack32;
  uint uStack28;
  
  if ((chip6_sleep_params._0_4_ >> 0x14 & 1) == 0) {
    uVar7 = 0;
    uStack32 = in_a2;
    uStack28 = (uint)chip6_sleep_params._90_2_;
    do {
      puVar6 = local_38 + uVar7;
      *puVar6 = *(undefined2 *)(chip6_sleep_params + uVar7 * 2 + 0xc);
      puVar4 = local_40 + uVar7;
      *puVar4 = chip6_sleep_params[uVar7 * 6 + 0x3d];
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 != 4);
    (**(code **)(g_phyFuns + 0xa0))(puVar4,puVar6,0,local_38,local_40);
    (**(code **)(g_phyFuns + 0xc0))(1,puVar6,0,local_38,local_40);
    ram_pbus_xpd_tx_on(tx_rf_ana_gain & 0xfff,puVar6,0,local_38,local_40);
    set_txdc_pbus(tx_rf_ana_gain,auStack48,1,local_38,local_40);
    (**(code **)(g_phyFuns + 0x18))(0,auStack48,1,local_38,local_40);
    uVar7 = 0;
    do {
      uVar1 = uStack32;
      if (uVar7 < 3) {
        uVar3 = (&DAT_ram_0040c2d0)[uVar7];
      }
      else {
        uVar3 = 0xe;
      }
      tx_pwctrl_init_cal(uVar3,uStack32,1,local_38,local_40);
      uVar2 = uStack28;
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 != 3);
    uVar7 = 0;
    chip6_sleep_params._18_2_ = chip6_sleep_params._16_2_;
    do {
      puVar5 = chip6_sleep_params + uVar7;
      chip6_sleep_params[uVar7 + 0x4a] = chip6_sleep_params[uVar7 + 0x44];
      uVar7 = uVar7 + 1 & 0xff;
    } while (uVar7 != 6);
    (**(code **)(g_phyFuns + 200))(puVar5,uVar1,1,local_38,local_40);
    (**(code **)(g_phyFuns + 0xc4))(puVar5,uVar1,1,local_38,local_40);
    (**(code **)(g_phyFuns + 0xbc))(puVar5,uVar1,1,local_38,local_40);
    chip6_sleep_params[93] = 0;
    chip6_sleep_params[92] = 0;
    chip6_sleep_params._80_2_ = 0;
    chip6_sleep_params[140] = 0;
    chip6_sleep_params._0_4_ = chip6_sleep_params._0_4_ | 0x100000;
    puVar6 = local_38;
    check_tx_pwr_cal(uVar2,local_40,puVar6,local_38,local_40);
    unaff_a6 = local_40;
  }
  else {
    tx_rf_ana_gain = chip6_sleep_params._90_2_;
    puVar6 = (undefined2 *)0x0;
    set_txdc_pbus((uint)chip6_sleep_params._90_2_,auStack48,0);
    set_rfanagain_dc_reg(tx_rf_ana_gain,auStack48,0);
  }
  if ((chip6_sleep_params._0_4_ >> 0x1b & 1) == 0) {
    tx_atten_set_interp(chip6_sleep_params[48],auStack40,puVar6,chip6_sleep_params._0_4_,unaff_a6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ram_get_noisefloor(void)

{
  memw();
  return;
}



void get_noisefloor_sat(void)

{
  (**(code **)(g_phyFuns + 0x28))();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ram_set_noise_floor(void)

{
  int in_a2;
  int iVar1;
  
  memw();
  memw();
  iVar1 = in_a2 + 2;
  if (-1 < in_a2 + 1) {
    iVar1 = in_a2 + 1;
  }
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009b60 = _DAT_ram_60009b60 & 0xfffd7ffd | 2;
  _DAT_ram_60009b64 = _DAT_ram_60009b64 & 0xfffffe00 | (iVar1 >> 1) + 0x200U & 0x1ff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ram_start_noisefloor(void)

{
  memw();
  if ((_DAT_ram_60009b60 >> 1 & 1) == 0) {
    memw();
    _DAT_ram_60009b64 = _DAT_ram_60009b64 & 0xfffff000 | 0x1a0;
    memw();
    memw();
    _DAT_ram_60009b60 = _DAT_ram_60009b60 | 0x28002;
    memw();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void read_hw_noisefloor(void)

{
  memw();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void noise_check_loop(void)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int unaff_a3;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  iVar9 = 0x60009a00;
  uVar8 = 0x200;
  memw();
  _DAT_ram_60009b64 = _DAT_ram_60009b64 & 0xfffff1ff | 0x200;
  memw();
  memw();
  if ((_DAT_ram_60009b60 >> 0xf & 5) != 5) {
    (**(code **)(g_phyFuns + 100))();
    goto LAB_ram_00406425;
  }
  uVar6 = (uint)DAT_ram_0040d6b8;
  memw();
  if ((_DAT_ram_60009b60 >> 1 & 1) == 0) {
    if (9 < uVar6) goto LAB_ram_00406440;
    (**(code **)(g_phyFuns + 0x28))(uVar6);
  }
  else {
    if (uVar6 < 10) {
      DAT_ram_0040d6b8 = DAT_ram_0040d6b8 + 1;
      goto LAB_ram_00406425;
    }
LAB_ram_00406440:
    uVar6 = 0xfffffeb0;
  }
  iVar7 = -0x194;
  if (-0x194 < (int)uVar6) {
    uVar8 = (uint)DAT_ram_0040d6b8;
    iVar9 = -0x154;
    if (uVar8 < 10) {
      uVar3 = 0xfffffe78;
      if (-0x189 < (int)uVar6) {
        uVar3 = uVar6;
      }
      uVar6 = 0xfffffeac;
      if ((int)uVar3 < -0x153) {
        uVar6 = uVar3;
      }
      uVar6 = (int)uVar6 >> 0x10;
    }
    iVar4 = (int)chip6_sleep_params._88_2_;
    if (iVar4 < (int)uVar6) {
      iVar4 = uVar6 + iVar4 * 3;
      iVar7 = iVar4 + -2;
      iVar5 = iVar4 + 1;
      if (-1 < iVar7) {
        iVar5 = iVar7;
      }
      iVar5 = iVar5 >> 2;
LAB_ram_0040648f:
      iVar4 = iVar5 >> 0x10;
      chip6_sleep_params._88_2_ = (short)((uint)iVar5 >> 0x10);
    }
    else {
      if ((int)uVar6 < iVar4) {
        iVar7 = iVar4 + -0x10;
        if ((int)uVar6 < iVar7) {
          iVar5 = iVar4 + -0xc;
        }
        else {
          iVar4 = iVar4 + uVar6 * 3;
          iVar7 = iVar4 + -2;
          iVar5 = iVar4 + 1;
          if (-1 < iVar7) {
            iVar5 = iVar7;
          }
          iVar5 = iVar5 >> 2;
        }
        goto LAB_ram_0040648f;
      }
    }
    sVar2 = (short)iVar4;
    if (sw_scan_mode == '\0') {
      iVar5 = (int)chip6_sleep_params._46_2_;
      uVar8 = iVar5 + 8;
      if (((int)uVar8 < iVar4) || (iVar9 = iVar5 + -8, iVar4 < iVar9)) goto LAB_ram_004064e5;
      bVar1 = false;
    }
    else {
      if (-0x184 < iVar4) {
        iVar7 = iVar4 + -0x184;
        iVar5 = iVar4 + -0x183;
        if (-1 < iVar7) {
          iVar5 = iVar7;
        }
        iVar4 = iVar5 >> 0x11;
        sVar2 = (short)(iVar5 >> 0x11);
      }
LAB_ram_004064e5:
      chip6_sleep_params._46_2_ = sVar2;
      bVar1 = true;
      iVar5 = iVar4;
    }
    if ((unaff_a3 != 0) && (bVar1)) {
      (**(code **)(g_phyFuns + 0x58))(iVar5,unaff_a3,iVar7,uVar8,&DAT_ram_0040d6b8,iVar9);
    }
  }
  (**(code **)(g_phyFuns + 100))();
  DAT_ram_0040d6b8 = 0;
LAB_ram_00406425:
  rtc_mem_backup(0x40d5c0,0x40d5c9,chip6_sleep_params._144_4_,uVar8,&DAT_ram_0040d6b8,iVar9);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void noise_init(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_a2;
  int iVar4;
  uint unaff_a3;
  int iVar5;
  undefined4 unaff_a4;
  uint unaff_a5;
  uint uVar6;
  uint uVar7;
  int unaff_a6;
  undefined2 *puVar8;
  uint uVar9;
  short *psVar10;
  uint *in_stack_00000000;
  uint uStack24;
  undefined4 uVar11;
  
  if ((*in_stack_00000000 >> 0x15 & 1) == 0) {
    (**(code **)(g_phyFuns + 0x58))(0xfffffe7c);
    memw();
    memw();
    memw();
    _DAT_ram_60009a34 = _DAT_ram_60009a34 & 0xfffffc00 | 200;
    memw();
    memw();
    uStack24 = 0;
    chip6_sleep_params._46_2_ = 0xfe7c;
    do {
      uVar6 = uStack24 + 1;
      puVar8 = (undefined2 *)((int)&noise_array + uStack24 * 2);
      *puVar8 = 0xfeac;
      uVar3 = _DAT_ram_60009d40;
      uVar2 = _DAT_ram_60009d20;
      uVar7 = _DAT_ram_60009a2c;
      uStack24 = uVar6 & 0xff;
    } while (uStack24 != 4);
    memw();
    memw();
    memw();
    memw();
    _DAT_ram_60009a2c = _DAT_ram_60009a2c & 0xfffffffe;
    memw();
    memw();
    _DAT_ram_60009d20 = _DAT_ram_60009d20 & 0xbfffffff;
    memw();
    uStack24 = 0;
    do {
      uVar1 = _DAT_ram_3ff20c00;
      memw();
      iVar5 = uStack24 * 5 + 1;
      iVar4 = 0xe;
      if (uStack24 - 3 != 0) {
        iVar4 = iVar5;
      }
      chip_v6_set_chan((int)(char)iVar4,iVar5,uStack24 - 3,uVar6,puVar8,0);
      memw();
      if (unaff_a3 != 0) {
        uVar9 = 0;
        psVar10 = (short *)((int)&noise_array + uStack24 * 2);
        uVar11 = unaff_a4;
        do {
          uVar6 = unaff_a5;
          iVar4 = in_a2;
          unaff_a5 = uVar6;
          unaff_a4 = uVar11;
          do_noisefloor(in_a2,uVar11,uVar1,uVar6,puVar8,0);
          if (iVar4 != 0) break;
          get_noisefloor_sat(0,uVar11,uVar1,uVar6,puVar8,0);
          if (iVar4 < *psVar10) {
            *psVar10 = (short)iVar4;
          }
          uVar9 = uVar9 + 1 & 0xff;
          uVar11 = unaff_a4;
        } while (unaff_a3 != uVar9);
      }
      memw();
      _DAT_ram_60009a34 = _DAT_ram_60009a34 & 0xfffffffe;
      memw();
      uStack24 = uStack24 + 1 & 0xff;
    } while (uStack24 != 4);
    memw();
    memw();
    memw();
    _DAT_ram_60009a2c = uVar7;
    _DAT_ram_60009d20 = uVar2;
    _DAT_ram_60009d40 = uVar3;
    if (unaff_a6 == 0) {
      chip6_sleep_params._46_2_ = -0x184;
    }
    else {
      iVar4 = -0x28;
      uStack24 = 0;
      do {
        iVar5 = uStack24 * 2;
        uVar7 = uStack24 + 1;
        uStack24 = uVar7 & 0xff;
        iVar5 = (int)*(short *)((int)&noise_array + iVar5);
        if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
        iVar4 = iVar5 >> 0x10;
      } while (uStack24 != 4);
      chip6_sleep_params._46_2_ = (short)((uint)iVar5 >> 0x10);
      (**(code **)(g_phyFuns + 0x58))(iVar4,&rxiq_compute_num,4,uVar7,0x60009a00,uVar2);
    }
    *in_stack_00000000 = *in_stack_00000000 | 0x200000;
    chip6_sleep_params._88_2_ = chip6_sleep_params._46_2_;
  }
  else {
    (**(code **)(g_phyFuns + 0x58))((int)chip6_sleep_params._46_2_);
    memw();
    memw();
    memw();
    _DAT_ram_60009a34 = _DAT_ram_60009a34 & 0xfffffc00 | 200;
    memw();
    memw();
  }
  return;
}



void target_power_backoff(void)

{
  char in_a2;
  uint uVar1;
  char *pcVar2;
  char local_10 [8];
  
  tx_atten_set_interp(chip6_sleep_params[48],local_10);
  uVar1 = 0;
  do {
    pcVar2 = local_10 + uVar1;
    uVar1 = uVar1 + 1 & 0xff;
    *pcVar2 = *pcVar2 + in_a2;
  } while (uVar1 != 6);
  ram_set_txbb_atten(0x40d62a,5,local_10,chip6_sleep_params[82],(int)chip6_sleep_params[49]);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sdt_on_noise_start(void)

{
  undefined4 in_a2;
  uint unaff_a3;
  uint uVar1;
  int *unaff_a4;
  uint uVar2;
  int unaff_a5;
  uint unaff_a6;
  
  printf("\n");
  do {
    memw();
  } while (*unaff_a4 != unaff_a5);
  ets_delay_us(in_a2);
  uVar2 = 5;
  memw();
  uVar1 = _DAT_ram_60009b60 >> 0xf & 5;
  if (uVar1 == 5) {
    unaff_a5 = -3;
    memw();
    uVar2 = _DAT_ram_60009b60 & 0xfffffffd;
    memw();
    _DAT_ram_60009b60 = uVar2;
  }
  else {
    memw();
    unaff_a6 = _DAT_ram_60009b60;
  }
  (**(code **)(g_phyFuns + 100))
            (unaff_a3 & 0xff,uVar1,uVar2,unaff_a5,unaff_a6,*(code **)(g_phyFuns + 100));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void chip_v6_set_chan_rx_cmp(void)

{
  int in_a2;
  int unaff_a3;
  int iVar1;
  int iVar2;
  char local_20;
  char cStack31;
  char cStack30;
  
  cStack30 = '\0';
  iVar1 = 0;
  local_20 = '\0';
  cStack31 = '\0';
  if (in_a2 < 7) {
    iVar1 = (int)chip6_phy_init_ctrl[19] - (int)chip6_phy_init_ctrl[18];
    __divsi3((in_a2 + -1) * iVar1,5,iVar1);
  }
  else {
    iVar2 = (int)chip6_phy_init_ctrl[20] - (int)chip6_phy_init_ctrl[19];
    if (in_a2 < 0xe) {
      __divsi3(iVar2 * (in_a2 + -6),5,0);
    }
    else {
      __divsi3(iVar2 * (in_a2 + -2),5,0);
    }
  }
  if (unaff_a3 == 1) {
    iVar2 = -6;
    local_20 = -6;
    cStack30 = -6;
  }
  else {
    if (unaff_a3 == 2) {
      local_20 = chip6_phy_init_ctrl[21];
      cStack31 = chip6_phy_init_ctrl[22];
      cStack30 = chip6_phy_init_ctrl[23];
    }
    else {
      if (unaff_a3 == 3) {
        local_20 = chip6_phy_init_ctrl[24];
        cStack31 = chip6_phy_init_ctrl[25];
        cStack30 = chip6_phy_init_ctrl[26];
      }
    }
    iVar2 = (int)cStack31;
  }
  if (in_a2 < 7) {
    __divsi3((in_a2 + -1) * (iVar2 - local_20),5,iVar1);
  }
  else {
    if (in_a2 < 0xe) {
      __divsi3((cStack30 - iVar2) * (in_a2 + -6),5,iVar1);
    }
    else {
      __divsi3((cStack30 - iVar2) * (in_a2 + -2),5,iVar1);
    }
  }
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009a34 = _DAT_ram_60009a34 & 0xfffffffe;
  _DAT_ram_60009d68 = _DAT_ram_60009d68 & 0xfffc03ff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void chip_v6_set_chan_misc(void)

{
  uint in_a2;
  undefined auStack16 [8];
  uint uStack8;
  
  if ((chip6_sleep_params._0_4_ >> 0x12 & 1) != 0) {
    uStack8 = in_a2;
    set_txcap_reg(in_a2 * 3 + 0x40d5c7,0x40d5c7);
    in_a2 = uStack8;
  }
  memw();
  if ((_DAT_ram_3ff20c70 >> 1 & 1) != 0) {
    tx_atten_set_interp(in_a2 & 0xff,auStack16);
    chip_v6_rxmax_ext(rxmax_ext_level,auStack16);
    (**(code **)(g_phyFuns + 0x58))((int)chip6_sleep_params._46_2_,auStack16);
    ets_delay_us(0x1e,auStack16);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_dig_spur_set(void)

{
  char in_a2;
  int iVar1;
  int iVar2;
  uint unaff_a3;
  uint uVar3;
  int unaff_a4;
  uint uVar4;
  int unaff_a6;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uStack56;
  
  if (chip6_phy_init_ctrl[1] == '\0') {
    iVar6 = 0x28;
  }
  else {
    if (chip6_phy_init_ctrl[1] == '\x01') {
      iVar6 = 0x1a;
    }
    else {
      iVar6 = 0x28;
      if (chip6_phy_init_ctrl[1] == '\x02') {
        iVar6 = 0x18;
      }
    }
  }
  uVar3 = unaff_a3;
  __modsi3();
  if ((int)uVar3 < 10) {
    __divsi3();
  }
  else {
    if ((int)(iVar6 - uVar3) < 10) {
      __divsi3();
    }
  }
  uStack56 = 0;
  uVar3 = (uint)chip6_phy_init_ctrl[29];
  if ((uVar3 == 0) || (uVar8 = (uint)chip6_phy_init_ctrl[28], uVar8 == 0)) {
    uVar3 = 0;
  }
  else {
    unaff_a4 = uVar3 * (unaff_a3 & 0xffff);
    iVar6 = unaff_a4;
    __modsi3(unaff_a4,uVar8);
    if (iVar6 < 0) {
      iVar6 = unaff_a4;
      __divsi3(unaff_a4,uVar8,unaff_a4);
      __floatsisf(iVar6,uVar8,unaff_a4);
      uVar9 = uVar8;
      __floatsisf(uVar8,uVar8,unaff_a4);
      __floatunsisf(uVar3,uVar8,unaff_a4);
      __divsf3(uVar9,uVar3,unaff_a4);
      __mulsf3(iVar6,uVar9,unaff_a4);
      __mulsf3(iVar6,0x41200000,unaff_a4);
      __fixsfsi(iVar6,0x41200000,unaff_a4);
    }
    else {
      unaff_a6 = uVar8 - iVar6;
      if (-1 < unaff_a6) {
        uVar3 = 0;
        goto LAB_ram_00406ad1;
      }
      iVar6 = unaff_a4;
      __divsi3(unaff_a4,uVar8,unaff_a4);
      iVar6 = iVar6 + 1;
      __floatsisf(iVar6,uVar8,unaff_a4);
      uVar9 = uVar8;
      __floatsisf(uVar8,uVar8,unaff_a4);
      __floatunsisf(uVar3,uVar8,unaff_a4);
      __divsf3(uVar9,uVar3,unaff_a4);
      __mulsf3(iVar6,uVar9,unaff_a4);
      __mulsf3(iVar6,0x41200000,unaff_a4);
      __fixsfsi(iVar6,0x41200000,unaff_a4);
    }
    uVar3 = unaff_a3 * -10 + iVar6;
  }
LAB_ram_00406ad1:
  iVar6 = unaff_a3 * -10;
  uVar8 = (uint)chip6_phy_init_ctrl[60];
  if ((uVar8 == 0) || (uVar9 = (uint)chip6_phy_init_ctrl[59], uVar9 == 0)) {
    uVar8 = 0;
  }
  else {
    iVar1 = uVar8 * (unaff_a3 & 0xffff);
    iVar2 = iVar1;
    __modsi3(iVar1,uVar9,unaff_a4);
    if (iVar2 < 0) {
      __divsi3(iVar1,uVar9,unaff_a4);
      __floatsisf(iVar1,uVar9,unaff_a4);
      uVar5 = uVar9;
      __floatsisf(uVar9,uVar9,unaff_a4);
      __floatunsisf(uVar8,uVar9,unaff_a4);
      __divsf3(uVar5,uVar8,unaff_a4);
      __mulsf3(iVar1,uVar5,unaff_a4);
      __mulsf3(iVar1,0x41200000,unaff_a4);
      __fixsfsi(iVar1,0x41200000,unaff_a4);
    }
    else {
      unaff_a4 = uVar9 - iVar2;
      if (-1 < unaff_a4) {
        uVar8 = 0;
        goto LAB_ram_00406b47;
      }
      __divsi3(iVar1,uVar9,unaff_a4);
      iVar1 = iVar1 + 1;
      __floatsisf(iVar1,uVar9,unaff_a4);
      uVar5 = uVar9;
      __floatsisf(uVar9,uVar9,unaff_a4);
      __floatunsisf(uVar8,uVar9,unaff_a4);
      __divsf3(uVar5,uVar8,unaff_a4);
      __mulsf3(iVar1,uVar5,unaff_a4);
      __mulsf3(iVar1,0x41200000,unaff_a4);
      __fixsfsi(iVar1,0x41200000,unaff_a4);
    }
    uVar8 = iVar6 + iVar1;
  }
LAB_ram_00406b47:
  uVar5 = iVar6 + (uint)chip6_phy_init_ctrl._66_2_ + 24000;
  uVar9 = uVar5;
  (**(code **)g_phyFuns)(uVar5,uVar8,unaff_a4);
  if (99 < (int)uVar9) {
    uVar5 = 0;
  }
  uVar7 = iVar6 + (uint)chip6_phy_init_ctrl._68_2_ + 24000;
  uVar9 = uVar7;
  (**(code **)g_phyFuns)(uVar7,(uint)chip6_phy_init_ctrl._68_2_,&g_phyFuns,100,unaff_a6);
  uVar4 = (int)(uint)chip6_phy_init_ctrl._30_2_ >> (in_a2 - 1U & 0x1f);
  if (((((uVar4 & 1) == 0) || (uVar3 == 0)) &&
      ((uVar4 = (int)(uint)chip6_phy_init_ctrl._62_2_ >> (in_a2 - 1U & 0x1f), (uVar4 & 1) == 0 ||
       (uVar3 = uVar8, uVar8 == 0)))) && (uVar3 = uVar5, uVar5 == 0)) {
    if (99 < (int)uVar9) {
      uVar7 = 0;
    }
    uVar3 = uStack56;
    if (uVar7 != 0) {
      uVar3 = uVar7;
    }
  }
  __floatsidf(uVar3,uVar8,uVar4,100,unaff_a6);
  uVar9 = uVar3;
  __muldf3(uVar3,uVar8,0x9999999a,0x40499999,unaff_a6);
  __divdf3(uVar9,uVar8,0,0x40240000,unaff_a6);
  __fixdfsi(uVar9,uVar8,0,0x40240000,unaff_a6);
  __muldf3(uVar3,uVar8,0x9999999a,0x40e99999,unaff_a6);
  __divdf3(uVar3,uVar8,0,0x40240000,unaff_a6);
  __fixdfsi(uVar3,uVar8,0,0x40240000,unaff_a6);
  memw();
  memw();
  _DAT_ram_600098a0 = _DAT_ram_600098a0 & 0xc0000000 | (uVar9 & 0x3ff) << 0x14 | uVar3 & 0xfffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_dig_spur_prot(void)

{
  char cVar1;
  int unaff_retaddr;
  int in_a2;
  int iVar2;
  int unaff_a12;
  int iVar3;
  
  if (in_a2 == 0) {
    unaff_a12 = 0;
    unaff_retaddr = 0;
  }
  else {
    if (in_a2 < 1) {
      if (in_a2 < 0) {
        iVar3 = 0;
        iVar2 = iVar3;
        __divsi3(0,100);
        unaff_a12 = (int)(char)((char)iVar2 + -1);
        __divsi3(0,10);
        __modsi3(iVar3,10);
        if (iVar3 < -8) {
          unaff_retaddr = 1;
        }
        else {
          unaff_retaddr = 3;
          if (-3 < iVar3) {
            unaff_retaddr = 2;
          }
        }
      }
    }
    else {
      iVar3 = 0;
      iVar2 = iVar3;
      __divsi3(0,100);
      unaff_a12 = (int)(char)iVar2;
      __divsi3(0,10);
      __modsi3(iVar3,10);
      if (iVar3 < 2) {
        unaff_retaddr = 1;
      }
      else {
        unaff_retaddr = 3;
        if (7 < iVar3) {
          unaff_retaddr = 2;
        }
      }
    }
  }
  _DAT_ram_600099b0 = unaff_retaddr >> 1;
  cVar1 = (char)unaff_a12;
  _DAT_ram_600098d4 = _DAT_ram_600099b0;
  if (0 < unaff_a12) {
    _DAT_ram_600098d4 = unaff_retaddr << 0x20 - (' ' - (cVar1 - 1U & 0x1f));
  }
  memw();
  _DAT_ram_6000989c = unaff_retaddr << 0x20 - (' ' - (cVar1 + 0x1eU & 0x1f));
  if (-1 < unaff_a12) {
    _DAT_ram_6000989c = 0;
  }
  memw();
  if (0 < unaff_a12) {
    _DAT_ram_600099b0 = unaff_retaddr << 0x20 - (' ' - (cVar1 - 1U & 0x1f));
  }
  memw();
  _DAT_ram_60009884 = unaff_retaddr << 0x20 - (' ' - (cVar1 + 0x1eU & 0x1f));
  if (-1 < unaff_a12) {
    _DAT_ram_60009884 = 0;
  }
  memw();
  if (unaff_retaddr == 1) {
    _DAT_ram_60009d08 = 2;
  }
  else {
    if (unaff_retaddr == 2) {
      _DAT_ram_60009d08 = 8;
    }
    else {
      _DAT_ram_60009d08 = 0;
      if (unaff_retaddr == 3) {
        _DAT_ram_60009d08 = 10;
      }
    }
  }
  if (unaff_a12 < 0x10) {
    _DAT_ram_6000988c = 0;
  }
  else {
    _DAT_ram_6000988c = _DAT_ram_60009d08 << 0x20 - (' ' - (cVar1 * '\x02' - 0x20U & 0x1f));
  }
  memw();
  if ((unaff_a12 < 1) || (0xf < unaff_a12)) {
    _DAT_ram_60009888 = _DAT_ram_60009d08 >> 2;
    if (unaff_a12 != 0) {
      _DAT_ram_60009888 = 0;
    }
  }
  else {
    _DAT_ram_60009888 = _DAT_ram_60009d08 << 0x20 - (' ' - (cVar1 * '\x02' - 2U & 0x1f));
  }
  memw();
  if ((unaff_a12 < -0xf) || (-1 < unaff_a12)) {
    _DAT_ram_60009d0c = 0;
  }
  else {
    _DAT_ram_60009d0c = _DAT_ram_60009d08 << 0x20 - (' ' - (cVar1 * '\x02' + 0x1eU & 0x1f));
  }
  memw();
  if ((unaff_a12 < -0x1e) || (-0x10 < unaff_a12)) {
    _DAT_ram_60009d08 = 0;
  }
  else {
    _DAT_ram_60009d08 = _DAT_ram_60009d08 << 0x20 - (' ' - (cVar1 * '\x02' + 0x3cU & 0x1f));
  }
  memw();
  if (unaff_retaddr == 1) {
    _DAT_ram_600099a8 = 1;
  }
  else {
    if (unaff_retaddr == 2) {
      _DAT_ram_600099a8 = 4;
    }
    else {
      _DAT_ram_600099a8 = 0;
      if (unaff_retaddr == 3) {
        _DAT_ram_600099a8 = 5;
      }
    }
  }
  if (unaff_a12 < 0x10) {
    _DAT_ram_600099bc = 0;
  }
  else {
    _DAT_ram_600099bc = _DAT_ram_600099a8 << 0x20 - (' ' - (cVar1 * '\x02' - 0x20U & 0x1f));
  }
  memw();
  if ((unaff_a12 < 1) || (0xf < unaff_a12)) {
    _DAT_ram_600099b8 = _DAT_ram_600099a8 >> 2;
    if (unaff_a12 != 0) {
      _DAT_ram_600099b8 = 0;
    }
  }
  else {
    _DAT_ram_600099b8 = _DAT_ram_600099a8 << 0x20 - (' ' - (cVar1 * '\x02' - 2U & 0x1f));
  }
  memw();
  if ((unaff_a12 < -0xf) || (-1 < unaff_a12)) {
    _DAT_ram_600099ac = 0;
  }
  else {
    _DAT_ram_600099ac = _DAT_ram_600099a8 << 0x20 - (' ' - (cVar1 * '\x02' + 0x1eU & 0x1f));
  }
  memw();
  if ((unaff_a12 < -0x1e) || (-0x10 < unaff_a12)) {
    _DAT_ram_600099a8 = 0;
  }
  else {
    _DAT_ram_600099a8 = _DAT_ram_600099a8 << 0x20 - (' ' - (cVar1 * '\x02' + 0x3cU & 0x1f));
  }
  memw();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void chip_v6_rxmax_ext_dig(void)

{
  int in_a2;
  uint unaff_a5;
  undefined4 unaff_a6;
  
  if (in_a2 == 0) {
    memw();
    _DAT_ram_60000590 = _DAT_ram_60000590 | 0x10;
    memw();
  }
  else {
    unaff_a6 = 0xffffffef;
    memw();
    unaff_a5 = _DAT_ram_60000590 & 0xffffffef;
    memw();
    _DAT_ram_60000590 = unaff_a5;
  }
  chip_v6_set_chan_rx_cmp
            ((int)chip6_sleep_params[48],(int)(char)in_a2,&rxiq_compute_num,unaff_a5,unaff_a6);
  return;
}



void chip_v6_rxmax_ext(void)

{
  chip_v6_rxmax_ext_ana();
  chip_v6_rxmax_ext_dig();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dig_11b_filt_sel(void)

{
  int in_a2;
  
  memw();
  _DAT_ram_60009c04 = _DAT_ram_60009c04 & 0xffffcfef;
  memw();
  if (in_a2 == 1) {
    memw();
    memw();
    _DAT_ram_60009c04 = _DAT_ram_60009c04 | 0x10;
    return;
  }
  if (in_a2 == 2) {
    memw();
    memw();
    _DAT_ram_60009c04 = _DAT_ram_60009c04 | 0x1000;
    return;
  }
  if (in_a2 == 3) {
    memw();
    _DAT_ram_60009c04 = _DAT_ram_60009c04 | 0x2000;
    memw();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_bb_rx_cfg(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  memw();
  _DAT_ram_60009b60 = _DAT_ram_60009b60 | 0x1400;
  memw();
  memw();
  _DAT_ram_60009b0c = _DAT_ram_60009b0c | 0x10000000;
  memw();
  memw();
  _DAT_ram_60009d40 = _DAT_ram_60009d40 & 0x807fffff | 0x10000000;
  memw();
  memw();
  _DAT_ram_60009b6c = 0x914bc81;
  memw();
  _DAT_ram_60009b68 = 0x5ac64198;
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_600098ec = _DAT_ram_600098ec & 0xfc00ffff | 0x1900000;
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009b48 = _DAT_ram_60009b48 & 0xffffff80 | DAT_ram_0040d4f0 - 0xf;
  memw();
  memw();
  _DAT_ram_60009b28 = _DAT_ram_60009b28 & 0xffffff | 0x18000000;
  memw();
  memw();
  _DAT_ram_60009a34 = _DAT_ram_60009a34 & 0x80ffffff;
  memw();
  if ((chip6_phy_init_ctrl[113] & 1) == 0) {
    memw();
    _DAT_ram_60009b44 = _DAT_ram_60009b44 & 0xffffff80 | 0x26;
    memw();
  }
  else {
    memw();
    _DAT_ram_60009b44 = _DAT_ram_60009b44 & 0xffffff80 | 0x2e;
    memw();
  }
  memw();
  memw();
  memw();
  _DAT_ram_600098a0 = _DAT_ram_600098a0 | 0xc0000000;
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009b64 = _DAT_ram_60009b64 & 0xfff00000 | 0x22fa6;
  memw();
  memw();
  _DAT_ram_60009b5c = _DAT_ram_60009b5c & 0xffc00000 | 0x385854;
  memw();
  memw();
  _DAT_ram_60009b50 = _DAT_ram_60009b50 & 0x700fff00 | 0xb2000e6;
  memw();
  memw();
  memw();
  _DAT_ram_60009d18 = 0x80;
  memw();
  _DAT_ram_60009d10 = _DAT_ram_60009d10 | 4;
  memw();
  memw();
  _DAT_ram_60009d70 = _DAT_ram_60009d70 & 0xdffff000 | 0x20000c51;
  memw();
  memw();
  _DAT_ram_60009d24 = _DAT_ram_60009d24 & 0xff80ffff | 0x130000;
  memw();
  memw();
  _DAT_ram_60009b58 = _DAT_ram_60009b58 & 0xfffff03f | 0xd80;
  memw();
  memw();
  _DAT_ram_60009d4c = _DAT_ram_60009d4c & 0xfc000000 | 0x3fe0124;
  memw();
  memw();
  uVar4 = _DAT_ram_60009d20 & 0xfffffff | 0xb0000000;
  memw();
  memw();
  uVar1 = _DAT_ram_60009988 & 0xfbffffff | 0x4000000;
  memw();
  memw();
  _DAT_ram_3ff20c70 = _DAT_ram_3ff20c70 & 0xff0bffff | 0x240000;
  memw();
  memw();
  _DAT_ram_60009d44 = _DAT_ram_60009d44 & 0xffbfffff;
  memw();
  _DAT_ram_60009988 = uVar1;
  _DAT_ram_60009d20 = uVar4;
  chip_v6_rxmax_ext_dig(rxmax_ext_level,uVar1,0x4000000,uVar4,0xb0000000,0xfffffff);
  (**(code **)(g_phyFuns + 0xc))(0,uVar1,0x4000000,uVar4,0xb0000000,0xfffffff);
  memw();
  _DAT_ram_60009838 = _DAT_ram_60009838 & 0xffffffcf | 0x20;
  memw();
  memw();
  memw();
  _DAT_ram_60009c48 = 0x800083;
  memw();
  _DAT_ram_60009c4c = _DAT_ram_60009c4c | 6;
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009d1c = 0xfff;
  memw();
  _DAT_ram_60009a28 = _DAT_ram_60009a28 & 0xfffff7ff;
  memw();
  memw();
  uVar4 = _DAT_ram_3ff00024 & 0xfffffff9 | 2;
  memw();
  memw();
  _DAT_ram_600005c0 = _DAT_ram_600005c0 & 0xfffffffe;
  memw();
  _DAT_ram_3ff00024 = uVar4;
  (**(code **)(g_phyFuns + 0xa0))(_DAT_ram_600005c0,0x60000200,0xfffffffe,uVar4,0x3feffe00,2);
  uVar2 = 1;
  uVar3 = 0xc;
  (**(code **)(g_phyFuns + 0xac))(1,1,0xc,uVar4,0x3feffe00,2);
  uVar1 = (uint)rx_table_renew_en;
  if (uVar1 != 0) {
    (**(code **)(g_phyFuns + 0xac))(2,1,0x184,uVar4,0x3feffe00,2);
    uVar1 = 3;
    uVar2 = 2;
    uVar3 = 6;
    (**(code **)(g_phyFuns + 0xac))(3,2,6,uVar4,0x3feffe00,2);
  }
  (**(code **)(g_phyFuns + 0xbc))(uVar1,uVar2,uVar3,uVar4,0x3feffe00,2);
  if (rx_table_renew_en != 0) {
    gen_rx_gain_table(phy_rx_gain_dc_table,0x7f,rx_gain_swp,0x40d603,0x10,0);
  }
  uVar2 = 0x40d582;
  set_rx_gain_testchip_50
            (1,chip6_sleep_params,chip6_sleep_params._136_4_,phy_rx_gain_dc_table + 0x100,0x40d582,
             DAT_ram_0040d4f0 + 1,phy_rx_gain_dc_table,0,0,0);
  pcVar6 = *(code **)(g_phyFuns + 0x98);
  if ((chip6_phy_init_ctrl[113] & 1) == 0) {
    uVar3 = 0x12;
    uVar5 = 0xe8;
    (*pcVar6)(0x77,0,0x12,0xe8,0x40d582,pcVar6);
  }
  else {
    (*pcVar6)(0x77,0,0x12,0xd8,0x40d582,pcVar6);
    uVar3 = 0x18;
    uVar5 = 1;
    uVar2 = 1;
    pcVar6 = (code *)0x1;
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,1,1,1);
  }
  memw();
  _DAT_ram_60009860 = _DAT_ram_60009860 | 1;
  memw();
  dig_11b_filt_sel(2,1,uVar3,uVar5,uVar2,pcVar6);
  return;
}



void uart_wait_idle(void)

{
  uart_tx_flush();
  ets_delay_us(100);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_pbus_soc_cfg(void)

{
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60000594 = _DAT_ram_60000594 & 0x1fffffff | 0xc0000000;
  _DAT_ram_60000598 = _DAT_ram_60000598 & 0xf0003f80 | 0x19f4047;
  _DAT_ram_6000059c = _DAT_ram_6000059c & 0xf01fffff | 0x1800000;
  _DAT_ram_600005a0 = _DAT_ram_600005a0 & 0xff00ffff | 0xab0000;
  _DAT_ram_600005c8 = _DAT_ram_600005c8 & 0xffff00ff | 0x100;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_gpio_cfg(void)

{
  if (chip6_phy_init_ctrl[57] == '\x02') {
    memw();
    _DAT_ram_600007a0 = _DAT_ram_600007a0 & 0xffffff94 | 0x69;
    memw();
  }
  if ((((chip6_phy_init_ctrl[53] == '\x01') || (chip6_phy_init_ctrl[53] == '\x03')) ||
      (chip6_phy_init_ctrl[53] == '\x04')) || (chip6_phy_init_ctrl[53] == '\x05')) {
    if ((chip6_phy_init_ctrl[53] == '\x01') || (chip6_phy_init_ctrl[53] == '\x04')) {
      if ((chip6_phy_init_ctrl[54] == 3) || (chip6_phy_init_ctrl[54] == 5)) {
        memw();
        _DAT_ram_60000300 = 0x3de0000;
      }
      else {
        if (chip6_phy_init_ctrl[54] < 2) {
          memw();
          _DAT_ram_60000300 = 0;
        }
        else {
          memw();
          _DAT_ram_60000300 = 0x10e0000;
        }
      }
    }
    else {
      if ((chip6_phy_init_ctrl[53] == '\x03') || (chip6_phy_init_ctrl[53] == '\x05')) {
        if ((chip6_phy_init_ctrl[54] == 3) || (chip6_phy_init_ctrl[54] == 5)) {
          memw();
          _DAT_ram_60000300 = 0x3ed0000;
        }
        else {
          if (chip6_phy_init_ctrl[54] < 2) {
            memw();
            _DAT_ram_60000300 = 0;
          }
          else {
            memw();
            _DAT_ram_60000300 = 0x10d0000;
          }
        }
      }
    }
    memw();
    _DAT_ram_60000808 = _DAT_ram_60000808 & 0xfffffe0f | 0x30;
    memw();
    memw();
    _DAT_ram_6000080c = _DAT_ram_6000080c & 0xfffffe0f | 0x30;
    memw();
    if (chip6_phy_init_ctrl[54] < 2) {
      memw();
      _DAT_ram_60000814 = _DAT_ram_60000814 & 0xfffffecf | 0x30;
      memw();
      memw();
      _DAT_ram_60000834 = _DAT_ram_60000834 & 0xfffffecf;
      memw();
    }
    else {
      memw();
      _DAT_ram_60000814 = _DAT_ram_60000814 & 0xfffffecf | 0x20;
      memw();
      memw();
      _DAT_ram_60000834 = _DAT_ram_60000834 & 0xfffffecf | 0x20;
      memw();
    }
    if ((chip6_phy_init_ctrl[53] == '\x01') || (chip6_phy_init_ctrl[53] == '\x03')) {
      if (chip6_phy_init_ctrl[54] == 1) {
        gpio_output_set(1,0,1,0,0xfffffecf,0x20);
        gpio_output_set(0,8,8,0,0xfffffecf,0x20);
      }
      else {
        if (chip6_phy_init_ctrl[54] == 0) {
          gpio_output_set(0,1,1,0,0xfffffecf,0x20);
          gpio_output_set(8,0,8,0,0xfffffecf,0x20);
        }
      }
    }
    else {
      if ((chip6_phy_init_ctrl[53] == '\x04') || (chip6_phy_init_ctrl[53] == '\x05')) {
        if (chip6_phy_init_ctrl[54] == 1) {
          gpio_output_set(0,1,1,0,0xfffffecf,0x20);
          gpio_output_set(8,0,8,0,0xfffffecf,0x20);
        }
        else {
          if (chip6_phy_init_ctrl[54] == 0) {
            gpio_output_set(1,0,1,0,0xfffffecf,0x20);
            gpio_output_set(0,8,8,0,0xfffffecf,0x20);
          }
        }
      }
    }
  }
  else {
    if (chip6_phy_init_ctrl[55] == '\x03') {
      memw();
      _DAT_ram_60000834 = _DAT_ram_60000834 & 0xfffffecf | 0x20;
      memw();
    }
    else {
      if (chip6_phy_init_ctrl[55] == '\x02') {
        memw();
        _DAT_ram_60000814 = _DAT_ram_60000814 & 0xfffffecf | 0x20;
        memw();
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void tx_cont_en(void)

{
  undefined4 uVar1;
  
  if (DAT_ram_0040d678 == '\0') {
    uVar1 = 0x66;
    (**(code **)(g_phyFuns + 0x90))(0x66,3,1);
    memw();
    tx_data2 = _DAT_ram_60000594;
    memw();
    tx_data3 = _DAT_ram_60000598;
    memw();
    tx_data4 = _DAT_ram_6000059c;
    tx_data1 = uVar1;
    (**(code **)(g_phyFuns + 0x9c))(0x66,3,1,5,0,0x3c);
    memw();
    _DAT_ram_6000059c = _DAT_ram_6000059c | 0xfe03f80;
    memw();
    memw();
    _DAT_ram_60000598 = _DAT_ram_60000598 | 0xfffffff;
    memw();
    memw();
    _DAT_ram_60000594 = _DAT_ram_60000594 & 0xffcfffff;
    memw();
  }
  DAT_ram_0040d678 = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void tx_cont_dis(void)

{
  if (DAT_ram_0040d678 == '\x01') {
    (**(code **)(g_phyFuns + 0x98))(0x66,3,1,(undefined)tx_data1);
    memw();
    _DAT_ram_60000594 = tx_data2;
    memw();
    _DAT_ram_60000598 = tx_data3;
    memw();
    _DAT_ram_6000059c = tx_data4;
  }
  DAT_ram_0040d678 = 0;
  return;
}



void tx_cont_cfg(void)

{
  int in_a2;
  
  if (in_a2 == 1) {
    tx_cont_en();
  }
  else {
    tx_cont_dis();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void chip_v6_initialize_bb(void)

{
  undefined2 uVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  Elf32_Ehdr *pEVar8;
  
  memw();
  memw();
  memw();
  uVar3 = 0x61;
  (**(code **)(g_phyFuns + 0x98))(0x61,1,7,0x51);
  phy_pbus_soc_cfg(uVar3,1,7,0x51);
  uVar3 = 0x77;
  uVar6 = 0;
  pEVar8 = (Elf32_Ehdr *)0x1;
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,0,0,1);
  rc_cal(uVar3,0,0x10,0,0,1);
  puVar4 = chip6_sleep_params;
  init_cal_dcoffset(chip6_sleep_params,0x40d570,0x10,0,0,1);
  uVar7 = chip6_sleep_params._0_4_;
  if ((chip6_sleep_params._0_4_ >> 0x16 & 1) == 0) {
    puVar4 = (undefined1 *)0x0;
    txpwr_offset(0,0x40d570,chip6_sleep_params._0_4_,0,0,1);
    pEVar8 = &Elf32_Ehdr_ram_00400000;
    uVar6 = chip6_sleep_params._0_4_ | (uint)&Elf32_Ehdr_ram_00400000;
    chip6_sleep_params._0_4_ = uVar6;
  }
  tx_cap_init(puVar4,0x40d570,uVar7,0,uVar6,pEVar8);
  if (chip6_phy_init_ctrl[94] == '\0') {
    tx_pwctrl_init(1,0x40d570,uVar7,0,uVar6,pEVar8);
  }
  else {
    tx_pwctrl_init(0,0x40d570,uVar7,0,uVar6,pEVar8);
  }
  uVar1 = tx_rf_ana_gain;
  puVar4 = chip6_sleep_params;
  uVar7 = 0;
  if (-1 < (char)(chip6_sleep_params[79] + '\x1f')) {
    uVar7 = (int)(char)(chip6_sleep_params[79] + '\x1f');
  }
  uVar7 = uVar7 & 0xff;
  ram_rfcal_txiq(chip6_sleep_params,0x40d580,tx_rf_ana_gain,0x40,uVar7,0,0,1);
  if (rx_table_renew_en != '\0') {
    puVar4 = (undefined1 *)0x6;
    chip_v6_set_chan(6,0x40d580,uVar1,0x40,uVar7,0);
  }
  phy_bb_rx_cfg(puVar4,0x40d580,uVar1,0x40,uVar7,0);
  memw();
  _DAT_ram_3ff20c70 = _DAT_ram_3ff20c70 | 2;
  memw();
  iVar5 = 1;
  noise_init(1,7,5,0x7800,1,0,chip6_sleep_params);
  tx_pwctrl_bg_init(iVar5,7,5,0x7800,1,0);
  uVar7 = chip6_sleep_params._0_4_;
  if ((chip6_sleep_params._0_4_ >> 0x1b & 1) != 0) {
    iVar5 = (int)chip6_sleep_params[48];
    chip_v6_set_chan_wakeup_exit(iVar5,chip6_sleep_params._0_4_,5,0x7800,1,0);
  }
  set_dpd_bypass(iVar5,uVar7,5,0x7800,1,0);
  uVar2 = chip6_phy_init_ctrl[96];
  low_power_set(chip6_phy_init_ctrl[94],chip6_phy_init_ctrl[95],chip6_phy_init_ctrl[96],0x7800,1,0);
  if (chip6_phy_init_ctrl[79] == '\x01') {
    tx_cont_cfg(1,1,uVar2,0x7800,1,0);
  }
  else {
    tx_cont_cfg(0,chip6_phy_init_ctrl[79],uVar2,0x7800,1,0);
  }
  return;
}



void periodic_cal(void)

{
  undefined1 *puVar1;
  undefined4 local_10;
  
  do_pwctrl_flag = 0;
  local_10 = 0;
  init_cal_dcoffset(&local_10,0x40d570,0);
  puVar1 = chip6_sleep_params;
  rtc_mem_backup(chip6_sleep_params,0x40d5bf,0);
  chip6_sleep_params._144_4_ = puVar1;
  rtc_mem_backup(0x40d5c0,0x40d5c9,puVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void bbpll_cal(void)

{
  uint uVar1;
  int in_a2;
  uint uVar2;
  
  uVar1 = _DAT_ram_3ff00014;
  memw();
  memw();
  _DAT_ram_3ff00014 = _DAT_ram_3ff00014 & 0xfffffffe;
  memw();
  ets_update_cpu_frequency(0x50,0xfffffffe,uVar1);
  ets_delay_us(1,0xfffffffe,uVar1);
  memw();
  uVar2 = _DAT_ram_60000d40 & 0xfffffff3 | 8;
  memw();
  _DAT_ram_60000d40 = uVar2;
  if (in_a2 == 0) {
    ets_delay_us(100,0xfffffffe,uVar1,0,uVar2,0x60000a00);
  }
  else {
    ets_delay_us(1000,0xfffffffe,uVar1,in_a2,uVar2,0x60000a00);
  }
  memw();
  _DAT_ram_60000d40 = _DAT_ram_60000d40 & 0xfffffff3 | 4;
  memw();
  ets_delay_us(1,0xfffffffe,uVar1,in_a2,uVar2,0x60000a00);
  memw();
  _DAT_ram_3ff00014 = uVar1;
  if ((uVar1 & 1) != 0) {
    ets_update_cpu_frequency(0xa0,uVar1,0x3feffe00,in_a2,uVar2,0x60000a00);
  }
  return;
}



void periodic_cal_top(void)

{
  char cVar1;
  undefined4 in_a2;
  
  cVar1 = periodic_cal_flag;
  if (periodic_cal_flag == '\0') {
    periodic_cal_flag = 1;
  }
  else {
    periodic_cal_flag = 0;
    if ((chip6_phy_init_ctrl[100] >> 1 & 1) == 0) {
      pm_set_sleep_mode(4,cVar1);
      if (bbpll_cal_flag == '\0') {
        bbpll_cal(1,cVar1);
      }
      bbpll_cal_flag = '\0';
      periodic_cal(in_a2,cVar1);
      pm_wakeup_init(4,0);
    }
  }
  return;
}



void register_chipv6_phy_init_param(void)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined *in_a2;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  
  chip6_phy_init_ctrl[0] = *in_a2;
  puVar5 = chip6_phy_init_ctrl;
  chip6_phy_init_ctrl[2] = (byte)in_a2[1] >> 1 & 1;
  iVar7 = 0;
  do {
    puVar5[3] = in_a2[iVar7 + 2];
    puVar5 = puVar5 + 1;
    iVar7 = iVar7 + 1;
  } while (puVar5 != chip6_phy_init_ctrl + 0xf);
  iVar7 = 0;
  puVar5 = chip6_phy_init_ctrl;
  do {
    puVar4 = in_a2 + iVar7;
    puVar6 = puVar5 + 1;
    iVar7 = iVar7 + 1;
    cVar1 = puVar4[0x11];
    puVar5[0x12] = cVar1;
    cVar2 = puVar4[0x14];
    puVar5[0x18] = 0xe2;
    puVar5[0x15] = cVar1 + cVar2;
    puVar5 = puVar6;
  } while (puVar6 != chip6_phy_init_ctrl + 3);
  puVar5 = chip6_phy_init_ctrl;
  iVar7 = 0;
  chip6_phy_init_ctrl[28] = in_a2[0x1a];
  chip6_phy_init_ctrl[29] = in_a2[0x1b];
  chip6_phy_init_ctrl._30_2_ = (ushort)(byte)in_a2[0x1d];
  puVar4 = in_a2;
  do {
    iVar7 = iVar7 + 1;
    cVar1 = puVar4[0x1e];
    puVar5[0x20] = cVar1;
    if (('\x05' < cVar1) || (cVar1 < '\0')) {
      puVar5[0x20] = 0;
    }
    puVar4 = in_a2 + iVar7;
    puVar5 = puVar5 + 1;
  } while (puVar5 != chip6_phy_init_ctrl + 4);
  puVar5 = chip6_phy_init_ctrl;
  iVar7 = 0;
  do {
    puVar5[0x24] = in_a2[iVar7 + 0x22];
    puVar5 = puVar5 + 1;
    iVar7 = iVar7 + 1;
  } while (puVar5 != chip6_phy_init_ctrl + 6);
  puVar5 = chip6_phy_init_ctrl;
  iVar7 = 0;
  do {
    puVar5[0x2a] = in_a2[iVar7 + 0x28];
    puVar5 = puVar5 + 1;
    iVar7 = iVar7 + 1;
  } while (puVar5 != chip6_phy_init_ctrl + 8);
  chip6_phy_init_ctrl[113] = 7;
  chip6_phy_init_ctrl[72] = 5;
  if ((in_a2[0x4b] & 0xf) < 6) {
    chip6_phy_init_ctrl[72] = in_a2[0x4b] & 0xf;
  }
  chip6_phy_init_ctrl[71] = 5;
  if ((in_a2[0x4c] & 0xf) < 6) {
    chip6_phy_init_ctrl[71] = in_a2[0x4c] & 0xf;
  }
  bVar3 = in_a2[0x70];
  cVar1 = in_a2[0x71];
  if (bVar3 < 5) {
    chip6_phy_init_ctrl[113] = 0;
  }
  else {
    if ((-1 < cVar1) || ((bVar3 != 7 && (bVar3 != 9)))) {
      chip6_phy_init_ctrl[113] = 0;
    }
  }
  chip6_phy_init_ctrl[114] = -10;
  if (-0xb < cVar1) {
    chip6_phy_init_ctrl[114] = cVar1;
  }
  chip6_phy_init_ctrl[1] = in_a2[0x30];
  chip6_phy_init_ctrl[51] = in_a2[0x31];
  chip6_phy_init_ctrl[52] = in_a2[0x32];
  chip6_phy_init_ctrl[53] = in_a2[0x33];
  chip6_phy_init_ctrl[54] = in_a2[0x34];
  chip6_phy_init_ctrl[55] = in_a2[0x35];
  chip6_phy_init_ctrl[56] = in_a2[0x36];
  chip6_phy_init_ctrl[57] = in_a2[0x37];
  chip6_phy_init_ctrl[58] = in_a2[0x38];
  chip6_phy_init_ctrl[59] = in_a2[0x40];
  chip6_phy_init_ctrl[60] = in_a2[0x41];
  chip6_phy_init_ctrl._62_2_ = (ushort)(byte)in_a2[0x43];
  chip6_phy_init_ctrl[64] = in_a2[0x44];
  chip6_phy_init_ctrl[65] = in_a2[0x45];
  chip6_phy_init_ctrl._66_2_ = (ushort)(byte)in_a2[0x46];
  chip6_phy_init_ctrl._68_2_ = (ushort)(byte)in_a2[0x48];
  chip6_phy_init_ctrl[70] = in_a2[0x4a];
  chip6_phy_init_ctrl[73] = (byte)in_a2[0x4c] >> 4 & 7;
  chip6_phy_init_ctrl[74] = (byte)in_a2[0x4b] >> 4 & 7;
  chip6_phy_init_ctrl[75] = (byte)in_a2[0x4c] >> 7;
  chip6_phy_init_ctrl[76] = (byte)in_a2[0x4b] >> 7;
  chip6_phy_init_ctrl[77] = (byte)in_a2[0x4d] >> 4;
  chip6_phy_init_ctrl[78] = in_a2[0x4d] & 0xf;
  chip6_phy_init_ctrl[79] = in_a2[0x4e];
  chip6_phy_init_ctrl[80] = in_a2[0x4f];
  chip6_phy_init_ctrl[81] = in_a2[0x50];
  chip6_phy_init_ctrl[82] = in_a2[0x51];
  chip6_phy_init_ctrl[83] = in_a2[0x52];
  chip6_phy_init_ctrl[84] = in_a2[0x53];
  chip6_phy_init_ctrl[85] = in_a2[0x54];
  chip6_phy_init_ctrl[86] = in_a2[0x55];
  chip6_phy_init_ctrl[87] = in_a2[0x56];
  chip6_phy_init_ctrl[88] = in_a2[0x57];
  chip6_phy_init_ctrl[89] = in_a2[0x58];
  chip6_phy_init_ctrl[90] = in_a2[0x59];
  chip6_phy_init_ctrl[91] = in_a2[0x5a];
  chip6_phy_init_ctrl[92] = in_a2[0x5b];
  chip6_phy_init_ctrl[93] = 1;
  chip6_phy_init_ctrl[94] = in_a2[0x5d];
  chip6_phy_init_ctrl[95] = in_a2[0x5e];
  chip6_phy_init_ctrl[96] = in_a2[0x5f];
  chip6_phy_init_ctrl[97] = in_a2[0x60];
  chip6_phy_init_ctrl[98] = in_a2[0x61];
  chip6_phy_init_ctrl[99] = in_a2[0x62];
  chip6_phy_init_ctrl[100] = in_a2[99];
  chip6_phy_init_ctrl[101] = in_a2[100];
  chip6_phy_init_ctrl[102] = in_a2[0x65];
  chip6_phy_init_ctrl[103] = in_a2[0x66];
  chip6_phy_init_ctrl[104] = in_a2[0x67];
  chip6_phy_init_ctrl[105] = in_a2[0x68];
  chip6_phy_init_ctrl[106] = in_a2[0x69];
  chip6_phy_init_ctrl[107] = in_a2[0x6a];
  chip6_phy_init_ctrl[108] = in_a2[0x6b];
  chip6_phy_init_ctrl[109] = in_a2[0x6c];
  chip6_phy_init_ctrl[110] = in_a2[0x6d];
  chip6_phy_init_ctrl[111] = in_a2[0x6e];
  chip6_phy_init_ctrl[112] = in_a2[0x6f];
  chip6_phy_init_ctrl[115] = in_a2[0x72];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ant_switch_init(void)

{
  if ((chip6_phy_init_ctrl[53] == '\x01') || (chip6_phy_init_ctrl[53] == '\x03')) {
    memw();
    _DAT_ram_60009d60 = 0x1010101;
    memw();
    _DAT_ram_60009d64 = 0x4010101;
  }
  else {
    if ((chip6_phy_init_ctrl[53] == '\x04') || (chip6_phy_init_ctrl[53] == '\x05')) {
      memw();
      _DAT_ram_60009d60 = 0x4040404;
      memw();
      _DAT_ram_60009d64 = 0x1040404;
    }
    else {
      if (chip6_phy_init_ctrl[55] == '\x02') {
        memw();
        _DAT_ram_60009d60 = 0x4010104;
        memw();
        _DAT_ram_60009d64 = 0x4040404;
      }
      else {
        if (chip6_phy_init_ctrl[55] == '\x03') {
          memw();
          _DAT_ram_60009d60 = 0x1040401;
          memw();
          _DAT_ram_60009d64 = 0x1010101;
        }
      }
    }
  }
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60009a28 = 2;
  _DAT_ram_60009b00 = _DAT_ram_60009b00 | 0x800000;
  _DAT_ram_60009b08 = _DAT_ram_60009b08 & 0xffffc3ff | 0x800;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void reduce_current_init(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  register_get_phy_addr(&PTR_chip_v6_rf_init_ram_0040d4f4);
  memw();
  _DAT_ram_60000710 = 0xd6000000;
  (**(code **)(g_phyFuns + 0x9c))(0x62,1,3,7,4,0);
  (**(code **)(g_phyFuns + 0x9c))(0x65,4,0,6,6,0);
  uVar2 = 7;
  uVar3 = 0;
  (**(code **)(g_phyFuns + 0x9c))(0x65,4,0,7,7,0);
  if (chip6_phy_init_ctrl[108] == -1) {
    memw();
    _DAT_ram_600005e8 = _DAT_ram_600005e8 & 0xf7ffffff;
    memw();
    memw();
    _DAT_ram_60000594 = _DAT_ram_60000594 | 1;
    memw();
    (**(code **)(g_phyFuns + 0xac))(6,1,2,0xf7ffffff,7,0);
    memw();
    uVar3 = 0x60000200;
    uVar2 = _DAT_ram_60000594 & 0xfffffffe;
    memw();
    _DAT_ram_60000594 = uVar2;
  }
  memw();
  _DAT_ram_3ff00018 = _DAT_ram_3ff00018 & 0xfc70ffff;
  memw();
  uVar1 = 0x6a;
  (**(code **)(g_phyFuns + 0x98))(0x6a,2,0,0x25,uVar2,uVar3);
  (**(code **)(g_phyFuns + 0x4c))(uVar1,2,0,0x25,uVar2,uVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rtc_mem_check(void)

{
  int *piVar1;
  int in_a2;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0x60000e00;
  uVar2 = 0;
  do {
    memw();
    piVar1 = (int *)(iVar3 + 0x200);
    iVar3 = iVar3 + 4;
    uVar2 = *piVar1 + uVar2;
  } while (iVar3 != 0x60000e68);
  if (in_a2 != 0) {
    memw();
    return;
  }
  memw();
  _DAT_ram_60001068 = uVar2 ^ 0xffffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_afterwake_set_rfoption(void)

{
  uint in_a2;
  
  memw();
  memw();
  _DAT_ram_6000106c = _DAT_ram_6000106c & 0xffff | in_a2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void deep_sleep_set_option(void)

{
  uint in_a2;
  
  memw();
  _DAT_ram_6000106c = _DAT_ram_6000106c & 0xffff | in_a2;
  memw();
  rtc_mem_check(0,0x60000e00,in_a2);
  return;
}



void write_data_to_rtc(void)

{
  int in_a2;
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  do {
    pbVar2 = (byte *)(uVar1 * 4 + in_a2);
    memw();
    *(uint *)(&DAT_ram_60001000 + uVar1 * 4) =
         (uint)*pbVar2 + (uint)pbVar2[2] + (uint)pbVar2[3] * 0x1000000;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 != 0x20);
  return;
}



void get_data_from_rtc(void)

{
  int in_a2;
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  do {
    memw();
    puVar3 = (undefined *)(uVar1 * 4 + in_a2);
    uVar2 = *(undefined4 *)(&DAT_ram_60001000 + uVar1 * 4);
    uVar1 = uVar1 + 1 & 0xff;
    *puVar3 = (char)uVar2;
    puVar3[1] = (char)((uint)uVar2 >> 8);
    puVar3[2] = (char)((uint)uVar2 >> 0x10);
    puVar3[3] = (char)((uint)uVar2 >> 0x18);
  } while (uVar1 != 0x20);
  return;
}



void phy_get_romfunc_addr(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void register_chipv6_phy(void)

{
  bool bVar1;
  byte bVar2;
  int in_a2;
  int iVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  uint unaff_a3;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined4 unaff_a5;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  byte local_40;
  undefined1 *puStack60;
  undefined4 *puStack56;
  undefined1 *puStack12;
  undefined4 *puStack8;
  
  fix_cache_bug();
  iVar3 = 0x40d598;
  if (DAT_ram_0040d6ba == 0) {
    iVar3 = in_a2;
    register_chipv6_phy_init_param();
    puVar8 = &DAT_ram_0040d4f0;
    unaff_a3 = (uint)chip6_phy_init_ctrl[36];
    phy_in_most_power = chip6_phy_init_ctrl[36];
  }
  else {
    unaff_a5 = 0;
    puVar8 = (undefined1 *)(uint)chip6_sleep_params[48];
    local_40 = chip6_sleep_params[48];
  }
  set_crystal_uart(iVar3,unaff_a3,puVar8,unaff_a5);
  ant_switch_init(iVar3,unaff_a3,puVar8,unaff_a5);
  bVar2 = DAT_ram_0040d6ba;
  if (DAT_ram_0040d6ba == 0) {
    phy_gpio_cfg(iVar3,unaff_a3,puVar8,unaff_a5,0);
  }
  tx_cont_dis(iVar3,unaff_a3,puVar8,unaff_a5,bVar2);
  uVar6 = (uint)DAT_ram_0040d6ba;
  if ((uVar6 == 0) && ((chip6_phy_init_ctrl[113] & 0xc) != 0)) {
    phy_freq_offset = 0;
  }
  memw();
  uVar10 = (uint)chip6_phy_init_ctrl[115];
  if (uVar10 == 2) {
    uVar10 = 1;
    chip6_phy_init_ctrl[115] = 1;
  }
  uVar12 = _DAT_ram_6000073c & 0xff;
  if ((_DAT_ram_6000073c & 0xff) == 0) {
    uVar12 = uVar10;
  }
  iVar3 = 1;
  if ((uVar12 != 0) && (uVar12 != 1)) {
    iVar3 = 0;
  }
  iVar13 = 0;
  bVar1 = uVar12 == 2;
  memw();
  if ((((_DAT_ram_60000714 & 7) == 2) && (uVar6 == 0)) && (memw(), _DAT_ram_60001100 == 5)) {
    iVar13 = 1;
  }
  puStack12 = (undefined1 *)0x0;
  iVar14 = iVar13;
  if (uVar6 == 0) {
    iVar14 = 1;
    puVar8 = (undefined1 *)(uint)(iVar13 == 0);
    puStack12 = puVar8;
  }
  iVar11 = 0;
  if (((iVar3 != 0) || (bVar1)) && (puStack12 != (undefined1 *)0x0)) {
    iVar11 = 1;
  }
  if (iVar11 != 0) {
    write_data_to_rtc(in_a2 + 0x80,uVar6,puVar8,iVar11,iVar14,iVar3);
    uVar6 = (uint)DAT_ram_0040d6ba;
  }
  if (uVar6 == 0) {
    memw();
    memw();
    puVar8 = (undefined1 *)(_DAT_ram_3ff00058 & 0xf000 | _DAT_ram_3ff00054 & 0xfffffff);
    memw();
    memw();
    puStack56 = (undefined4 *)(_DAT_ram_3ff00050 & 0xff000000 | _DAT_ram_3ff0005c & 0xffffff);
    uVar10 = 1;
    memw();
    puStack60 = puVar8;
    if ((puVar8 == _DAT_ram_60001060) && (memw(), puStack56 == _DAT_ram_60001064)) {
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 0;
  }
  memw();
  uVar12 = _DAT_ram_6000106c >> 0x10 & 0xff;
  if (iVar13 == 0) {
    puStack8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined1 *)(uVar12 - 2);
    bVar1 = puVar8 == (undefined1 *)0x0 || bVar1;
    puStack8 = (undefined4 *)(uint)(uVar12 == 4);
  }
  if (uVar6 == 0) {
    if (iVar13 == 0) {
      uVar15 = 0;
    }
    else {
      memw();
      uVar15 = _DAT_ram_6000106c & 0xffff;
      if ((chip6_phy_init_ctrl[109] == 0) || (uVar12 != 0)) {
        uVar15 = uVar15 + 1 & 0xffff;
      }
      else {
        if (uVar15 < chip6_phy_init_ctrl[109]) {
          bVar1 = true;
          uVar15 = uVar15 + 1 & 0xffff;
        }
        else {
          uVar15 = 0;
        }
      }
    }
    memw();
    _DAT_ram_6000106c = _DAT_ram_6000106c & 0xffff0000 | uVar15;
    memw();
  }
  iVar13 = 1;
  if (((((iVar3 == 0) && (!bVar1)) || (uVar6 != 0)) || (puStack8 != (undefined4 *)0x0)) &&
     ((uVar6 != 1 || (uVar6 = 0xff0000, (~(uint)chip6_sleep_params._0_4_ & 0xff0000) == 0)))) {
    iVar13 = 0;
  }
  iVar14 = iVar13;
  if (iVar13 != 0) {
    iVar11 = 1;
    rtc_mem_check(1,uVar6,puVar8,uVar12,iVar13,uVar10);
    iVar14 = 1;
    if ((iVar11 == 0) && (uVar12 = uVar10, uVar10 == 0)) {
      iVar14 = 0;
    }
    if (iVar14 != 0) {
      iVar13 = 0;
    }
  }
  iVar11 = 0x40d5bf;
  if (iVar13 != 0) {
    puVar8 = chip6_sleep_params;
    rtc_mem_recovery(chip6_sleep_params,0x40d5bf,0,uVar12,iVar14,0x40d5bf);
    chip6_sleep_params._144_4_ = puVar8;
    rtc_mem_recovery(0x40d5c0,0x40d5c9,puVar8,uVar12,iVar14,0x40d5bf);
    if (DAT_ram_0040d6ba == 0) {
      if (bVar1) {
        if (puStack12 != (undefined1 *)0x0) {
          uVar12 = 0xffbfffff;
          chip6_sleep_params._0_4_ = (undefined4 *)((uint)chip6_sleep_params._0_4_ & 0xffbfffff);
        }
      }
      else {
        iVar11 = iVar3;
        if (iVar3 != 0) {
          chip6_sleep_params._46_2_ = 0xfe80;
          chip6_sleep_params._0_4_ = (undefined4 *)0x200000;
        }
      }
    }
  }
  init_rf_no_cal = 0;
  if ((iVar13 != 0) && (iVar11 = 1, bVar1)) {
    init_rf_no_cal = 1;
  }
  ppuVar4 = phy_rx_gain_dc_table;
  phy_check_data_table(phy_rx_gain_dc_table,0x7d,1,uVar12,init_rf_no_cal,iVar11);
  puVar8 = _DAT_ram_3ff20c00;
  rx_table_renew_en = 1;
  puVar7 = (undefined4 *)0x7d;
  if ((ppuVar4 == (undefined **)0x0) &&
     (puVar7 = chip6_sleep_params._0_4_, ((uint)chip6_sleep_params._0_4_ >> 0x10 & 1) != 0)) {
    rx_table_renew_en = 0;
  }
  puVar16 = &rxiq_compute_num;
  memw();
  if (puStack8 == (undefined4 *)0x0) {
    ppuVar4 = &PTR_chip_v6_rf_init_ram_0040d4f4;
    register_phy_ops(&PTR_chip_v6_rf_init_ram_0040d4f4,puVar7,0,_DAT_ram_3ff20c00,&rxiq_compute_num,
                     iVar11);
  }
  else {
    reduce_current_init(ppuVar4,puVar7,puStack8,_DAT_ram_3ff20c00,&rxiq_compute_num,iVar11);
  }
  memw();
  uVar6 = (uint)rx_table_renew_en;
  test_print_time = (int)_DAT_ram_3ff20c00 - (int)puVar8;
  puVar9 = puStack8;
  if (uVar6 != 0) {
    puVar7 = (undefined4 *)0x7d;
    puVar9 = (undefined4 *)0x0;
    ppuVar4 = phy_rx_gain_dc_table;
    phy_check_data_table(phy_rx_gain_dc_table,0x7d,0,puVar8,&rxiq_compute_num,uVar6);
  }
  if (DAT_ram_0040d6ba == 1) {
    puStack8 = puVar7;
    if (((uint)chip6_sleep_params._0_4_ >> 0x1b & 1) == 0) {
      ppuVar4 = (undefined **)(int)(char)local_40;
      chip_v6_set_chan(ppuVar4,puVar7,puVar9,puVar8,&rxiq_compute_num,uVar6);
    }
  }
  else {
    if (puStack8 == (undefined4 *)0x0) {
      puVar5 = chip6_sleep_params;
      rtc_mem_backup(chip6_sleep_params,0x40d5bf,0,puVar8,&rxiq_compute_num,uVar6);
      puStack8 = (undefined4 *)(chip6_sleep_params + 0x5d);
      chip6_sleep_params._144_4_ = puVar5;
      rtc_mem_backup(0x40d5c0,0x40d5c9,puVar5,puVar8,&rxiq_compute_num,uVar6);
      memw();
      _DAT_ram_60001060 = puStack60;
      memw();
      _DAT_ram_60001064 = puStack56;
      ppuVar4 = (undefined **)0x0;
      rtc_mem_check(0,0x40d5c9,puStack56,puStack60,&rxiq_compute_num,uVar6);
      uVar6 = 0x2000000;
      puVar16 = (undefined4 *)((uint)chip6_sleep_params._0_4_ | 0x2000000);
      puVar9 = puStack56;
      puVar8 = puStack60;
      chip6_sleep_params._0_4_ = puVar16;
    }
  }
  memw();
  _DAT_ram_6000107c = _DAT_ram_6000107c & 0xffff | 0xf4220000;
  memw();
  if ((iVar13 == 0) && (puStack12 != (undefined1 *)0x0)) {
    ppuVar4 = (undefined **)(in_a2 + 0x80);
    get_data_from_rtc(ppuVar4,puStack8,puVar9,puVar8,puVar16,uVar6);
  }
  if (chip6_phy_init_ctrl[89] == '\x02') {
    puVar16 = (undefined4 *)((uint)chip6_phy_init_ctrl[87] | (uint)chip6_phy_init_ctrl[88] << 0x18);
    uVar6 = (uint)chip6_phy_init_ctrl[104] | (uint)chip6_phy_init_ctrl[105] << 0x18;
    puVar9 = (undefined4 *)(chip6_phy_init_ctrl[102] | uVar6);
    memw();
    *(undefined4 **)((uint)chip6_phy_init_ctrl[85] | (uint)puVar16) = puVar9;
  }
  puVar7 = chip6_sleep_params._0_4_;
  if (chip6_phy_init_ctrl[89] == '\x03') {
    memw();
    uVar6 = _DAT_ram_60009b64 & 0xfff00fff;
    memw();
    _DAT_ram_60009b64 = uVar6;
  }
  if (chip6_phy_init_ctrl[89] == '\x04') {
    memw();
    _DAT_ram_60009b64 = _DAT_ram_60009b64 & 0xfff00fff;
    memw();
    memw();
    _DAT_ram_60009d68 = _DAT_ram_60009d68 | 0x40000;
    memw();
  }
  if (chip6_phy_init_ctrl[91] == '\x02') {
    ppuVar4 = (undefined **)0x3ff20200;
    memw();
    _DAT_ram_3ff20400 = 0x55555555;
  }
  if (((uint)chip6_sleep_params._0_4_ >> 0x1b & 1) != 0) {
    ppuVar4 = (undefined **)0x1;
    sleep_set_rxpbus(1,chip6_sleep_params._0_4_,puVar9,0x60009a00,puVar16,uVar6);
  }
  if (DAT_ram_0040d6ba == 0) {
    phy_version_print(ppuVar4,puVar7,0,0x60009a00,puVar16,uVar6);
  }
  DAT_ram_0040d6ba = 1;
  return;
}



void app_test_code(void)

{
  return;
}



void set_dpd_bypass(void)

{
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0xf,1,1,1);
  return;
}



void set_rf_gain_stage10(void)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    memw();
    memw();
    *(uint *)(&DAT_ram_60000504 + uVar1 * 4) = *(uint *)(&DAT_ram_60000504 + uVar1 * 4) & 0xfffe1fff
    ;
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 != 0x18);
  return;
}



void get_vdd33_offset(void)

{
  uint uVar1;
  ushort in_a2;
  
  if ((in_a2 < 0x708) || (0xce4 < in_a2)) {
    in_a2 = 0xce4;
  }
  uVar1 = chip6_sleep_params._84_4_ >> 0x10;
  (**(code **)(g_phyFuns + 0x38))(in_a2,3);
  (**(code **)(g_phyFuns + 0x38))(uVar1,3);
  return;
}



void get_phy_target_power(void)

{
  uint uVar1;
  int in_a2;
  char unaff_a3;
  int iVar2;
  char *pcVar3;
  
  uVar1 = (uint)chip6_sleep_params[48];
  if (uVar1 < 7) {
    __divsi3((uVar1 - 1) * ((int)chip6_sleep_params._14_2_ - (int)chip6_sleep_params._12_2_),5,
             (int)chip6_sleep_params._12_2_);
  }
  else {
    if (uVar1 < 0xc) {
      __divsi3((uVar1 - 6) * ((int)chip6_sleep_params._16_2_ - (int)chip6_sleep_params._14_2_),5,
               (int)chip6_sleep_params._14_2_);
    }
    else {
      if (uVar1 < 0xe) {
        iVar2 = uVar1 * 5 + -0x37;
        __divsi3(iVar2 * ((int)chip6_sleep_params._18_2_ - (int)chip6_sleep_params._16_2_),0x16,0xd,
                 iVar2);
      }
    }
  }
  target_power_add_backoff();
  uVar1 = 0;
  do {
    pcVar3 = (char *)(in_a2 + uVar1);
    uVar1 = uVar1 + 1 & 0xff;
    *pcVar3 = unaff_a3 + *pcVar3;
  } while (uVar1 != 6);
  return;
}



void set_most_pwr_reg(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int unaff_a4;
  uint uVar5;
  int iVar6;
  uint unaff_a7;
  byte local_10;
  byte bStack15;
  byte bStack14;
  byte bStack13;
  byte bStack12;
  byte bStack11;
  
  iVar4 = (int)phy_in_vdd33_offset;
  get_phy_target_power(&local_10,iVar4);
  uVar5 = 5;
  uVar1 = (uint)bStack11;
  iVar2 = (int)phy_in_most_power;
  if (iVar2 < (int)uVar1) {
    phy_set_most_tpw_index = 5;
    iVar6 = 1;
    phy_set_most_tpw_disbg = 1;
    uVar5 = uVar1 - iVar2 & 0xff;
    uVar3 = 8;
    if (uVar5 < 9) {
      uVar3 = 0xe;
      unaff_a7 = uVar1 - 8;
      set_most_tpw = (byte)unaff_a7;
    }
    else {
      if (uVar5 < 0x19) {
        uVar3 = 0xd;
        set_most_tpw = bStack11 - 0x18;
      }
      else {
        if (uVar5 < 0x21) {
          set_most_tpw = bStack11 - 0x20;
          uVar3 = 9;
        }
        else {
          iVar4 = 0x2c;
          if (uVar5 < 0x2d) {
            uVar3 = 0xc;
            unaff_a4 = uVar1 - 0x2c;
            set_most_tpw = (byte)unaff_a4;
          }
          else {
            unaff_a7 = 0x38;
            if (uVar5 < 0x39) {
              set_most_tpw = bStack11 - 0x38;
            }
            else {
              if (uVar5 < 0x45) {
                uVar3 = 4;
                set_most_tpw = bStack11 + 0xbc;
              }
              else {
                uVar3 = 0;
                set_most_tpw = bStack11 + 0xa4;
              }
            }
          }
        }
      }
    }
  }
  else {
    iVar6 = 0;
    unaff_a7 = (uint)bStack12;
    phy_set_most_tpw_disbg = 0;
    if (((int)unaff_a7 <= iVar2) && (uVar5 = 4, bStack11 = bStack12, (int)(uint)bStack13 <= iVar2))
    {
      if (iVar2 < (int)(uint)bStack14) {
        uVar5 = 3;
        bStack11 = bStack13;
      }
      else {
        if (iVar2 < (int)(uint)bStack15) {
          uVar5 = 2;
          bStack11 = bStack14;
        }
        else {
          if ((iVar2 < (int)(uint)bStack15) || ((int)(uint)local_10 <= iVar2)) {
            uVar5 = 0;
            bStack11 = local_10;
          }
          else {
            uVar5 = 1;
            bStack11 = bStack15;
          }
        }
      }
    }
    phy_set_most_tpw_index = (undefined)uVar5;
    uVar3 = 0xf;
    set_most_tpw = bStack11;
  }
  if (iVar6 == 0) {
    if (chip6_phy_init_ctrl[94] == '\0') {
      set_rf_gain_stage10(0xf,iVar4,unaff_a4,uVar5,0,unaff_a7);
    }
    else {
      set_rf_gain_stage10(chip6_phy_init_ctrl[95],iVar4,unaff_a4,uVar5,0,unaff_a7);
    }
  }
  else {
    set_rf_gain_stage10(uVar3,iVar4,unaff_a4,uVar5,iVar6,unaff_a7);
  }
  return;
}



void phy_set_most_tpw(void)

{
  undefined in_a2;
  undefined auStack16 [8];
  
  phy_in_most_power = in_a2;
  tx_atten_set_interp(chip6_sleep_params[48],auStack16);
  phy_set_most_tpw_flag = 1;
  return;
}



void phy_get_most_tpw(void)

{
  return;
}



void phy_vdd33_set_tpw(void)

{
  undefined in_a2;
  
  get_vdd33_offset();
  phy_in_vdd33_offset = in_a2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void get_adc_rand(void)

{
  char cVar1;
  
  cVar1 = '\0';
  do {
    memw();
    cVar1 = cVar1 + '\x01';
  } while (cVar1 != '\b');
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_get_rand(void)

{
  memw();
  return;
}



void phy_tx_pwctrl_cali(void)

{
  do_pwctrl_flag = 0;
  chip6_sleep_params._0_4_ = chip6_sleep_params._0_4_ & 0xffefffff;
  tx_pwctrl_init(1,&rxiq_compute_num,0xffefffff,0,0x40d5f8);
  return;
}



void phy_check_data_table(void)

{
  int *in_a2;
  int unaff_a3;
  int unaff_a4;
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (unaff_a3 + -1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    piVar3 = in_a2;
    do {
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      uVar2 = iVar1 + uVar2;
    } while (piVar3 != in_a2 + unaff_a3 + -1);
  }
  if (unaff_a4 != 0) {
    return;
  }
  (in_a2 + unaff_a3)[-1] = uVar2 ^ 0xffffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_after_init_enrx(void)

{
  memw();
  _DAT_ram_600005e8 = _DAT_ram_600005e8 & 0xfe7fffff;
  memw();
  ets_delay_us(5,0xfe7fffff);
  memw();
  memw();
  memw();
  _DAT_ram_60009a34 = _DAT_ram_60009a34 & 0xfffffc00 | 0xf0;
  memw();
  ets_delay_us(5,0xfe7fffff,_DAT_ram_60009a34,0x60009a00,0xf0,0xfffffc00);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_set_rx11b_reg(void)

{
  int in_a2;
  
  if (in_a2 != 0) {
    memw();
    memw();
    _DAT_ram_60009820 = _DAT_ram_60009820 & 0xfffff030 | 0x48a;
    return;
  }
  memw();
  memw();
  _DAT_ram_60009820 = _DAT_ram_60009820 & 0xffffff3f;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_set_powerup_option(void)

{
  undefined4 in_a2;
  
  memw();
  _DAT_ram_6000073c = in_a2;
  return;
}



void phy_debug_print(void)

{
  undefined4 in_a2;
  
  read_hw_noisefloor();
  printf("dbp:%d, %x, %d, %d, %d, %d\n",in_a2,(uint)chip6_sleep_params._90_2_,
         (int)chip6_sleep_params[93],(int)phy_tx_pwr_error,(int)phy_freq_offset,
         (int)phy_meas_freq_offset);
  return;
}



void phy_get_txpwr_param(void)

{
  int in_a2;
  undefined *unaff_a3;
  undefined2 *unaff_a4;
  int unaff_a5;
  undefined *unaff_a6;
  undefined2 *unaff_a7;
  uint uVar1;
  
  uVar1 = 0;
  do {
    *(char *)(in_a2 + uVar1) = (char)*(undefined2 *)(chip6_sleep_params + uVar1 * 2 + 0xc);
    *(undefined1 *)(unaff_a5 + uVar1) = chip6_sleep_params[uVar1 * 6 + 0x3d];
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 != 4);
  *unaff_a3 = (undefined)phy_txpwr_diff_flash;
  unaff_a3[1] = phy_txpwr_diff_flash._1_1_;
  *unaff_a4 = chip6_sleep_params._90_2_;
  *unaff_a6 = chip6_sleep_params[93];
  *unaff_a7 = phy_tx_pwr_error;
  return;
}



void phy_get_rxnf_param(void)

{
  return;
}



void phy_get_freq_param(void)

{
  undefined2 *in_a2;
  undefined2 *unaff_a3;
  
  *in_a2 = phy_freq_offset;
  *unaff_a3 = phy_meas_freq_offset;
  return;
}



void chan14_mic_enable(void)

{
  int iVar1;
  int in_a2;
  int unaff_a3;
  
  chan14_mic_en = (undefined)in_a2;
  if (in_a2 == 0) {
    chan14_mic_cfg(0);
  }
  else {
    if (chan14_mic_flag == '\0') {
      phy_in_most_power_bk = phy_in_most_power;
      chan14_mic_flag = '\x01';
    }
    iVar1 = 0x34;
    if (unaff_a3 < 0x35) {
      iVar1 = unaff_a3;
    }
    chan14_mic_most_power = (undefined)iVar1;
  }
  return;
}



void chan14_mic_cfg(void)

{
  undefined uVar1;
  int in_a2;
  
  if (in_a2 == 1) {
    dig_11b_filt_sel(1);
    (**(code **)(g_phyFuns + 0x9c))(0x66,3,1,5,0,0x3c);
    phy_set_most_tpw(chan14_mic_most_power,3,1,5,0,0x3c);
  }
  else {
    dig_11b_filt_sel(2);
    uVar1 = chip6_sleep_params[45];
    (**(code **)(g_phyFuns + 0x9c))(0x66,3,1,5,0,chip6_sleep_params[45]);
    phy_set_most_tpw(phy_in_most_power_bk,3,1,5,0,uVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sleep_set_rxpbus(void)

{
  int in_a2;
  uint unaff_a3;
  uint unaff_a5;
  undefined4 unaff_a6;
  
  if (in_a2 == 0) {
    memw();
    unaff_a3 = _DAT_ram_60000594 & 0xff0fffff;
    memw();
    memw();
    _DAT_ram_60000594 = _DAT_ram_60000594 & 0x30fffff;
    memw();
  }
  else {
    memw();
    memw();
    unaff_a6 = 0xd8000000;
    memw();
    unaff_a5 = _DAT_ram_60000594 & 0x30fffff | 0xd8300000;
    memw();
    _DAT_ram_60000594 = unaff_a5;
  }
  memw();
  _DAT_ram_600005e8 = _DAT_ram_600005e8 & 0xfe7fffff | 0x800000;
  memw();
  ets_delay_us(1,unaff_a3,0xff0fffff,unaff_a5,unaff_a6,_DAT_ram_600005e8);
  memw();
  memw();
  _DAT_ram_600005e8 = _DAT_ram_600005e8 & 0xfe7fffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void phy_close_rf(void)

{
  pm_set_sleep_mode(4);
  sleep_set_rxpbus(0);
  (**(code **)(g_phyFuns + 0x98))(0x62,1,3,1);
  (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,0,0,0);
  (**(code **)(g_phyFuns + 0x98))(0x65,4,0,6,0,0);
  memw();
  _DAT_ram_60000710 = 0xd6000000;
  return;
}



void phy_version_print(void)

{
  printf("phy_version: %d.%d, %s, %s, %s, RTOS old\n",0x422,0xf,"dfdec62","Jun 19 2020","16:20:23");
  return;
}



void phy_init_print(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  tsen_meas();
  printf("phy_version: %d, %s, %s, %s\n",0x422,"dfdec62","Jun 19 2020","16:20:23");
  printf("param_flag=0x%x\n",chip6_sleep_params._0_4_,"dfdec62","Jun 19 2020","16:20:23");
  iVar5 = (int)chip6_sleep_params._80_2_;
  uVar7 = (uint)chip6_sleep_params[82];
  iVar8 = (int)chip6_sleep_params[83];
  printf("phy_channel_num=%d, %d, %d, %d, %d, 0x%x, %d, %d\n",(int)chip6_sleep_params[48],
         (int)chip6_sleep_params[49],iVar5,uVar7,iVar8,(uint)chip6_sleep_params._90_2_,
         (int)chip6_sleep_params[92],(int)chip6_sleep_params[93]);
  printf("rc_cal: rx_filt_dcap=%d, tx_filt_dcap=%d\n",(uint)chip6_sleep_params[44],
         (uint)chip6_sleep_params[45],iVar5,uVar7,iVar8);
  uVar6 = chip6_sleep_params._84_4_ & 0xff;
  printf("vdd33=%d, temp_code=%d, offset=%d\n",chip6_sleep_params._84_4_ >> 0x10,
         chip6_sleep_params._84_4_ >> 8 & 0xff,uVar6,uVar7,iVar8);
  uVar2 = (uint)chip6_sleep_params._90_2_;
  printf("cal_rf_ana_gain, rf_gain=0x%x, ana_gain=0x%x\n",(uint)(chip6_sleep_params._90_2_ >> 5),
         uVar2 & 0x1f,uVar6,uVar7,iVar8);
  uVar9 = 0;
  do {
    printf("RX_NOISEFLOOR, %d\n",(int)*(short *)((int)&noise_array + uVar9 * 2),uVar2 & 0x1f,uVar6,
           uVar7,iVar8);
    uVar9 = uVar9 + 1 & 0xff;
  } while (uVar9 != 4);
  iVar5 = (int)chip6_sleep_params._46_2_;
  iVar3 = (int)chip6_sleep_params._88_2_;
  printf("rx_noise=%d, loop_noisefloor=%d\n",iVar5,iVar3,uVar6,uVar7,iVar8);
  printf("TXCAP, ",iVar5,iVar3,uVar6,uVar7,iVar8);
  uVar2 = 0;
  do {
    uVar9 = (uint)(byte)chip6_sleep_params[uVar2 + 0x20];
    printf("%d, ",uVar9,iVar3,uVar6,uVar7,iVar8);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 != 0xc);
  printf("\n",uVar9,iVar3,uVar6,uVar7,iVar8);
  printf("TX_POWER_BACKOFF, ",uVar9,iVar3,uVar6,uVar7,iVar8);
  uVar2 = 0;
  do {
    iVar5 = (int)*(short *)(chip6_sleep_params + uVar2 * 2 + 0xc);
    printf("%d, ",iVar5,iVar3,uVar6,uVar7,iVar8);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 != 4);
  printf("\n",iVar5,iVar3,uVar6,uVar7,iVar8);
  printf("TX_PWRCTRL_ATTEN, ",iVar5,iVar3,uVar6,uVar7,iVar8);
  uVar2 = 0;
  do {
    cVar1 = chip6_sleep_params[uVar2 + 0x38];
    printf("%d, ",(int)cVar1,iVar3,uVar6,uVar7,iVar8);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 != 0x18);
  printf("\n",(int)cVar1,iVar3,uVar6,uVar7,iVar8);
  iVar3 = (int)(char)chip6_sleep_params._20_2_;
  cVar1 = (char)((ushort)chip6_sleep_params._20_2_ >> 8);
  iVar5 = (int)cVar1;
  if (0xf < iVar5) {
    iVar5 = (int)(char)(cVar1 + -0x20);
  }
  if (0x1f < iVar3) {
    iVar3 = (int)(char)((char)chip6_sleep_params._20_2_ + -0x40);
  }
  printf("TXIQ, %d, %d\n",iVar5,iVar3,uVar6,uVar7,iVar8);
  printf("TXDC, ",iVar5,iVar3,uVar6,uVar7,iVar8);
  uVar2 = 0;
  do {
    uVar9 = SEXT14((char)*(undefined2 *)(chip6_sleep_params + uVar2 * 2 + 4));
    uVar4 = SEXT14((char)((ushort)*(undefined2 *)(chip6_sleep_params + uVar2 * 2 + 4) >> 8));
    printf("%d, %d; ",uVar9,uVar4,uVar6,uVar7,iVar8);
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 != 4);
  printf("\n",uVar9,uVar4,uVar6,uVar7,iVar8);
  uVar2 = 0;
  do {
    uVar11 = *(ushort *)(chip6_sleep_params + uVar2 * 2 + 0x16) & 0x3f;
    uVar13 = *(ushort *)(chip6_sleep_params + uVar2 * 2 + 0x16) >> 6 & 0x1f;
    if (0xf < uVar13) {
      uVar13 = SEXT14((char)((char)uVar13 + -0x20));
    }
    if (0x1f < uVar11) {
      uVar11 = SEXT14((char)((char)uVar11 + -0x40));
    }
    if (uVar2 == 0) {
      printf("RXIQ, ",uVar9,uVar4,uVar6,uVar7,iVar8);
    }
    printf("%d, %d; ",uVar13,uVar11,uVar6,uVar7,iVar8);
    if (uVar2 == 4) {
      printf("\n",uVar13,uVar11,uVar6,uVar7,iVar8);
    }
    uVar2 = uVar2 + 1 & 0xff;
    uVar9 = uVar13;
    uVar4 = uVar11;
  } while (uVar2 != 5);
  uVar2 = 0;
  iVar5 = phy_rx_gain_dc_table + 0x100;
  do {
    puVar10 = (uint *)(uVar2 * 8 + iVar5);
    uVar12 = *puVar10;
    uVar4 = puVar10[1];
    uVar9 = uVar12 >> 9 & 0x1ff;
    uVar14 = uVar4 >> 9 & 0x1ff;
    uVar12 = uVar12 & 0x1ff;
    uVar4 = uVar4 & 0x1ff;
    if (uVar2 == 0) {
      printf("RXDC, ",uVar13,uVar11,uVar6,uVar7,iVar8);
    }
    printf("%d, %d, %d, %d; ",uVar9,uVar14,uVar12,uVar4,iVar8);
    if (uVar2 == 0x1d) {
      printf("\n",uVar9,uVar14,uVar12,uVar4,iVar8);
    }
    uVar2 = uVar2 + 1 & 0xff;
    uVar13 = uVar9;
    uVar11 = uVar14;
    uVar6 = uVar12;
    uVar7 = uVar4;
  } while (uVar2 != 0x1e);
  return;
}



void txbbgain2dcoindex(void)

{
  int in_a2;
  
  if (in_a2 - 4U < 0x11) {
    return;
  }
  return;
}



void dcoindex2txbbgain(void)

{
  uint in_a2;
  
  if (in_a2 < 4) {
    return;
  }
  return;
}



void init_cal_dcoffset(void)

{
  uint *in_a2;
  uint uVar1;
  uint uVar2;
  int unaff_a3;
  undefined4 uVar3;
  undefined4 unaff_a5;
  byte *unaff_a6;
  uint uVar4;
  byte local_20 [4];
  
  if ((*in_a2 >> 0x13 & 1) == 0) {
    (**(code **)(g_phyFuns + 0xa4))(tx_rf_ana_gain & 0x1f);
    uVar3 = 0x1f;
    (**(code **)(g_phyFuns + 0xac))(1,1,0x1f);
    uVar4 = 0;
    uVar2 = 1;
    do {
      uVar1 = uVar4;
      dcoindex2txbbgain(uVar4,uVar2,uVar3,unaff_a5,unaff_a6);
      uVar3 = 500;
      unaff_a5 = 0xc;
      (**(code **)(g_phyFuns + 0xe8))(0,uVar1,500,0xc,local_20);
      *(short *)(uVar4 * 2 + unaff_a3) = (short)((int)((uint)local_20[0] << 0x18) >> 0x18);
      uVar4 = uVar4 + 1 & 0xff;
      uVar2 = uVar1;
      unaff_a6 = local_20;
    } while (uVar4 != 4);
    set_txdc_pbus(tx_rf_ana_gain,local_20,1,0xc,local_20);
    uVar2 = (uint)tx_rf_ana_gain;
    set_rfanagain_dc_reg(uVar2,local_20,1,0xc,local_20);
    (**(code **)(g_phyFuns + 0xa8))(uVar2,local_20,1,0xc,local_20);
    *in_a2 = *in_a2 | 0x80000;
  }
  return;
}



void set_rfanagain_dc_reg(void)

{
  int iVar1;
  uint uVar2;
  char *unaff_a3;
  
  uVar2 = 0;
  do {
    memw();
    memw();
    *(uint *)(&DAT_ram_60000504 + uVar2 * 4) = *(uint *)(&DAT_ram_60000504 + uVar2 * 4) & 0xfff000ff
    ;
    iVar1 = (uVar2 >> 1) * 4;
    if ((uVar2 & 1) == 0) {
      memw();
      memw();
      *(uint *)(&DAT_ram_60000404 + iVar1) =
           *(uint *)(&DAT_ram_60000404 + iVar1) & 0xffffc000 | (int)*unaff_a3;
    }
    else {
      memw();
      memw();
      *(uint *)(&DAT_ram_60000404 + iVar1) =
           *(uint *)(&DAT_ram_60000404 + iVar1) & 0xf0003fff | (int)unaff_a3[1] << 0x15;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 != 0x18);
  return;
}



void set_txdc_pbus(void)

{
  uint in_a2;
  uint uVar1;
  char *unaff_a3;
  int unaff_a4;
  
  uVar1 = in_a2 & 0x1f;
  txbbgain2dcoindex(uVar1);
  *unaff_a3 = (char)*(undefined2 *)(chip6_sleep_params + uVar1 * 2 + 4);
  unaff_a3[1] = (char)((ushort)*(undefined2 *)(chip6_sleep_params + uVar1 * 2 + 4) >> 8);
  if (unaff_a4 != 0) {
    (**(code **)(g_phyFuns + 0xac))(0,2,(short)*unaff_a3);
    (**(code **)(g_phyFuns + 0xac))(1,2,(short)unaff_a3[1]);
  }
  return;
}



void get_rf_gain_qdb(void)

{
  int in_a2;
  
  if (in_a2 - 1U < 6) {
    return;
  }
  return;
}



void correct_rf_ana_gain(void)

{
  byte bVar1;
  int iVar2;
  byte *in_a2;
  uint uVar3;
  ushort *unaff_a3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  
  uVar7 = *unaff_a3;
  bVar1 = *in_a2;
  uVar6 = uVar7 >> 9 & 7;
  uVar4 = uVar7 & 0xf;
  iVar2 = (int)(char)bVar1;
  uVar8 = (uVar7 >> 4 & 1) * 6 + uVar4;
  if (iVar2 < 1) {
    if ((char)bVar1 < '\0') {
      do {
        if (uVar8 < 7) break;
        uVar3 = iVar2 + 8;
        bVar1 = (byte)uVar3;
        *in_a2 = bVar1;
        uVar8 = uVar8 - 2 & 0xff;
        iVar2 = (int)(char)bVar1;
      } while ((uVar3 >> 7 & 1) != 0);
      if (iVar2 < 0) {
        if (1 < uVar6) {
          do {
            uVar6 = uVar6 - 1 & 0xff;
            uVar3 = uVar6;
            get_rf_gain_qdb(uVar6,uVar4);
            uVar4 = (uint)*in_a2;
            bVar1 = (byte)(uVar4 + uVar3);
            *in_a2 = bVar1;
            iVar2 = (int)(char)bVar1;
            if ((uVar4 + uVar3 >> 7 & 1) == 0) break;
          } while (uVar6 != 1);
        }
        if ((iVar2 < 0) && (uVar8 == 6)) {
          *in_a2 = (char)iVar2 + 8;
          uVar8 = 4;
        }
      }
    }
  }
  else {
    if (uVar8 == 4) {
      uVar8 = 6;
      *in_a2 = bVar1 - 8;
      iVar2 = (int)(char)(bVar1 - 8);
    }
    if (0 < iVar2) {
      if (uVar6 < 7) {
        do {
          cVar5 = (char)uVar6;
          get_rf_gain_qdb(uVar6,uVar4);
          bVar1 = *in_a2;
          uVar6 = uVar6 + 1 & 0xff;
          *in_a2 = bVar1 - cVar5;
          iVar2 = (int)(char)(bVar1 - cVar5);
          if (iVar2 < 1) goto LAB_ram_0040909c;
        } while (uVar6 != 7);
      }
      for (; (0 < iVar2 && (uVar8 < 10)); uVar8 = uVar8 + 2 & 0xff) {
        bVar1 = (char)iVar2 - 8;
        *in_a2 = bVar1;
        iVar2 = (int)(char)bVar1;
      }
    }
  }
LAB_ram_0040909c:
  uVar7 = (ushort)uVar8;
  if (5 < uVar8) {
    uVar7 = uVar7 + 10 & 0xff;
  }
  *unaff_a3 = uVar7;
  return;
}



void get_sar_dout(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack32 [2];
  ushort uStack30;
  ushort uStack28;
  ushort uStack26;
  ushort uStack24;
  ushort uStack22;
  ushort uStack20;
  ushort uStack18;
  int iStack12;
  int iStack8;
  
  read_sar_dout(auStack32);
  iVar4 = (uint)uStack20 + (uint)uStack18;
  iVar3 = (int)(((uint)uStack24 + (uint)uStack22) * 3 + iVar4 * -3) >> 0x10;
  iVar2 = (int)(((uint)uStack26 + (uint)uStack30 + (uint)uStack28) * 2 + iVar4 * -3) >> 0x10;
  iStack8 = 0;
  if (-1 < iVar2) {
    iStack8 = iVar2;
  }
  iVar1 = 0;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  iStack8 = iStack8 >> 0x10;
  iVar1 = iVar1 >> 0x10;
  iStack12 = iVar1;
  (**(code **)(g_phyFuns + 0x38))(iStack8,3,iVar1,iVar2,iVar3,iVar4 * 3);
  (**(code **)(g_phyFuns + 0x38))(iStack12,3,iVar1,iVar2,iVar3,iVar4 * 3);
  return;
}



void cal_rf_ana_gain(void)

{
  int iVar1;
  int unaff_a5;
  int unaff_a6;
  char *unaff_a7;
  int iVar2;
  undefined auStack32 [2];
  undefined auStack30 [2];
  char local_1c [4];
  
  iVar2 = 0;
  tx_rf_ana_gain = 0xbf0;
  rfcal_bb_atten_init = '<';
  auStack32[0] = chip6_sleep_params[55];
  do {
    (**(code **)(g_phyFuns + 0xac))(7,1,tx_rf_ana_gain >> 5,unaff_a5,unaff_a6,unaff_a7);
    (**(code **)(g_phyFuns + 0xac))(0,1,tx_rf_ana_gain & 0x1f,unaff_a5,unaff_a6,unaff_a7);
    set_txdc_pbus(tx_rf_ana_gain,auStack30,1,unaff_a5,unaff_a6,unaff_a7);
    unaff_a5 = 0x1f;
    unaff_a6 = (int)rfcal_bb_atten_init;
    unaff_a7 = local_1c;
    ram_rfcal_pwrctrl(0x40,auStack32,1,0x1f,unaff_a6,unaff_a7,0x138,0);
    iVar1 = (int)local_1c[0];
    rfcal_bb_atten_init = local_1c[0] + '\x1f';
    if ((iVar1 < 0x25) && (0xb < iVar1)) break;
    iVar1 = 0x18 - iVar1;
    local_1c[0] = (char)iVar1;
    correct_rf_ana_gain(local_1c,&tx_rf_ana_gain,1,iVar1,unaff_a6,unaff_a7);
    (**(code **)(g_phyFuns + 0xac))(7,1,tx_rf_ana_gain >> 5,iVar1,unaff_a6,unaff_a7);
    (**(code **)(g_phyFuns + 0xac))(0,1,tx_rf_ana_gain & 0x1f,iVar1,unaff_a6,unaff_a7);
    iVar2 = (int)(char)((char)iVar2 + '\x01');
    unaff_a5 = iVar2 + -2;
    unaff_a7 = (char *)(int)local_1c[0];
    unaff_a6 = 0x37 - (int)unaff_a7;
    rfcal_bb_atten_init = (char)unaff_a6;
  } while (unaff_a5 != 0);
  set_txdc_pbus(tx_rf_ana_gain,auStack30,1,unaff_a5,unaff_a6,unaff_a7);
  set_rfanagain_dc_reg(tx_rf_ana_gain,auStack30,1,unaff_a5,unaff_a6,unaff_a7);
  chip6_sleep_params._90_2_ = tx_rf_ana_gain;
  return;
}



void meas_tone_pwr_db(void)

{
  undefined in_a2;
  int iVar1;
  
  (**(code **)(g_phyFuns + 0x68))(1,0x40,in_a2,0,0,0,0,0,0);
  iVar1 = 0;
  do {
    (**(code **)(g_phyFuns + 0x2c))(0x138,0x40,in_a2,0,0,0);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 2);
  (**(code **)(g_phyFuns + 0x6c))(1,0x40,in_a2,0,0,0);
  return;
}



void tx_pwr_backoff(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  byte *in_a2;
  int iVar4;
  int iVar5;
  undefined4 unaff_a3;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  char cStack48;
  char acStack47 [3];
  char *pcStack12;
  
  bVar1 = *in_a2;
  if (bVar1 < 0x4d) {
    cStack48 = bVar1 - 0x1a;
  }
  else {
    cStack48 = '2';
  }
  bVar2 = bVar1 >= 0x4d;
  pcVar6 = &cStack48;
  iVar7 = 1;
  pcVar9 = acStack47;
  ram_rfcal_pwrctrl(0x40,pcVar6,1,0x1f,(int)rfcal_bb_atten_init,pcVar9,0x138,0);
  uVar13 = 0;
  iVar8 = 0;
  pcStack12 = (char *)0x0;
  cVar11 = acStack47[0] + '\x1f';
  acStack47[0] = acStack47[0] + '\x05';
  rfcal_bb_atten_init = cVar11;
  do {
    cVar3 = '\0';
    if (-1 < acStack47[0]) {
      cVar3 = acStack47[0];
    }
    iVar12 = (int)cVar3;
    acStack47[0] = 'o';
    if (cVar11 < 'p') {
      acStack47[0] = cVar11;
    }
    iVar4 = iVar12;
    meas_tone_pwr_db(iVar12,pcVar6,iVar7,iVar8,0,pcVar9);
    iVar5 = (int)acStack47[0];
    meas_tone_pwr_db(iVar5,acStack47[0],iVar7,iVar8,0,pcVar9);
    pcVar9 = (char *)0x2c;
    if (uVar13 == 0) {
      iVar10 = iVar4 - iVar5 >> 0x10;
      if ((-1 < iVar4) || (iVar10 < 0x2d)) goto LAB_ram_00409408;
      if (!bVar2) {
        bVar2 = true;
        goto LAB_ram_00409408;
      }
LAB_ram_0040940a:
      if (iVar10 < 0x2c) {
LAB_ram_00409413:
        bVar2 = false;
        goto LAB_ram_00409415;
      }
      if (iVar10 < 0x2d) {
        if (iVar4 < 0) goto LAB_ram_00409415;
        goto LAB_ram_00409413;
      }
LAB_ram_00409418:
      if (!bVar2) {
LAB_ram_004094a3:
        *(bool *)unaff_a3 = 0x30 < iVar10;
        return;
      }
    }
    else {
      iVar10 = iVar4 - iVar5 >> 0x10;
LAB_ram_00409408:
      if (bVar2) goto LAB_ram_0040940a;
LAB_ram_00409415:
      if (0x2c < iVar10) goto LAB_ram_00409418;
    }
    if (((((iVar10 <= (int)pcStack12) && (0x2b < iVar10)) && (!bVar2)) || ((-1 < iVar4 && (bVar2))))
       || ((iVar5 < 0x51 || ((iVar7 = (int)acStack47[0], iVar7 == 0x6f || (iVar12 == 0))))))
    goto LAB_ram_004094a3;
    if (bVar2) {
      if ((uVar13 == 0) && (0x30 < iVar10)) {
        iVar8 = iVar4 + 1;
        if (-1 < iVar4) {
          iVar8 = iVar4;
        }
        acStack47[0] = (char)(iVar8 >> 1) + -1;
      }
      else {
        acStack47[0] = -4;
      }
      if (0 < iVar4) {
        iVar7 = iVar4 + -1;
        if (-1 < iVar7) {
          iVar4 = iVar7;
        }
        acStack47[0] = (char)(iVar4 >> 1);
      }
    }
    else {
      acStack47[0] = '\x02';
    }
    acStack47[0] = cVar3 + acStack47[0];
    pcVar6 = (char *)(iVar10 >> 0x10);
    uVar13 = uVar13 + 1 & 0xff;
    iVar8 = uVar13 - 10;
    pcStack12 = (char *)0x0;
    if (!bVar2) {
      pcStack12 = pcVar6;
    }
    cVar11 = acStack47[0] + '\x1a';
    if (iVar8 == 0) goto LAB_ram_004094a3;
  } while( true );
}



void get_fcc_1m2m_pwr_offset(void)

{
  int in_a2;
  int unaff_a3;
  
  if (((in_a2 != 0) &&
      ((((unaff_a3 == 2 || (unaff_a3 == 3)) || (unaff_a3 == 6)) || (unaff_a3 == 7)))) &&
     (chip6_sleep_params[48] < '\a')) {
    return;
  }
  return;
}



void ram_set_txbb_atten(void)

{
  int iVar1;
  undefined4 in_a2;
  uint uVar2;
  int unaff_a3;
  uint unaff_a4;
  int iVar3;
  uint uVar4;
  uint unaff_a5;
  int unaff_a6;
  uint uVar5;
  
  uVar5 = 0;
  uVar4 = unaff_a4;
  do {
    uVar2 = uVar5;
    get_target_power_offset(uVar5,in_a2,uVar4,unaff_a5);
    iVar1 = (int)*(char *)(uVar2 + unaff_a4);
    if (uVar5 < 8) {
      iVar3 = iVar1 + unaff_a3;
    }
    else {
      iVar3 = unaff_a6;
      if (unaff_a6 < iVar1) {
        iVar3 = iVar1;
      }
    }
    uVar4 = 0x18;
    if ((char)-(char)iVar3 < 0x19) {
      uVar4 = (int)(char)-(char)iVar3;
    }
    unaff_a5 = uVar4 & 0xff;
    memw();
    memw();
    *(uint *)(&DAT_ram_60000504 + uVar5 * 4) =
         *(uint *)(&DAT_ram_60000504 + uVar5 * 4) & 0xffffff00 | unaff_a5;
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 != 0x18);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void txiq_get_mis_pwr(void)

{
  undefined2 uVar1;
  uint in_a2;
  uint unaff_a4;
  uint uVar2;
  undefined2 *unaff_a5;
  undefined2 *unaff_a6;
  
  memw();
  _DAT_ram_600005b8 = _DAT_ram_600005b8 & 0xf0000000 | in_a2 << 0x1a | unaff_a4 | 0x2c0000;
  memw();
  uVar1 = 4;
  (**(code **)(g_phyFuns + 0x70))(4,10);
  *unaff_a5 = uVar1;
  uVar2 = (uint)((in_a2 & 1) == 0) << 0x18;
  memw();
  _DAT_ram_600005b8 = _DAT_ram_600005b8 & 0xf0ffffff | uVar2;
  memw();
  uVar1 = 4;
  (**(code **)(g_phyFuns + 0x70))(4,10,uVar2,0xf0ffffff,1,in_a2 & 1);
  *unaff_a6 = uVar1;
  return;
}



void txiq_cover(void)

{
  char cVar1;
  int in_a2;
  int iVar2;
  int iVar3;
  undefined4 unaff_a3;
  int iVar4;
  char *unaff_a4;
  int unaff_a5;
  short *unaff_a6;
  uint uVar5;
  uint uVar6;
  char cVar7;
  short local_40;
  short sStack62;
  int iStack28;
  int iStack24;
  short *psVar8;
  int iVar9;
  
  cVar7 = '\0';
  uVar6 = 0;
  uVar5 = 0;
  iStack28 = 0;
  iStack24 = 0;
  psVar8 = unaff_a6;
  iVar9 = unaff_a5;
  do {
    if (uVar5 < 4) {
      cVar1 = (char)((uint)((int)(short)uVar6 * (int)(short)uVar6 + 0x80) >> 8);
      iVar2 = (int)(char)(cVar1 + cVar7);
      (**(code **)(g_phyFuns + 0x108))(iVar2,1,iVar9,unaff_a5,unaff_a6,0);
      cVar7 = (char)iVar2 - cVar1;
      (**(code **)(g_phyFuns + 0x108))(uVar6,0,iVar9,unaff_a5,unaff_a6,0);
    }
    txiq_get_mis_pwr(1,in_a2 - 0xcU & 0xff,unaff_a3,&local_40,&sStack62,0);
    iVar2 = (int)sStack62;
    if ((int)local_40 < (int)sStack62) {
      iVar2 = (int)local_40;
    }
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    iVar3 = 0;
    __divsi3(0,iVar2,1,&local_40,&sStack62,0);
    cVar1 = (char)(iVar3 + 0x10 >> 5);
    *unaff_a4 = cVar1;
    if ((iVar9 != 0) && (cVar7 < '\0')) {
      *unaff_a4 = -cVar1;
    }
    unaff_a6 = &sStack62;
    txiq_get_mis_pwr(0,in_a2,unaff_a3,&local_40,unaff_a6,0);
    iVar2 = 0;
    iVar3 = (int)sStack62 + (int)local_40 >> 0x10;
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    __divsi3(0,iVar3,1,&local_40,unaff_a6,0);
    iVar2 = iVar2 + 0x10 >> 5;
    unaff_a4[1] = (char)iVar2;
    if ((iVar9 != 0) && ((uVar6 >> 7 & 1) != 0)) {
      iVar2 = -iVar2;
      unaff_a4[1] = (char)iVar2;
    }
    iVar3 = (int)*unaff_a4;
    if (uVar5 < 3) {
      cVar7 = cVar7 - *unaff_a4;
      uVar6 = SEXT14((char)((char)uVar6 - (char)iVar2));
    }
    else {
      unaff_a6 = (short *)((iVar3 + iStack24) * 0x1000000);
      iVar2 = (iVar2 + iStack28) * 0x1000000;
      iStack28 = iVar2 >> 0x18;
      unaff_a5 = (int)unaff_a6 >> 0x18;
      (**(code **)g_phyFuns)(iVar3,iStack28,iVar2,unaff_a5,unaff_a6,0);
      if (iVar3 < 2) {
        iVar3 = (int)unaff_a4[1];
        (**(code **)g_phyFuns)(iVar3,iStack28,iVar2,unaff_a5,unaff_a6,0);
        if (iVar3 < 2) break;
      }
      iStack24 = unaff_a5;
      if (uVar5 == 6) {
        iVar3 = unaff_a5 + 2 >> 2;
        iVar4 = iStack28 + 2 >> 2;
        cVar7 = cVar7 - (char)iVar3;
        uVar6 = SEXT14((char)((char)uVar6 - (char)iVar4));
        (**(code **)g_phyFuns)(iVar3,iVar4,iVar2,unaff_a5,unaff_a6,0);
        if (iVar3 < 5) {
          (**(code **)g_phyFuns)(iVar4,iVar4,iVar2,unaff_a5,unaff_a6,0);
          if (iVar4 < 5) goto LAB_ram_004097f0;
        }
        check_result = check_result | 0x2000;
      }
    }
LAB_ram_004097f0:
    if (psVar8 != (short *)0x0) {
      printf("%3d,%3d; ",(int)*unaff_a4,(int)unaff_a4[1],psVar8,unaff_a6,0);
    }
    uVar5 = uVar5 + 1 & 0xff;
    unaff_a5 = uVar5 - 7;
  } while (unaff_a5 != 0);
  (**(code **)(g_phyFuns + 0x108))((int)cVar7,1,iVar9,unaff_a5,unaff_a6,0);
  (**(code **)(g_phyFuns + 0x108))((int)(char)uVar6,0,iVar9,unaff_a5,unaff_a6,0);
  unaff_a4[1] = (char)uVar6;
  *unaff_a4 = cVar7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ram_rfcal_txiq(void)

{
  byte bVar1;
  char *pcVar2;
  uint *in_a2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  ushort *unaff_a3;
  uint uVar7;
  undefined4 unaff_a4;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_a6;
  int unaff_a7;
  uint uVar11;
  char cVar12;
  char in_stack_00000000;
  undefined auStack64 [2];
  byte bStack62;
  byte bStack61;
  
  if ((*in_a2 >> 0x11 & 1) == 0) {
    iVar3 = 0x77;
    (**(code **)(g_phyFuns + 0x94))(0x77,0,0x10,0,0);
    uVar4 = 0x77;
    (**(code **)(g_phyFuns + 0x94))(0x77,0,0xf,6,6);
    uVar5 = 0x77;
    (**(code **)(g_phyFuns + 0x94))(0x77,0,9,7,0);
    (**(code **)(g_phyFuns + 0xa0))(uVar5,0,9,7,0);
    (**(code **)(g_phyFuns + 0xc0))(1,0,9,7,0);
    ram_pbus_xpd_tx_on(unaff_a4,0,9,7,0);
    set_txdc_pbus(unaff_a4,auStack64,1,7,0);
    (**(code **)(g_phyFuns + 0x18))(0,auStack64,1,7,0);
    (**(code **)(g_phyFuns + 0x3c))(1,auStack64,1,7,0);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,9,7,0,0);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,2,2,1);
    txiq_cover(unaff_a6);
    (**(code **)(g_phyFuns + 0x6c))(1);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,0,0,iVar3);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0xf,6,6,uVar4);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,9,7,0,uVar5);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,2,2,0);
    bVar1 = 0xf1;
    if (-0x10 < (char)bStack62) {
      bVar1 = bStack62;
    }
    bStack62 = 0xf;
    if ((char)bVar1 < '\x10') {
      bStack62 = bVar1;
    }
    uVar7 = SEXT14((char)bStack62);
    pcVar2 = (char *)0xffffffe1;
    if (-0x20 < (int)(char *)(int)(char)bStack61) {
      pcVar2 = (char *)(int)(char)bStack61;
    }
    pcVar6 = (char *)0x1f;
    if ((int)pcVar2 < 0x20) {
      pcVar6 = pcVar2;
    }
    bStack61 = (byte)pcVar6;
    uVar8 = SEXT14((char)bStack61);
    iVar9 = 2;
    if ((unaff_a7 != 0) && (iVar9 = iVar3, iVar3 != 0)) {
      bStack62 = -bStack62;
      uVar7 = SEXT14((char)bStack62);
    }
    if (in_stack_00000000 != '\0') {
      pcVar6 = "txiq_gain=%d, txiq_phase=%d\n";
      printf("txiq_gain=%d, txiq_phase=%d\n",uVar7,uVar8,iVar9,2,0);
      uVar8 = (uint)bStack61;
      uVar7 = (uint)bStack62;
    }
    uVar10 = uVar7 >> 7 & 1;
    uVar11 = SEXT14((char)uVar7);
    if (uVar10 != 0) {
      uVar11 = uVar7 + 0x20;
    }
    iVar3 = (int)(char)uVar8;
    if ((uVar8 >> 7 & 1) != 0) {
      iVar3 = uVar8 + 0x40;
    }
    cVar12 = (char)iVar3;
    (**(code **)(g_phyFuns + 0xa8))(pcVar6,uVar7,uVar8,uVar10,2,0);
    uVar7 = *in_a2;
    *unaff_a3 = (ushort)((iVar3 << 0x18) >> 0x18);
    *in_a2 = uVar7 | 0x20000;
  }
  else {
    cVar12 = (char)*unaff_a3;
    uVar11 = (uint)(*unaff_a3 >> 8);
  }
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_6000983c = _DAT_ram_6000983c & 0xfffffff0 | 2;
  _DAT_ram_60009860 =
       _DAT_ram_60009860 & 0xe000ffff | uVar11 << 0x18 | (int)cVar12 << 0x12 | 0x30000U;
  _DAT_ram_60009864 = _DAT_ram_60009864 & 0xfffffe0e | 1;
  _DAT_ram_60009a28 = _DAT_ram_60009a28 | 0x20;
  return;
}



void rc_cal(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint unaff_a6;
  undefined4 unaff_a7;
  
  if ((chip6_sleep_params._0_4_ >> 0x17 & 1) == 0) {
    (**(code **)(g_phyFuns + 0x9c))(0x6a,2,0,5,4,0);
    if (chip6_phy_init_ctrl[1] == 0) {
      (**(code **)(g_phyFuns + 0x9c))(0x6a,2,4,7,4,2);
    }
    else {
      (**(code **)(g_phyFuns + 0x9c))(0x6a,2,4,7,4,1);
    }
    (**(code **)(g_phyFuns + 0x9c))(0x68,3,1,0,0,1);
    (**(code **)(g_phyFuns + 0x9c))(0x6a,2,6,4,0,8);
    (**(code **)(g_phyFuns + 0x9c))(0x6a,2,4,0,0,1);
    (**(code **)(g_phyFuns + 0x9c))(0x6a,2,3,6,6,1);
    (**(code **)(g_phyFuns + 0x9c))(0x6a,2,4,3,3,0);
    (**(code **)(g_phyFuns + 0x9c))(0x6a,2,4,3,3,1);
    ets_delay_us(100,2,4,3,3,1);
    uVar1 = 0x6a;
    (**(code **)(g_phyFuns + 0x94))(0x6a,2,5,5,0,1);
    uVar3 = 0;
    unaff_a7 = 0;
    (**(code **)(g_phyFuns + 0x9c))(0x68,3,1,0,0,0);
    unaff_a6 = (uint)chip6_phy_init_ctrl[1];
    if ((uVar1 < 3) || (0x3c < uVar1)) {
      uVar3 = 0x1000000;
      check_result = check_result | 0x1000000;
    }
    if (unaff_a6 == 0) {
      uVar1 = uVar1 * 0xb - 0xe;
      __divsi3(uVar1,0x14,&check_result,uVar3,0,0);
    }
    else {
      uVar1 = 0xffffffd9;
      __divsi3(0xffffffd9,0x1e,&check_result,uVar3,unaff_a6,0);
    }
    chip6_sleep_params[44] = (byte)uVar1;
    uVar2 = 0;
    __udivsi3(0,9,&check_result,uVar3,unaff_a6,0);
    chip6_sleep_params[45] = (byte)((int)((uVar2 & 0xff) + 2) >> 2);
    chip6_sleep_params._0_4_ = chip6_sleep_params._0_4_ | 0x800000;
  }
  else {
    uVar1 = (uint)chip6_sleep_params[44];
  }
  (**(code **)(g_phyFuns + 0x98))(0x61,1,2,uVar1 & 0xff | 0xa0,unaff_a6,unaff_a7);
  (**(code **)(g_phyFuns + 0x98))(0x66,3,1,chip6_sleep_params[45] | 0x40,0x40,unaff_a7);
  return;
}



// WARNING: Type propagation algorithm not settling

void get_target_power_offset(void)

{
  char cVar1;
  uint in_a2;
  
  cVar1 = chip6_sleep_params[82];
  if (chip6_sleep_params[82] != '\0') {
    cVar1 = '\x01';
  }
  get_fcc_1m2m_pwr_offset(cVar1);
  switch(in_a2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  default:
  }
  return;
}



void get_pwctrl_correct(void)

{
  short sVar1;
  int in_a2;
  int iVar2;
  short *unaff_a3;
  byte unaff_a4;
  int unaff_a5;
  short sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = in_a2 + ((int)*unaff_a3 - ((int)*unaff_a3 >> (unaff_a4 & 0x1f)));
  iVar2 = unaff_a5 << 0x20 - (' ' - (unaff_a4 + 2 & 0x1f));
  iVar5 = iVar4 >> 0x10;
  sVar3 = (short)((uint)iVar4 >> 0x10);
  *unaff_a3 = sVar3;
  sVar1 = (short)iVar2;
  if (iVar5 < iVar2) {
    if (-iVar2 < iVar5) {
      return;
    }
  }
  else {
    sVar1 = -sVar1;
  }
  *unaff_a3 = sVar3 + sVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void tx_pwctrl_cal(void)

{
  char cVar1;
  int in_a2;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  short *unaff_a4;
  int unaff_a5;
  int unaff_a6;
  uint unaff_a7;
  int iVar7;
  int iVar8;
  char acStack64 [2];
  undefined auStack62 [6];
  undefined auStack56 [8];
  uint uStack48;
  int iVar9;
  
  memw();
  iVar2 = 0x138;
  uStack48 = _DAT_ram_60000d60 >> 0x18 & 0x1f;
  iVar9 = unaff_a6;
  get_sar_dout(0x138);
  phy_tx_power_out = (undefined2)iVar2;
  uVar3 = uStack48;
  if (uStack48 < 8) {
    uVar3 = (uStack48 ^ 0xffffffff) & 7;
  }
  get_target_power_offset(uVar3);
  phy_tx_pwr_error = (short)((uint)iVar2 >> 0x10);
  iVar4 = -0x20;
  if (-0x21 < iVar2 >> 0x10) {
    iVar4 = iVar2 >> 0x10;
  }
  iVar2 = 0x20;
  if (iVar4 < 0x21) {
    iVar2 = iVar4;
  }
  iVar4 = iVar2 >> 0x10;
  if (tx_pwctrl_track_num < 4) {
    iVar2 = iVar2 >> 0x12;
    if (iVar4 < 1) {
      unaff_a7 = 0xfffffff0;
      if (-0x11 < iVar4) {
        iVar4 = 0;
        goto LAB_ram_00409e98;
      }
      iVar2 = -iVar2;
    }
    iVar4 = (int)(char)-(char)(iVar4 + iVar2 >> 2);
  }
  else {
    get_pwctrl_correct(iVar4,unaff_a4,4,2);
  }
LAB_ram_00409e98:
  if ((0 < iVar4) && ('\x13' < chip6_sleep_params[93])) {
    iVar4 = 0;
  }
  if (iVar9 != 0) {
    unaff_a6 = (int)*unaff_a4;
    unaff_a7 = SEXT14(chip6_sleep_params[93]);
    memw();
    memw();
    printf("1,target_power,%d, p_error,%d, correct_v,%d, error_accum, %d, tot_p,%d, coatt,%d, att,%d, rf_g,%x, txq_rate,%d, chan,%d, rate_att,%d\n"
           ,(uint)*(byte *)(uVar3 + in_a2),(int)phy_tx_pwr_error,iVar4,unaff_a6,unaff_a7,
           (int)chip6_sleep_params[92],(int)(char)_DAT_ram_60000560,(uint)tx_rf_ana_gain,uStack48,
           (int)chip6_sleep_params[48],(int)(char)*(undefined4 *)(&DAT_ram_60000504 + uStack48 * 4))
    ;
  }
  if (unaff_a5 == 0) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar7 = 0x7f;
  uVar5 = 0;
  iVar2 = (int)chip6_sleep_params[92];
  do {
    iVar6 = uVar5 * 6;
    uVar5 = uVar5 + 1 & 0xff;
    iVar8 = (int)(char)chip6_sleep_params[iVar6 + 0x3d];
    if (iVar7 < (char)chip6_sleep_params[iVar6 + 0x3d]) {
      iVar8 = iVar7;
    }
    iVar7 = (int)(char)iVar8;
  } while (uVar5 != 4);
  iVar7 = iVar2 + iVar7;
  iVar6 = (iVar7 - iVar4) * 0x1000000 >> 0x18;
  if (iVar6 < 0x25) {
LAB_ram_00409f75:
    iVar8 = iVar4;
    if ((iVar6 < 0xc) && (tx_rf_ana_gain < 0xff4)) goto LAB_ram_00409f81;
  }
  else {
    unaff_a7 = (uint)tx_rf_ana_gain;
    unaff_a6 = 0x3e4;
    if (unaff_a7 < 0x3e5) goto LAB_ram_00409f75;
LAB_ram_00409f81:
    acStack64[0] = '\x18' - (char)(iVar7 - iVar4);
    correct_rf_ana_gain(acStack64,&tx_rf_ana_gain,iVar2,0x40d5ec,unaff_a6,unaff_a7);
    iVar6 = (iVar4 - iVar7) + 0x18;
    cVar1 = (char)iVar6 - acStack64[0];
    chip6_sleep_params[140] = chip6_sleep_params[140] + cVar1;
    chip6_sleep_params[93] = chip6_sleep_params[93] + cVar1;
    iVar2 = 0;
    iVar8 = (int)(char)((char)iVar4 + (acStack64[0] - (char)iVar6));
    set_txdc_pbus(tx_rf_ana_gain,auStack62,0,iVar6,unaff_a6,unaff_a7);
    set_rfanagain_dc_reg(tx_rf_ana_gain,auStack62,0,iVar6,unaff_a6,unaff_a7);
    chip6_sleep_params._90_2_ = tx_rf_ana_gain;
  }
  cVar1 = (char)iVar8;
  if (iVar8 < 0) {
    iVar2 = 0x46;
    unaff_a6 = (int)(char)((char)iVar7 - cVar1);
    if (unaff_a6 < 0x47) goto LAB_ram_0040a01a;
  }
  if (iVar8 < 1) {
    return;
  }
  unaff_a7 = SEXT14((char)((char)iVar7 - cVar1));
  if ((int)unaff_a7 < 0xc) {
    return;
  }
LAB_ram_0040a01a:
  chip6_sleep_params[93] = chip6_sleep_params[93] + cVar1;
  chip6_sleep_params[92] = chip6_sleep_params[92] - cVar1;
  chip6_sleep_params[140] = chip6_sleep_params[140] + cVar1;
  tx_atten_set_interp(chip6_sleep_params[48],auStack56,iVar2,0x40d5ec,unaff_a6,unaff_a7);
  rtc_mem_backup(0x40d5c0,0x40d5c9,chip6_sleep_params._144_4_,0x40d5ec,unaff_a6,unaff_a7);
  if (iVar9 != 0) {
    memw();
    memw();
    printf("2,target_power,%d, p_error,%d, correct_v,%d, error_accum, %d, tot_p,%d, coatt,%d, att,%d, rf_g,%x, txq_rate,%d, chan,%d, rate_att,%d\n"
           ,(uint)*(byte *)(uVar3 + in_a2),(int)phy_tx_pwr_error,iVar4,(int)*unaff_a4,
           (int)chip6_sleep_params[93],(int)chip6_sleep_params[92],(int)(char)_DAT_ram_60000560,
           (uint)tx_rf_ana_gain,uStack48,(int)chip6_sleep_params[48],
           (int)(char)*(undefined4 *)(&DAT_ram_60000504 + uStack48 * 4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void tx_pwctrl_bg_init(void)

{
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60000d50 = _DAT_ram_60000d50 & 0xfffffffe;
  _DAT_ram_60000d5c = _DAT_ram_60000d5c & 0xff5fffff;
  _DAT_ram_60000d60 = _DAT_ram_60000d60 & 0xfffffffe | 3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void tx_pwctrl_background(void)

{
  undefined2 *in_a2;
  undefined2 *puVar1;
  int iVar2;
  undefined4 unaff_a3;
  byte bVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined auStack32 [8];
  
  bVar3 = chip6_phy_init_ctrl[100] & 1;
  if ((chip6_phy_init_ctrl[100] & 1) != 0) {
    return;
  }
  if (chip6_phy_init_ctrl[94] != '\0') {
    return;
  }
  if (phy_set_most_tpw_disbg != '\0') {
    return;
  }
  if (tout_dis_txpwr_track == '\0') {
    puVar4 = (undefined2 *)0x0;
    uVar5 = 0x60000a00;
    memw();
    if (((int)_DAT_ram_60000d50 < 0) || (memw(), (_DAT_ram_60000d50 >> 0x18 & 7) != 0)) {
      phy_tx_power_out = 0;
      puVar1 = in_a2;
    }
    else {
      uVar5 = unaff_a3;
      get_phy_target_power(auStack32,(int)phy_in_vdd33_offset,bVar3,0,0x60000a00,0);
      unaff_a3 = 0x40d62a;
      tx_pwctrl_cal(auStack32,0x40d62a,0x40d5bc,in_a2,uVar5,0);
      bVar3 = 0x13;
      puVar1 = &phy_tx_power_out;
      puVar4 = in_a2;
      if (tx_pwctrl_track_num < 0x14) {
        puVar4 = (undefined2 *)(tx_pwctrl_track_num + 1);
        tx_pwctrl_track_num = (byte)puVar4;
      }
    }
    tx_pwctrl_bg_init(puVar1,unaff_a3,bVar3,puVar4,uVar5,0);
    iVar2 = (int)chip6_sleep_params[140];
    (**(code **)g_phyFuns)(iVar2,unaff_a3,bVar3,puVar4,uVar5,0);
    if (7 < iVar2) {
      chip6_sleep_params[140] = '\0';
      periodic_cal_top(0,0,0x40d5ec,puVar4,uVar5,0);
    }
    return;
  }
  return;
}



void read_sar_dout(void)

{
  ushort uVar1;
  uint uVar2;
  int in_a2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  
  uVar2 = 0;
  do {
    iVar4 = uVar2 * 4;
    puVar5 = (ushort *)(uVar2 * 2 + in_a2);
    memw();
    uVar2 = uVar2 + 1 & 0xff;
    iVar3 = ((*(uint *)(&DAT_ram_60000d80 + iVar4) ^ 0xffffffff) & 0xff) - 0x15;
    uVar1 = (ushort)(*(uint *)(&DAT_ram_60000d80 + iVar4) ^ 0xffffffff);
    *puVar5 = uVar1 & 0x7ff;
    iVar4 = 0;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    iVar3 = iVar4 * 0x117 >> 8;
    iVar4 = 0xff;
    if (iVar3 < 0x100) {
      iVar4 = iVar3;
    }
    *puVar5 = (short)iVar4 + (uVar1 & 0x700);
  } while (uVar2 != 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ram_get_fm_sar_dout(void)

{
  ushort uVar1;
  uint uVar2;
  short *in_a2;
  short *unaff_a3;
  uint uVar3;
  short sVar4;
  uint unaff_a7;
  undefined auStack32 [2];
  short sStack30;
  short sStack28;
  short sStack26;
  short sStack24;
  short sStack22;
  short sStack20;
  short sStack18;
  short *psStack16;
  
  memw();
  uVar3 = _DAT_ram_60000d50 & 0xfffffffd;
  memw();
  memw();
  _DAT_ram_60000d50 = uVar3 | 2;
  memw();
  psStack16 = in_a2;
  ets_delay_us(0x19,uVar3,0xfffffffd);
  memw();
  uVar2 = _DAT_ram_60000d50 >> 0x18 & 7;
  while (uVar2 != 0) {
    memw();
    unaff_a7 = _DAT_ram_60000d50 >> 0x18 & 7;
    uVar2 = unaff_a7;
  }
  read_sar_dout(auStack32,uVar3,0xfffffffd,7,_DAT_ram_60000d50 >> 0x18,unaff_a7);
  sStack20 = sStack20 + sStack18;
  uVar1 = (sStack24 + sStack22) * 3;
  if ((ushort)(sStack20 * 3) == 0) {
    sVar4 = (sStack26 + sStack30 + sStack28) * 2 + sStack20 * -3;
  }
  else {
    sVar4 = 0;
  }
  *psStack16 = sVar4;
  if (uVar1 < (ushort)(sStack20 * 3)) {
    sVar4 = 0;
  }
  else {
    sVar4 = uVar1 + sStack20 * -3;
  }
  *unaff_a3 = sVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ram_cal_tos_v60(void)

{
  int in_a2;
  undefined2 unaff_a3;
  uint unaff_a5;
  undefined *unaff_a6;
  undefined *unaff_a7;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_30;
  undefined *puVar7;
  undefined *puStack12;
  int iStack8;
  uint uVar8;
  
  puVar7 = unaff_a6;
  uVar8 = unaff_a5;
  (**(code **)(g_phyFuns + 0xac))(0,1,unaff_a3);
  if (uVar8 == 0) {
    puStack12 = (undefined *)0x0;
    iStack8 = 0;
  }
  else {
    uVar5 = 0x1c;
    uVar4 = 0x40;
    uVar2 = 0x40;
    iVar1 = uVar8 - 4;
    local_30 = 0;
    puStack12 = (undefined *)0x0;
    iStack8 = 0;
    do {
      (**(code **)(g_phyFuns + 0xac))(1,2,uVar4 & 0xffff,unaff_a5,unaff_a6,unaff_a7);
      (**(code **)(g_phyFuns + 0xac))(0,2,uVar2 & 0xffff,unaff_a5,unaff_a6,unaff_a7);
      memw();
      memw();
      _DAT_ram_60000d4c = 0x1113cf3;
      ets_delay_us(2,0x1113cf1,uVar2 & 0xffff,unaff_a5,unaff_a6,unaff_a7);
      memw();
      while ((_DAT_ram_60000d4c >> 0x18 & 1) == 0) {
        memw();
      }
      memw();
      unaff_a7 = (undefined *)0x1;
      memw();
      if ((int)_DAT_ram_60000d4c < 0) {
        uVar3 = (int)(uVar2 - uVar5) >> 0x10;
        uVar2 = 0;
        if (-1 < (int)uVar3) {
          uVar2 = uVar3;
        }
      }
      else {
        uVar3 = (int)(uVar5 + uVar2) >> 0x10;
        uVar2 = 0x7f;
        if ((int)uVar3 < 0x80) {
          uVar2 = uVar3;
        }
      }
      if ((_DAT_ram_60000d4c & 0x40000000) == 0) {
        uVar3 = (int)(uVar5 + uVar4) >> 0x10;
        uVar4 = 0x7f;
        if ((int)uVar3 < 0x80) {
          uVar4 = uVar3;
        }
      }
      else {
        uVar3 = (int)(uVar4 - uVar5) >> 0x10;
        uVar4 = 0;
        if (-1 < (int)uVar3) {
          uVar4 = uVar3;
        }
      }
      unaff_a6 = (undefined *)(uVar5 - 2);
      unaff_a5 = SEXT14((char)((char)((int)uVar5 >> 1) + '\x01'));
      uVar5 = 1;
      if (unaff_a6 != (undefined *)0x0) {
        uVar5 = unaff_a5;
      }
      if (iVar1 <= (int)local_30) {
        unaff_a7 = puStack12 + uVar4;
        unaff_a6 = (undefined *)((int)unaff_a7 >> 0x10);
        iStack8 = (int)(iStack8 + uVar2) >> 0x10;
        puStack12 = unaff_a6;
      }
      local_30 = local_30 + 1 & 0xff;
    } while (uVar8 != local_30);
  }
  iVar6 = (int)(puStack12 + 2) >> 2;
  (**(code **)(g_phyFuns + 0xac))
            (1,2,(uint)(puStack12 + 2) >> 2 & 0xffff,unaff_a5,unaff_a6,unaff_a7);
  iVar1 = (int)(iStack8 + 2U) >> 2;
  (**(code **)(g_phyFuns + 0xac))(0,2,iStack8 + 2U >> 2 & 0xffff,unaff_a5,unaff_a6,unaff_a7);
  (**(code **)(g_phyFuns + 0xac))(1,1,0x7f,unaff_a5,unaff_a6,unaff_a7);
  memw();
  _DAT_ram_60000d4c = 0x1113cf0;
  *puVar7 = (char)iVar1;
  puVar7[1] = (char)iVar6;
  if (in_a2 != 0) {
    memw();
    _DAT_ram_60009864 = _DAT_ram_60009864 & 0x3ffff | iVar6 << 0x19 | iVar1 << 0x12;
    memw();
  }
  return;
}



void ram_get_bb_atten(void)

{
  return;
}



void ram_rfcal_txcap(void)

{
  int iVar1;
  uint unaff_a3;
  uint uVar2;
  int unaff_a4;
  int unaff_a5;
  undefined4 uVar3;
  int unaff_a6;
  undefined4 uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iStack20;
  
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,9,7,0,0);
  uVar3 = 0;
  uVar4 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar5 = 0;
  (**(code **)(g_phyFuns + 0x68))(1);
  uVar8 = 0;
  iStack20 = 3;
  uVar14 = unaff_a3;
  do {
    uVar9 = 0;
    iVar10 = 0;
    if (uVar8 < 3) {
      uVar5 = (uint)(byte)(&DAT_ram_0040c310)[uVar8];
      uVar14 = uVar5;
    }
    pbVar6 = (byte *)(unaff_a6 + uVar8);
    *pbVar6 = 0;
    iVar7 = uVar14 + 1;
    iVar1 = unaff_a4;
    do {
      if (uVar8 == 0) {
        unaff_a3 = 1;
        uVar3 = 3;
        uVar4 = 0;
        uVar5 = uVar9 * 2 + 1 & 0xff;
        (**(code **)(g_phyFuns + 0x9c))(0x6b,2,1,3,0,uVar5,uVar11,uVar12,uVar13);
      }
      else {
        if (uVar8 == 1) {
          unaff_a3 = 2;
          uVar3 = 3;
          uVar4 = 0;
          (**(code **)(g_phyFuns + 0x9c))(0x6b,2,2,3,0,uVar9);
          uVar5 = uVar9;
        }
        else {
          if (uVar8 == 2) {
            unaff_a3 = 2;
            uVar3 = 6;
            uVar4 = 4;
            (**(code **)(g_phyFuns + 0x9c))(0x6b,2,2,6,4,uVar9);
            uVar5 = uVar9;
          }
        }
      }
      unaff_a4 = iVar1;
      (**(code **)(g_phyFuns + 0x70))(iVar1,10,unaff_a3,uVar3,uVar4,uVar5);
      uVar2 = 10;
      if (unaff_a5 != 0) {
        printf("num_k=%d, power_out=%d\n",uVar9,iVar1,uVar3,uVar4,uVar5);
        uVar2 = uVar9;
      }
      if (iVar10 < iVar1) {
        uVar2 = uVar9 * 2 + 1;
        if (uVar8 != 0) {
          uVar2 = uVar9;
        }
        *pbVar6 = (byte)uVar2;
        iVar10 = iVar1;
      }
      uVar9 = uVar9 + 1 & 0xff;
      unaff_a3 = iVar7 - uVar9;
      iVar1 = unaff_a4;
    } while (unaff_a3 != 0);
    if (unaff_a5 != 0) {
      unaff_a3 = (uint)*pbVar6;
      printf("reg_i=%d, indata=%d\n",uVar8,unaff_a3,uVar3,uVar4,uVar5);
      uVar2 = uVar8;
    }
    if (uVar8 == 0) {
      uVar2 = 2;
      unaff_a3 = 1;
      uVar3 = 3;
      uVar4 = 0;
      uVar5 = (uint)*pbVar6;
      (**(code **)(g_phyFuns + 0x9c))(0x6b,2,1,3,0,uVar5);
    }
    else {
      if (uVar8 == 1) {
        uVar2 = 2;
        unaff_a3 = 2;
        uVar3 = 3;
        uVar4 = 0;
        uVar5 = (uint)*pbVar6;
        (**(code **)(g_phyFuns + 0x9c))(0x6b,2,2,3,0,uVar5);
      }
      else {
        if (uVar8 == 2) {
          uVar2 = 2;
          unaff_a3 = 2;
          uVar3 = 6;
          uVar4 = 4;
          uVar5 = (uint)*pbVar6;
          (**(code **)(g_phyFuns + 0x9c))(0x6b,2,2,6,4,uVar5);
        }
      }
    }
    uVar8 = uVar8 + 1 & 0xff;
    iStack20 = iStack20 + -1;
  } while (iStack20 != 0);
  (**(code **)(g_phyFuns + 0x6c))(1,uVar2,unaff_a3,uVar3,uVar4,uVar5);
  return;
}



void ram_rfcal_pwrctrl(void)

{
  int iVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined4 in_a2;
  uint uVar4;
  int unaff_a3;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *unaff_a4;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 unaff_a5;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int unaff_a6;
  undefined1 *puVar14;
  char *unaff_a7;
  char cVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  ushort in_stack_00000000;
  char in_stack_00000004;
  int iStack24;
  
  puVar5 = unaff_a4 + -1;
  uVar10 = (uint)puVar5 & 0xff;
  iStack24 = (int)(char)puVar5;
  if (chip6_phy_init_ctrl[94] == '\0') {
    uVar10 = 0;
  }
  if ((int)uVar10 <= iStack24) {
    iVar6 = 0;
    uVar16 = (uint)in_stack_00000000;
    do {
      uVar11 = (uint)*(byte *)(iStack24 + unaff_a3);
      if (iStack24 < (int)puVar5) {
        iVar6 = (int)(iVar6 + (((byte *)(iStack24 + unaff_a3))[1] - uVar11)) >> 0x10;
      }
      iVar20 = 0;
      iVar1 = 2;
      do {
        uVar17 = unaff_a6 + iVar6 >> 0x10;
        if ((int)uVar17 < 0x65) {
          uVar19 = 0;
          if (-1 < (int)uVar17) {
            uVar19 = uVar17;
          }
        }
        else {
          uVar19 = 100;
        }
        uVar7 = uVar19 & 0xff;
        (**(code **)(g_phyFuns + 0x68))(1,in_a2,uVar7,0,0,0,0,0,0);
        ets_delay_us(2,in_a2,uVar7,0,0,0);
        uVar17 = uVar16;
        (**(code **)(g_phyFuns + 0x2c))(uVar16,in_a2,uVar7,0,0,0);
        uVar4 = uVar16;
        (**(code **)(g_phyFuns + 0x2c))(uVar16,in_a2,uVar7,0,0,0);
        iVar12 = ((int)(uVar17 + uVar4) >> 0x10) + 4 >> 0x13;
        iVar8 = 0;
        if (-1 < iVar12) {
          iVar8 = iVar12;
        }
        iVar18 = (int)((iVar8 >> 0x10) - uVar11) >> 0x10;
        iVar12 = -0x18;
        if (-0x19 < iVar18) {
          iVar12 = iVar18;
        }
        iVar18 = 0x18;
        if (iVar12 < 0x19) {
          iVar18 = iVar12;
        }
        iVar12 = iVar18 >> 0x10;
        if (in_stack_00000004 != '\0') {
          printf("i=%02d  acc=%03d  tgt=%03d  err=%03d  ser=%03d att=%03d\n",iVar20,iVar8 >> 0x10,
                 uVar11,iVar12,iVar6,uVar19);
        }
        if (((((iVar12 == 0) && (0 < iVar20)) || ((iVar12 == -1 && ((iVar1 == 1 || (iVar1 == 0))))))
            || ((uVar19 == 0 && (iVar12 < 0)))) || ((uVar19 == 100 && (0 < iVar12)))) break;
        iVar20 = (int)(char)((char)iVar20 + '\x01');
        if ((2 < iVar12) || (iVar1 = iVar12, iVar12 < -2)) {
          iVar1 = iVar12 - (iVar18 >> 0x12);
        }
        iVar6 = iVar1 + iVar6 >> 0x10;
        iVar1 = iVar12;
      } while (iVar20 != 10);
      cVar15 = (char)uVar19 - (char)unaff_a5;
      pcVar2 = unaff_a7 + iStack24;
      *pcVar2 = cVar15;
      iStack24 = (int)(char)((char)iStack24 + -1);
      if (cVar15 < -0x18) {
        *pcVar2 = -0x18;
      }
    } while ((int)uVar10 <= iStack24);
  }
  iVar6 = 0x32;
  puVar13 = unaff_a4 + (int)unaff_a7;
  puVar14 = (undefined1 *)((int)(char)puVar13[-1] - (int)*unaff_a7);
  if (0x32 < (int)puVar14) {
    puVar14 = (undefined1 *)((char)puVar13[-1] + -0x32);
    *unaff_a7 = (char)puVar14;
  }
  puVar9 = unaff_a4;
  if ((chip6_phy_init_ctrl[94] != '\0') && (1 < (int)unaff_a4)) {
    puVar14 = chip6_sleep_params;
    puVar3 = (undefined1 *)0x0;
    puVar9 = chip6_sleep_params + (int)unaff_a4;
    do {
      iVar6 = (uint)(byte)puVar13[-1] +
              ((uint)(byte)unaff_a4[0x40d59d] - (uint)(byte)puVar3[0x40d59e]);
      puVar3[(int)unaff_a7] = (char)iVar6;
      puVar3 = (undefined1 *)(int)(char)((char)puVar3 + '\x01');
    } while (puVar5 != puVar3);
  }
  (**(code **)(g_phyFuns + 0x6c))(1,iVar6,puVar9,puVar13 + -0x80,puVar14,unaff_a7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ram_rxiq_get_mis(void)

{
  uint uVar1;
  int iVar2;
  char in_a2;
  char cVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_a3;
  uint unaff_a4;
  uint unaff_a5;
  uint unaff_a6;
  int iVar7;
  char *unaff_a7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  char in_stack_00000000;
  
  bVar15 = in_a2 - 2;
  memw();
  iVar12 = _DAT_ram_60000580 >> (bVar15 & 0x1f);
  memw();
  iVar14 = _DAT_ram_6000058c >> (bVar15 & 0x1f);
  uVar11 = iVar12 - iVar14;
  memw();
  iVar8 = _DAT_ram_60000588 >> (bVar15 & 0x1f);
  memw();
  uVar13 = iVar12 + iVar14;
  iVar12 = _DAT_ram_60000584 >> (bVar15 & 0x1f);
  uVar9 = iVar8 + iVar12;
  uVar1 = iVar12 - iVar8;
  uVar6 = uVar13;
  uVar10 = uVar9;
  if ((unaff_a3 ^ unaff_a4) != (unaff_a5 ^ unaff_a6)) {
    uVar6 = uVar11;
    uVar10 = uVar1;
    uVar11 = uVar13;
    uVar1 = uVar9;
  }
  iVar12 = (int)uVar1 >> 0x1f;
  iVar8 = (int)uVar6 >> 0x1f;
  uVar9 = uVar6;
  __muldi3(uVar6,iVar8,uVar6,iVar8,0x60000200);
  uVar13 = uVar1;
  __muldi3(uVar1,iVar12,uVar1,iVar12,0x60000200);
  iVar14 = iVar8 + iVar12;
  uVar13 = uVar9 + uVar13;
  if (uVar13 < uVar9) {
    iVar14 = iVar14 + 1;
  }
  if (iVar14 == 0 && uVar13 == 0) {
    uVar13 = 1;
    iVar14 = 0;
  }
  iVar7 = (int)uVar10 >> 0x1f;
  uVar9 = uVar6;
  __muldi3(uVar6,iVar8,uVar11,(int)uVar11 >> 0x1f,iVar7);
  uVar5 = uVar1;
  __muldi3(uVar1,iVar12,uVar10,iVar7,iVar7);
  iVar2 = iVar8 - iVar12;
  if (uVar9 < uVar9 - uVar5) {
    iVar2 = iVar2 + -1;
  }
  cVar3 = '\0';
  __divdi3(0,(int)(CONCAT44(iVar2,uVar9 - uVar5) >> 0x17),uVar13,iVar14,iVar7);
  cVar4 = (char)(cVar3 + 1 >> 1);
  cVar3 = -cVar4;
  if (unaff_a6 == 0) {
    cVar3 = cVar4;
  }
  *unaff_a7 = cVar3;
  __muldi3(uVar1,iVar12,uVar11,(int)uVar11 >> 0x1f,iVar7);
  __muldi3(uVar6,iVar8,uVar10,iVar7,iVar7);
  iVar12 = iVar12 + iVar8;
  if (uVar1 + uVar6 < uVar1) {
    iVar12 = iVar12 + 1;
  }
  cVar4 = '\0';
  __divdi3(0,(int)(CONCAT44(iVar12,uVar1 + uVar6) >> 0x17),uVar13,iVar14,iVar7);
  iVar8 = cVar4 + 1 >> 1;
  iVar12 = -iVar8;
  if (unaff_a5 == 0) {
    iVar12 = iVar8;
  }
  unaff_a7[1] = (char)iVar12;
  if (in_stack_00000000 != '\0') {
    memw();
    printf("rxiq_get_mis: total_pwr=%d, %d-%d, ",_DAT_ram_600005e4 >> (bVar15 & 0x1f),(int)cVar3,
           (int)(char)iVar12,iVar8);
  }
  return;
}



void ram_rxiq_cover_mg_mp(void)

{
  char cVar1;
  undefined4 in_a2;
  int iVar2;
  int iVar3;
  undefined4 unaff_a3;
  undefined4 unaff_a4;
  undefined2 *unaff_a5;
  int iVar4;
  int unaff_a6;
  char *unaff_a7;
  int iVar5;
  char cVar6;
  char *in_stack_00000000;
  undefined in_stack_00000004;
  undefined in_stack_00000008;
  byte bStack64;
  byte bStack63;
  char cStack62;
  char cStack61;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined2 *puVar10;
  int iStack4;
  
  cVar6 = '\0';
  iVar5 = 0;
  bStack64 = (byte)unaff_a5;
  iStack4 = 2;
  bStack63 = (byte)unaff_a6;
  pcVar9 = unaff_a7;
  puVar10 = unaff_a5;
  do {
    uVar7 = unaff_a4;
    iVar2 = (int)(short)iVar5 * (int)(short)iVar5 + 0x80;
    iVar3 = (int)(char)(cVar6 - (char)((uint)iVar2 >> 8));
    (**(code **)(g_phyFuns + 0xf8))(iVar3,&bStack64,1,in_stack_00000004,unaff_a5,unaff_a7);
    (**(code **)(g_phyFuns + 0xf8))(iVar5,&bStack63,0,in_stack_00000004,unaff_a5,unaff_a7);
    (**(code **)(g_phyFuns + 0x34))
              (1,1 << 0x20 - (' ' - ((byte)in_a2 & 0x1f)) & 0xffff,0,in_stack_00000004,unaff_a5,
               unaff_a7);
    unaff_a5 = (undefined2 *)((uint)bStack64 - (int)puVar10);
    if (unaff_a5 != (undefined2 *)0x0) {
      unaff_a5 = (undefined2 *)0x1;
    }
    bStack64 = (byte)unaff_a5;
    iVar4 = (uint)bStack63 - unaff_a6;
    if (iVar4 != 0) {
      iVar4 = 1;
    }
    bStack63 = (byte)iVar4;
    unaff_a7 = &cStack62;
    unaff_a4 = uVar7;
    uVar8 = unaff_a3;
    (**(code **)(g_phyFuns + 0x48))(in_a2,unaff_a3,uVar7,iVar4,unaff_a5,unaff_a7,in_stack_00000008);
    iVar3 = iVar3 + (iVar2 >> 8);
    cVar6 = cStack62 + (char)iVar3;
    iVar5 = (int)(char)((char)iVar5 - cStack61);
    (**(code **)(g_phyFuns + 0x30))(iVar3,unaff_a3,uVar7,iVar4,unaff_a5,unaff_a7);
    iStack4 = iStack4 + -1;
    unaff_a3 = uVar8;
  } while (iStack4 != 0);
  iVar2 = (int)cStack62;
  (**(code **)g_phyFuns)(iVar2,0,uVar7,iVar4,unaff_a5,unaff_a7);
  if (iVar2 < 5) {
    iVar2 = (int)cStack61;
    (**(code **)g_phyFuns)(iVar2,0,uVar7,iVar4,unaff_a5,unaff_a7);
    if (iVar2 < 5) goto LAB_ram_0040ac14;
  }
  unaff_a7 = (char *)0x4000;
  unaff_a5 = &phy_tx_power_out;
  check_result = check_result | 0x4000;
  rxiq_cover_fail_num = rxiq_cover_fail_num + '\x01';
LAB_ram_0040ac14:
  cVar1 = -0xf;
  if (-0x10 < cVar6) {
    cVar1 = cVar6;
  }
  cVar6 = '\x0f';
  if (cVar1 < '\x10') {
    cVar6 = cVar1;
  }
  iVar2 = -0x1f;
  if (-0x20 < iVar5) {
    iVar2 = iVar5;
  }
  iVar5 = 0x1f;
  if (iVar2 < 0x20) {
    iVar5 = iVar2;
  }
  (**(code **)(g_phyFuns + 0xf8))((int)cVar6,&bStack64,1,in_stack_00000004,unaff_a5,unaff_a7);
  (**(code **)(g_phyFuns + 0xf8))((int)(char)iVar5,&bStack63,0,in_stack_00000004,unaff_a5,unaff_a7);
  *pcVar9 = cVar6;
  *in_stack_00000000 = (char)iVar5;
  return;
}



void ram_rfcal_rxiq(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_a2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 unaff_a3;
  undefined4 unaff_a4;
  undefined *unaff_a5;
  int unaff_a6;
  int iVar8;
  int iVar9;
  byte bStack64;
  byte bStack63;
  undefined uStack62;
  undefined uStack61;
  undefined4 uStack60;
  
  iVar3 = 0x77;
  uStack60 = in_a2;
  (**(code **)(g_phyFuns + 0x94))(0x77,0,0x10,0,0);
  iVar4 = 0x77;
  (**(code **)(g_phyFuns + 0x94))(0x77,0,0xf,6,6);
  iVar5 = 0x77;
  (**(code **)(g_phyFuns + 0x94))(0x77,0,0x18,5,5);
  iVar6 = 0x77;
  (**(code **)(g_phyFuns + 0x94))(0x77,0,0x18,3,3);
  uVar7 = 0x77;
  (**(code **)(g_phyFuns + 0x94))(0x77,0,9,7,0);
  (**(code **)(g_phyFuns + 0x40))(1,0,9,7,0);
  if (iVar4 != 0) {
    iVar4 = 1;
  }
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  bStack64 = (byte)iVar3;
  bStack63 = (byte)iVar4;
  if (unaff_a6 != 0) {
    (**(code **)(g_phyFuns + 0x114))(&bStack64,&bStack63,9,7,0);
  }
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,2,2,1);
  iVar9 = iVar3 - (uint)bStack64;
  iVar8 = iVar4 - (uint)bStack63;
  if (iVar8 != 0) {
    iVar8 = 1;
  }
  if (iVar9 != 0) {
    iVar9 = 1;
  }
  bStack64 = (byte)iVar9;
  bStack63 = (byte)iVar8;
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,7,7,1);
  (**(code **)(g_phyFuns + 0x50))(unaff_a4,0,0x18,7,7,1);
  (**(code **)(g_phyFuns + 0x68))(1,unaff_a3,unaff_a4,0,0,0,0,0,0);
  bVar2 = bStack63;
  bVar1 = bStack64;
  if (iVar6 != 0) {
    iVar6 = 1;
  }
  if (iVar5 != 0) {
    iVar5 = 1;
  }
  (**(code **)(g_phyFuns + 0x10c))(uStack60,bStack64,bStack63,iVar5,iVar6,&uStack62,&uStack61);
  (**(code **)(g_phyFuns + 0x6c))(1,bVar1,bVar2,iVar5,iVar6,&uStack62);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,0,0,iVar3);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0xf,6,6,iVar4);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,5,5,iVar5);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,3,3,iVar6);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,9,7,0,uVar7);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,7,7,0);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x10,2,2,0);
  (**(code **)(g_phyFuns + 0x40))(0,0,0x10,2,2,0);
  *unaff_a5 = uStack62;
  unaff_a5[1] = uStack61;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dpd_scale_set(void)

{
  memw();
  (**(code **)(g_phyFuns + 0x98))
            (0x77,0,8,((int)(char)-(char)_DAT_ram_60000560 - (int)chip6_sleep_params[83]) - 0x18U &
                      0xff,(int)chip6_sleep_params[83]);
  return;
}



void dpd_mem_write(void)

{
  uint in_a2;
  byte unaff_a4;
  
  (**(code **)(g_phyFuns + 0x98))(0x77,0,0x1b);
  (**(code **)(g_phyFuns + 0x98))(0x77,0,5,in_a2 >> 4 & 0xff);
  (**(code **)(g_phyFuns + 0x98))(0x77,0,6,in_a2 & 0xf);
  (**(code **)(g_phyFuns + 0x98))(0x77,0,0xf,unaff_a4 | 4);
  (**(code **)(g_phyFuns + 0x98))(0x77,0,0xf);
  return;
}



void chip_v6_set_sense(void)

{
  return;
}



void chip_v6_get_sense(void)

{
  return;
}



void chip_v6_unset_chanfreq(void)

{
  return;
}



void pm_usec2rtc(void)

{
  uint in_a2;
  int unaff_a3;
  
  if (unaff_a3 == 0) {
    __udivsi3();
  }
  else {
    if (in_a2 < 0x100000) {
      __udivsi3(0);
    }
    else {
      __udivsi3();
    }
  }
  return;
}



void pm_usec2rtc_64(void)

{
  bool bVar1;
  undefined4 in_a2;
  uint unaff_a3;
  int unaff_a4;
  
  if (unaff_a4 == 0) {
    __udivdi3();
  }
  else {
    bVar1 = false;
    if ((0xffffe < unaff_a3) && (unaff_a3 != 0xfffff)) {
      bVar1 = true;
    }
    if (bVar1) {
      __udivdi3();
    }
    else {
      __udivdi3(0,(int)(CONCAT44(unaff_a3,in_a2) >> 0x14));
    }
  }
  return;
}



void pm_rtc2usec(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_set_sleep_cycles(void)

{
  uint in_a2;
  
  memw();
  memw();
  periodic_cal_sat = 5000 < in_a2;
  _DAT_ram_60000704 = in_a2 + _DAT_ram_6000071c;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_sleep_opt(void)

{
  undefined4 in_a2;
  undefined4 uVar1;
  uint unaff_a4;
  int unaff_a5;
  int iVar2;
  undefined4 unaff_a6;
  uint unaff_a7;
  
  if (chip6_phy_init_ctrl[57] == '\0') {
    memw();
    _DAT_ram_60000764 = _DAT_ram_60000764 & 0xfffffffc;
    memw();
    iVar2 = -4;
  }
  else {
    iVar2 = unaff_a5;
    if (chip6_phy_init_ctrl[57] == '\x01') {
      unaff_a6 = 0x20;
      unaff_a4 = unaff_a4 | 0x20;
    }
    else {
      if (chip6_phy_init_ctrl[57] == '\x02') {
        memw();
        unaff_a7 = _DAT_ram_60000764 | 3;
        memw();
        _DAT_ram_60000764 = unaff_a7;
      }
    }
  }
  memw();
  _DAT_ram_60000740 = 0;
  memw();
  memw();
  uVar1 = 0x77;
  _DAT_ram_60000700 = unaff_a4;
  _DAT_ram_60000744 = in_a2;
  (**(code **)(g_phyFuns + 0x90))(0x77,0,0x1c,iVar2,unaff_a6,unaff_a7);
  (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,5,5,1);
  memw();
  _DAT_ram_600005c8 = _DAT_ram_600005c8 & 0xfffcffff | 0x10000;
  memw();
  ets_delay_us(1,0x60000200,0x10000,0xfffcffff,5,1);
  (**(code **)(g_phyFuns + 0x98))(0x77,0,0x1c,uVar1,5,1);
  memw();
  _DAT_ram_600005e8 = _DAT_ram_600005e8 & 0xfe7fffff | 0x800000;
  memw();
  (**(code **)(g_phyFuns + 0x98))(0x62,1,3,1,5,1);
  if (unaff_a5 == 8) {
    (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,0,0,0);
    (**(code **)(g_phyFuns + 0x98))(0x65,4,0,6,0,0);
    memw();
    _DAT_ram_60000710 = 0xd6000000;
  }
  else {
    memw();
    _DAT_ram_60000710 = 0x50000000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_wakeup_opt(void)

{
  uint in_a2;
  uint unaff_a3;
  
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60000718 = _DAT_ram_60000718 & 0xffffffc0 | in_a2;
  _DAT_ram_600007a8 = _DAT_ram_600007a8 & 0xfffffffe | unaff_a3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void get_chip_version(void)

{
  uint uVar1;
  
  if (chip_version == 0xffffffff) {
    memw();
    if ((_DAT_ram_3ff00058 & 0x8000) == 0x8000) {
      memw();
      uVar1 = _DAT_ram_3ff00054;
    }
    else {
      memw();
      uVar1 = _DAT_ram_3ff0005c;
    }
    chip_version = (uVar1 & 0xf000000) >> 0x18;
  }
  return;
}



void pm_sleep_opt_bb_off(void)

{
  int in_a2;
  
  get_chip_version();
  if (in_a2 == 2) {
    if (chip6_phy_init_ctrl[101] == '\x02') {
      pm_sleep_opt(4,0,0x800050);
    }
    else {
      pm_sleep_opt(4,0,0x800000);
    }
  }
  else {
    pm_sleep_opt(4,0,0x800050);
  }
  return;
}



void pm_sleep_opt_bb_on(void)

{
  int in_a2;
  
  get_chip_version();
  if (in_a2 == 2) {
    if (chip6_phy_init_ctrl[101] == '\x02') {
      pm_sleep_opt(0,0,0x800050);
    }
    else {
      pm_sleep_opt(0,0,0x800000);
    }
  }
  else {
    pm_sleep_opt(0,0,0x800050);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_set_pll_xtal_wait_time(void)

{
  int in_a2;
  
  get_chip_version();
  if ((in_a2 == 1) || (in_a2 == 0)) {
    memw();
    _DAT_ram_6000070c = 0xc8064;
  }
  else {
    memw();
    _DAT_ram_6000070c = 0x3203c;
  }
  return;
}



void pm_prepare_to_sleep(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_sdio_nidle(void)

{
  memw();
  memw();
  if ((_DAT_ram_60000318 >> 0x12 & 1) != 0) {
    memw();
    if ((((_DAT_ram_60000b58 != 0x2011) || (memw(), (_DAT_ram_60000b3c >> 0x12 & 3) != 3)) ||
        ((_DAT_ram_60000b3c >> 0x14 & 7) != 2)) ||
       ((((_DAT_ram_60000b3c >> 0x17 & 0x7f) != 0 || (memw(), (_DAT_ram_60000b3c >> 0x12 & 3) != 3))
        || (((_DAT_ram_60000b3c >> 0x14 & 7) != 2 || ((_DAT_ram_60000b3c >> 0x17 & 0x7f) != 0))))))
    {
      return;
    }
    memw();
    memw();
    _DAT_ram_3ff00018 = _DAT_ram_3ff00018 & 0xffefffff;
  }
  return;
}



void chg_lslp_mem_opt_8266(void)

{
  ushort in_a2;
  
  lslp_mem_opt_8266 = in_a2 & 0xf;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_wait4wakeup(void)

{
  int in_a2;
  
  if (((in_a2 == 1) || (in_a2 == 2)) && (software_slp_reject == '\0')) {
    memw();
    while ((_DAT_ram_60000728 & 3) == 0) {
      memw();
    }
    memw();
    hardware_reject = (byte)_DAT_ram_60000728 & 2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_open_rf(void)

{
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_600005c8 = _DAT_ram_600005c8 & 0xfffcffff;
  _DAT_ram_60000700 = 0x1000000;
  _DAT_ram_60000710 = 0xfe000000;
  _DAT_ram_60000744 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_sleep_set_mac(void)

{
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_3ff20004 = _DAT_ram_3ff20004 & 0x7fffffff;
  _DAT_ram_3ff20c74 = _DAT_ram_3ff20c74 & 0xc3fffff | 0xa2800000;
  _DAT_ram_3ff20de0 = 0x3333;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_set_wakeup_mac(void)

{
  if ((((chip6_phy_init_ctrl[53] == '\x01') || (chip6_phy_init_ctrl[53] == '\x03')) ||
      (chip6_phy_init_ctrl[53] == '\x04')) || (chip6_phy_init_ctrl[53] == '\x05')) {
    pm_unmask_bt(chip6_phy_init_ctrl[54]);
  }
  else {
    memw();
    _DAT_ram_3ff20de0 = 0;
  }
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_3ff20004 = _DAT_ram_3ff20004 | 0x80000000;
  _DAT_ram_3ff20c74 = _DAT_ram_3ff20c74 & 0xc3fffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_check_mac_idle(void)

{
  bool bVar1;
  uint unaff_a3;
  uint uVar2;
  
  os_delay_us(0x14);
  uVar2 = 0;
  while ((memw(), (_DAT_ram_3ff20410 & 0xf) != 0 || (memw(), (_DAT_ram_3ff201d0 >> 0xc & 0xf) != 0))
        ) {
    os_delay_us(2,unaff_a3);
    bVar1 = 4999 < uVar2;
    unaff_a3 = uVar2;
    uVar2 = uVar2 + 1 & 0xffff;
    if (bVar1) {
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_set_sleep_btco(void)

{
  byte bVar1;
  
  bVar1 = chip6_phy_init_ctrl[54];
  if ((((chip6_phy_init_ctrl[53] == '\x01') || (chip6_phy_init_ctrl[53] == '\x03')) ||
      (chip6_phy_init_ctrl[53] == '\x04')) || (chip6_phy_init_ctrl[53] == '\x05')) {
    memw();
    _DAT_ram_60000814 = _DAT_ram_60000814 & 0xfffffecf | 0x30;
    memw();
    memw();
    _DAT_ram_60000834 = _DAT_ram_60000834 & 0xfffffecf;
    memw();
    if ((chip6_phy_init_ctrl[53] == '\x01') || (chip6_phy_init_ctrl[53] == '\x03')) {
      if (1 < chip6_phy_init_ctrl[54]) {
        gpio_output_set(1,0,1,0,0x30,chip6_phy_init_ctrl[54]);
        gpio_output_set(0,8,8,0,0x30,bVar1);
      }
    }
    else {
      if (((chip6_phy_init_ctrl[53] == '\x04') || (chip6_phy_init_ctrl[53] == '\x05')) &&
         (1 < chip6_phy_init_ctrl[54])) {
        gpio_output_set(0,1,1,0,chip6_phy_init_ctrl[54]);
        gpio_output_set(8,0,8,0,bVar1);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_set_wakeup_btco(void)

{
  undefined4 unaff_a6;
  uint unaff_a7;
  
  if ((((chip6_phy_init_ctrl[53] == '\x01') || (chip6_phy_init_ctrl[53] == '\x03')) ||
      (chip6_phy_init_ctrl[53] == '\x04')) || (chip6_phy_init_ctrl[53] == '\x05')) {
    if (chip6_phy_init_ctrl[54] < 2) {
      memw();
      _DAT_ram_60000814 = _DAT_ram_60000814 & 0xfffffecf | 0x30;
      memw();
      memw();
      _DAT_ram_60000834 = _DAT_ram_60000834 & 0xfffffecf;
      memw();
    }
    else {
      unaff_a6 = 0x20;
      memw();
      unaff_a7 = _DAT_ram_60000814 & 0xfffffecf | 0x20;
      memw();
      memw();
      _DAT_ram_60000834 = _DAT_ram_60000834 & 0xfffffecf | 0x20;
      memw();
      _DAT_ram_60000814 = unaff_a7;
    }
    if ((chip6_phy_init_ctrl[53] == '\x01') || (chip6_phy_init_ctrl[53] == '\x03')) {
      if (chip6_phy_init_ctrl[54] == 1) {
        gpio_output_set(1,0,1,0,unaff_a6,unaff_a7);
        gpio_output_set(0,8,8,0,unaff_a6,unaff_a7);
      }
      else {
        if (chip6_phy_init_ctrl[54] == 0) {
          gpio_output_set(0,1,1,0,unaff_a6,unaff_a7);
          gpio_output_set(8,0,8,0,unaff_a6,unaff_a7);
        }
      }
    }
    else {
      if ((chip6_phy_init_ctrl[53] == '\x04') || (chip6_phy_init_ctrl[53] == '\x05')) {
        if (chip6_phy_init_ctrl[54] == 1) {
          gpio_output_set(0,1,1,0,unaff_a6,unaff_a7);
          gpio_output_set(8,0,8,0,unaff_a6,unaff_a7);
        }
        else {
          if (chip6_phy_init_ctrl[54] == 0) {
            gpio_output_set(1,0,1,0,unaff_a6,unaff_a7);
            gpio_output_set(0,8,8,0,unaff_a6,unaff_a7);
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_unmask_bt(void)

{
  int in_a2;
  
  if (in_a2 == 0) {
    memw();
    _DAT_ram_3ff20de0 = 0;
    return;
  }
  if (in_a2 == 1) {
    memw();
    _DAT_ram_3ff20de0 = 0x3333;
    return;
  }
  if (in_a2 == 2) {
    memw();
    _DAT_ram_3ff20de0 = 0x40001110;
    return;
  }
  if (in_a2 != 3) {
    if (in_a2 != 4) {
      if (in_a2 == 5) {
        memw();
        _DAT_ram_3ff20de0 = 0x40003660;
      }
      return;
    }
    memw();
    _DAT_ram_3ff20de0 = 0x40003330;
    return;
  }
  memw();
  _DAT_ram_3ff20de0 = 0x40001550;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_wakeup_init(void)

{
  int in_a2;
  uint uVar1;
  undefined4 uVar2;
  int unaff_a3;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  undefined1 *puVar8;
  
  if ((((in_a2 == 2) || (in_a2 == 1)) && (unaff_a3 == 0)) &&
     ((software_slp_reject == '\0' && (hardware_reject == '\0')))) {
    change_bbpll160(0,0);
  }
  memw();
  _DAT_ram_60000d40 = (undefined1 *)((uint)_DAT_ram_60000d40 & 0xfffffff3 | 4);
  memw();
  memw();
  memw();
  if (((in_a2 == 1) || (in_a2 == 2)) || (uVar5 = _DAT_ram_3ff00018 | 0x100000, in_a2 == 8)) {
    memw();
    memw();
    uVar5 = _DAT_ram_3ff00018 | 0x39f0000;
  }
  _DAT_ram_3ff00018 = uVar5;
  uVar6 = 0x80000fff;
  memw();
  _DAT_ram_3ff20c14 = 0x80000fff;
  uVar5 = 0xff3fffff;
  memw();
  _DAT_ram_3ff20c74 = _DAT_ram_3ff20c74 & 0xff3fffff;
  memw();
  puVar8 = _DAT_ram_60000d40;
  if (((in_a2 == 1) || (puVar8 = (undefined1 *)(in_a2 - 2), puVar8 == (undefined1 *)0x0)) ||
     (in_a2 == 8)) {
    sleep_set_rxpbus(0,_DAT_ram_3ff20c74,0x3ff20a00,0xff3fffff,0x80000fff,puVar8);
    (**(code **)(g_phyFuns + 0x98))(0x62,1,3,0xf1,0x80000fff,puVar8);
    uVar2 = 0x62;
    (**(code **)(g_phyFuns + 0x98))(0x62,1,0xb,0x80,0x80000fff,puVar8);
    pm_open_rf(uVar2,1,0xb,0x80,0x80000fff,puVar8);
    if (in_a2 == 8) {
      (**(code **)(g_phyFuns + 0x98))(0x65,4,0,0xc6,0x80000fff,puVar8);
      uVar6 = 0;
      puVar8 = (undefined1 *)0x1;
      (**(code **)(g_phyFuns + 0x9c))(0x6c,2,0,0,0,1);
    }
    uVar5 = 0x8000000;
    uVar1 = chip6_sleep_params._0_4_ | 0x8000000;
    chip6_sleep_params._0_4_ = uVar1;
    register_chipv6_phy(0,uVar1,chip6_sleep_params,0x8000000,uVar6,puVar8);
    ets_delay_us(10,uVar1,chip6_sleep_params,0x8000000,uVar6,puVar8);
    puVar8 = chip6_sleep_params;
    uVar6 = chip6_sleep_params._0_4_ & 0xf7ffffff;
    chip6_sleep_params._0_4_ = uVar6;
  }
  else {
    ets_delay_us(10,_DAT_ram_3ff20c74,0x3ff20a00,0xff3fffff,0x80000fff,puVar8);
  }
  memw();
  uVar4 = _DAT_ram_60009b08 & 0xf7ffffff;
  memw();
  memw();
  uVar1 = _DAT_ram_60009b60 | 1;
  memw();
  memw();
  _DAT_ram_60009b60 = _DAT_ram_60009b60 & 0xfffffffe;
  memw();
  memw();
  _DAT_ram_60009b08 = uVar4;
  if ((_DAT_ram_3ff20c70 >> 1 & 1) != 0) {
    ets_delay_us(2,1,uVar4,uVar5,uVar6,puVar8);
    memw();
    uVar6 = 0x60009a00;
    memw();
    puVar8 = (undefined1 *)0xf0;
    memw();
    uVar5 = _DAT_ram_60009a34 & 0xfffffc00 | 0xf0;
    memw();
    uVar1 = 2;
    _DAT_ram_60009a34 = uVar5;
    ets_delay_us(2,1,uVar4,uVar5,0x60009a00,0xf0);
  }
  get_adc_rand(uVar1,1,uVar4,uVar5,uVar6,puVar8);
  adc_rand_noise = uVar1;
  pm_set_wakeup_btco(uVar1,1,uVar4,uVar5,uVar6,puVar8);
  pm_set_wakeup_mac(uVar1,1,uVar4,uVar5,uVar6,puVar8);
  if (((unaff_a3 == 0) && (SDIO_slp_reject == '\0')) &&
     (((periodic_cal_flag == '\x01' && (periodic_cal_sat == '\x01')) &&
      ((iVar3 = in_a2 + -2, iVar3 == 0 || (uVar4 = in_a2 - 1, uVar4 == 0)))))) {
    periodic_cal_flag = '\0';
    periodic_cal_sat = '\0';
    bVar7 = chip6_phy_init_ctrl[100] >> 1 & 1;
    if ((chip6_phy_init_ctrl[100] >> 1 & 1) == 0) {
      pm_set_sleep_mode(4,iVar3,uVar4,uVar5,uVar6,bVar7);
      periodic_cal(do_pwctrl_flag,iVar3,uVar4,uVar5,uVar6,bVar7);
      pm_wakeup_init(4,0,uVar4,uVar5,uVar6,bVar7);
    }
  }
  sleep_mode_flag = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sleep_opt_8266(void)

{
  undefined4 in_a2;
  undefined4 unaff_a3;
  undefined4 unaff_a4;
  
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60000700 = unaff_a4;
  _DAT_ram_60000710 = unaff_a3;
  _DAT_ram_60000740 = 0;
  _DAT_ram_60000744 = in_a2;
  return;
}



void sleep_opt_bb_on_8266(void)

{
  int in_a2;
  
  get_chip_version();
  if (in_a2 == 2) {
    sleep_opt_8266(0,0,0x800000);
  }
  else {
    sleep_opt_8266(0,0,0x800050);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void sleep_reset_analog_rtcreg_8266(void)

{
  undefined4 uVar1;
  
  memw();
  _DAT_ram_60000724 = 0xffffffff;
  sleep_opt_bb_on_8266();
  uVar1 = 8;
  pm_wakeup_opt(8,0);
  pm_set_pll_xtal_wait_time(uVar1,0);
  pm_set_sleep_cycles(1000,0);
  memw();
  _DAT_ram_60000708 = _DAT_ram_60000708 | 0x100000;
  memw();
  uVar1 = 2;
  pm_wait4wakeup(2,0x100000);
  pm_open_rf(uVar1,0x100000);
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_60000700 = 0x19c06a;
  _DAT_ram_60000704 = 0xfff;
  _DAT_ram_60000708 = 0;
  _DAT_ram_6000070c = 0x640c8;
  _DAT_ram_60000710 = 0xf0000000;
  _DAT_ram_60000718 = 4;
  _DAT_ram_60000720 = 0;
  _DAT_ram_60000740 = 0;
  _DAT_ram_60000744 = 0;
  _DAT_ram_60000748 = 0x20302020;
  _DAT_ram_6000074c = 0x20500000;
  _DAT_ram_60000758 = 0;
  _DAT_ram_6000075c = 7;
  _DAT_ram_60000760 = 7;
  _DAT_ram_60000764 = 0;
  _DAT_ram_60000768 = 0;
  _DAT_ram_60000774 = 0;
  _DAT_ram_60000780 = 0;
  _DAT_ram_60000790 = 0;
  _DAT_ram_60000794 = 0;
  _DAT_ram_60000798 = 0;
  _DAT_ram_6000079c = 0;
  _DAT_ram_600007a0 = 0;
  _DAT_ram_600007a8 = 0;
  _DAT_ram_600007ac = 0;
  _DAT_ram_600007b0 = 0;
  _DAT_ram_600007b4 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void change_bbpll160_sleep(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  memw();
  _DAT_ram_60000724 = 0xffffffff;
  (**(code **)(g_phyFuns + 0x98))(0x6a,2,8,0);
  memw();
  _DAT_ram_6000070c = 0;
  pm_set_sleep_cycles(3,0,8,0);
  uVar1 = _DAT_ram_60000700;
  memw();
  _DAT_ram_60000740 = 0;
  memw();
  _DAT_ram_60000744 = 0;
  memw();
  uVar5 = _DAT_ram_600007a8 & 0xfffffffe;
  memw();
  memw();
  memw();
  _DAT_ram_60000700 = 0x800070;
  _DAT_ram_600007a8 = uVar5;
  pm_wakeup_opt(8,0,0x800070,uVar1,uVar5,0xfffffffe);
  memw();
  uVar7 = _DAT_ram_60000708 | 0x100000;
  if ((chip6_phy_init_ctrl[113] & 1) == 0) {
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0xf,3,3,1);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x18,0,0,1);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,0,0,0);
  }
  else {
    uVar2 = 0xd0000;
    if ((chip6_phy_init_ctrl[113] >> 1 & 1) != 0) {
      uVar2 = 0xc6186;
    }
    (**(code **)(g_phyFuns + 0x7c))
              (1,uVar2,0xc6186,chip6_phy_init_ctrl[113] >> 1 & 1,uVar5,0xfffffffe);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,6,6,1);
    (**(code **)(g_phyFuns + 0x9c))(0x77,0,0x1c,5,5,1);
    ets_delay_us(5,0,0x1c,5,5,1);
  }
  if ((chip6_phy_init_ctrl[113] & 3) == 1) {
    uVar2 = 0x14;
    (**(code **)(g_phyFuns + 0x9c))(0x67,4,4,4,0,0x14);
  }
  else {
    uVar2 = 0x13;
    (**(code **)(g_phyFuns + 0x9c))(0x67,4,4,4,0,0x13);
  }
  uVar6 = 0;
  uVar4 = 4;
  uVar3 = 4;
  if (chip6_phy_init_ctrl[1] == '\x01') {
    (**(code **)(g_phyFuns + 0x98))(0x67,4,1,0x88,0,uVar2);
    uVar3 = 2;
    uVar4 = 0x91;
    (**(code **)(g_phyFuns + 0x98))(0x67,4,2,0x91,0,uVar2);
  }
  else {
    if (chip6_phy_init_ctrl[1] == '\x02') {
      uVar3 = 2;
      uVar4 = 7;
      uVar6 = 5;
      uVar2 = 2;
      (**(code **)(g_phyFuns + 0x9c))(0x67,4,2,7,5,2);
    }
  }
  memw();
  _DAT_ram_60000708 = uVar7;
  pm_wait4wakeup(1,4,uVar3,uVar4,uVar6,uVar2);
  memw();
  _DAT_ram_60000700 = uVar1;
  return;
}



void change_bbpll160(void)

{
  int in_a2;
  
  get_chip_version();
  if (chip6_phy_init_ctrl[1] != '\0') {
    if (chip6_phy_init_ctrl[101] == '\x01') {
      change_bbpll160_sleep(in_a2,chip6_phy_init_ctrl[1]);
    }
    else {
      if (((chip6_phy_init_ctrl[101] == '\0') && (in_a2 != 1)) && (in_a2 != 0)) {
        change_bbpll160_sleep(in_a2,chip6_phy_init_ctrl[1]);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void set_crystal_uart(void)

{
  uint uVar1;
  uint unaff_a3;
  uint uVar2;
  
  uVar1 = chip6_sleep_params._0_4_;
  if (((chip6_phy_init_ctrl[1] != '\0') ||
      (unaff_a3 = (uint)chip6_phy_init_ctrl[113], (chip6_phy_init_ctrl[113] & 1) != 0)) &&
     ((chip6_sleep_params._0_4_ >> 0x1b & 1) == 0)) {
    memw();
    uVar2 = _DAT_ram_60000d40 & 0xfffffff3 | 8;
    memw();
    _DAT_ram_60000d40 = uVar2;
    change_bbpll160_sleep
              (chip6_phy_init_ctrl[1],unaff_a3,chip6_sleep_params._0_4_,uVar2,0x60000a00,8);
    memw();
    if ((((_DAT_ram_60000318 >> 0x12 & 1) != 0) && (memw(), _DAT_ram_60000318 >> 0x1d == 2)) &&
       (memw(), (_DAT_ram_60000820 >> 8 & 1) != 0)) {
      Uart_Init(1,unaff_a3,uVar1,uVar2,0x60000a00,8);
      uart_buff_switch(1,unaff_a3,uVar1,uVar2,0x60000a00,8);
    }
  }
  return;
}



void rtc_set_cpu_80m(void)

{
  set_crystal_uart();
  return;
}


