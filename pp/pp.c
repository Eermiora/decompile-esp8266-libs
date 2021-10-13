typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
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




void esp_upload_ap0_event(void)

{
  esp_upload_event(2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void esf_rx_buf_alloc(void)

{
  undefined4 *puVar1;
  int in_a2;
  
  if ((in_a2 == 8) && (DAT_ram_0040d3a4 != 0)) {
    if (NMIIrqIsOn == '\0') {
      vPortEnterCritical(&NMIIrqIsOn,DAT_ram_0040d3a4);
      memw();
      memw();
      _DAT_ram_3ff20c18 = 0x8000000;
    }
    puVar1 = (undefined4 *)(DAT_ram_0040d3a4 + 0x1c);
    DAT_ram_0040d3a4 = *(int *)(DAT_ram_0040d3a4 + 0x1c);
    *puVar1 = 0;
    if (NMIIrqIsOn == '\0') {
      memw();
      _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
      vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT);
    }
    __bss_start = __bss_start + -1;
  }
  return;
}



void esp_wifi_set_rx_pbuf_mem_type(void)

{
  uint in_a2;
  
  if (in_a2 < 2) {
    DAT_ram_0040ddd8 = (byte)in_a2 & 1;
  }
  return;
}



void esp_wifi_get_rx_pbuf_mem_type(void)

{
  return;
}



void FUN_ram_00400178(void)

{
  int in_a2;
  undefined unaff_a3;
  
  if (*(char *)(in_a2 + 0xd) != '\0') {
    *(undefined *)(in_a2 + 0xd) = 0;
    *(undefined *)(in_a2 + 0xb) = unaff_a3;
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x004002b4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_004001e4(void)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint **in_a2;
  Elf32_Ehdr *pEVar5;
  int unaff_a3;
  uint *puVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  puVar10 = DAT_ram_0040dde0;
  if (unaff_a3 == 0) {
    puVar10 = *in_a2;
  }
  puVar6 = (uint *)puVar10[8];
  uVar14 = (uint)*(ushort *)(puVar10 + 4) + (uint)*(ushort *)((int)puVar10 + 0x12);
  uVar12 = *puVar6 >> 6;
  bVar1 = (uVar12 & 0xc0) == 0x80;
  uVar7 = puVar6[1] >> 0x17;
  uVar15 = puVar10[3];
  if ((*(char *)((int)in_a2 + 0x11) != '\0') && (1 < (byte)(*(char *)((int)in_a2 + 0x11) - 2U))) {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x116,puVar10);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar3 = (ushort)(puVar6[1] >> 0x10);
  uVar8 = uVar3 >> 7;
  if ((uVar12 & (uint)&Elf32_Ehdr_ram_00400000) == 0) {
    if ((*(char *)((int)in_a2 + 0xb) != '\0') || (*(char *)((int)in_a2 + 0xd) != '\0')) {
      *(undefined2 *)(in_a2 + 5) = 0;
      *(undefined2 *)((int)in_a2 + 0x16) = 0;
      *(ushort *)(uVar15 + 2) = uVar8;
      *(undefined *)(in_a2 + 3) = 0;
      bVar2 = false;
      goto LAB_ram_0040035d;
    }
    if (*(short *)(in_a2 + 6) == 0) {
      if (bVar1) {
        uVar12 = *puVar6 >> 2 & 0xf;
        ppGetTxQFirstAvail_Locked(uVar12,puVar6,uVar7,puVar10);
        *(ushort *)(uVar15 + 2) = uVar3 >> 7;
        if (uVar12 != 0) {
          *(ushort *)(uVar15 + 2) = (uVar3 >> 7) + *(short *)(*(int *)(uVar12 + 0x20) + 10);
          goto LAB_ram_004005a4;
        }
      }
      else {
        if (0xf < *(byte *)(puVar6 + 2)) {
          *(ushort *)(uVar15 + 2) = uVar8;
        }
      }
    }
    else {
      *(ushort *)(uVar15 + 2) = uVar8;
      uVar13 = 0x402;
      uVar12 = *(uint *)puVar10[8] >> 6;
      if (((uVar12 & 0x402) == 0) &&
         (uVar13 = 0x480000, (Elf32_Ehdr *)(uVar12 & 0x480000) != &Elf32_Ehdr_ram_00400000)) {
        uVar13 = (uint)*(ushort *)(in_a2 + 6);
        uVar12 = *(uint *)puVar10[8] >> 2 & 0xf;
        uVar4 = (undefined2)uVar12;
        ppCalTxop(uVar12,uVar7,uVar13,puVar10);
        *(undefined2 *)(uVar15 + 2) = uVar4;
      }
      if (uVar7 < *(ushort *)(uVar15 + 2)) {
        *(ushort *)(in_a2 + 5) = *(ushort *)(uVar15 + 2);
        *(undefined *)(in_a2 + 3) = 1;
        *(undefined2 *)((int)in_a2 + 0x16) = 0;
        uVar7 = uVar13;
        goto LAB_ram_004005a4;
      }
      *(undefined2 *)(in_a2 + 5) = 0;
    }
  }
  else {
    *(ushort *)(uVar15 + 2) = uVar8;
LAB_ram_004005a4:
    uVar12 = *(uint *)puVar10[8];
    if ((uVar12 >> 0xe & 1) != 0) {
      RC_GetAckTime(*(undefined *)((uint *)puVar10[8] + 2),uVar12,uVar7,puVar10);
      bVar2 = true;
      goto LAB_ram_0040035d;
    }
  }
  bVar2 = true;
LAB_ram_0040035d:
  uVar7 = *(uint *)puVar10[8];
  iVar9 = 0;
  uVar12 = uVar7 >> 6;
  if (((((uVar12 & 0x402) == 0) && ((Elf32_Ehdr *)(uVar12 & 0x480000) != &Elf32_Ehdr_ram_00400000))
      && (iVar9 = 3, (uVar7 >> 0x1a & 1) == 0)) && (iVar9 = 2, (uVar12 & 0x80000) == 0)) {
    iVar9 = 1;
  }
  uVar12 = (uint)*(ushort *)(uVar15 + 2);
  uVar15 = *puVar10;
  if (unaff_a3 == 0) {
    memw();
    memw();
    *(undefined4 *)(&DAT_ram_3ff20dd4 + (uint)*(byte *)(in_a2 + 1) * 8) = 0;
    uVar13 = *(uint *)puVar10[8];
    uVar7 = 0x200000;
    if (((uVar13 >> 0xf & 1) != 0) && (bVar2)) {
      uVar7 = 0x10200000;
    }
    uVar11 = 0;
    if (((uVar13 >> 0xe & 1) != 0) && (bVar2)) {
      uVar11 = 0x8000000;
    }
    if ((bVar1) || (0xf < *(byte *)((uint *)puVar10[8] + 2))) {
      pEVar5 = (Elf32_Ehdr *)0x0;
    }
    else {
      pEVar5 = &Elf32_Ehdr_ram_00400000;
    }
    memw();
    *(uint *)(&DAT_ram_3ff20dc4 + (uint)*(byte *)(in_a2 + 1) * 8) =
         iVar9 << 0x18 | uVar15 & 0x3ffff | uVar7 | uVar11 | (uint)pEVar5;
    memw();
    *(uint *)(&DAT_ram_3ff20dd0 + (uint)*(byte *)(in_a2 + 1) * 8) = uVar12;
    uVar7 = 0;
    if (0xf < *(byte *)(puVar10[8] + 8)) {
      uVar7 = 0x1000000;
    }
    memw();
    *(uint *)(&DAT_ram_3ff20dc8 + (uint)*(byte *)(in_a2 + 1) * 8) =
         uVar14 & 0xfff | (uint)*(byte *)(puVar10[8] + 0xc) | uVar7;
    uVar7 = (uint)*(byte *)((uint *)puVar10[8] + 2);
    if (0xf < uVar7) {
      uVar12 = 7;
      if (0x17 < uVar7) {
        uVar12 = 0x87;
      }
      uVar14 = 8;
      if ((*(uint *)puVar10[8] >> 6 & (uint)&Elf32_Ehdr_ram_00400000) == 0) {
        uVar14 = 0;
      }
      memw();
      *(uint *)(&DAT_ram_3ff20dcc + (uint)*(byte *)(in_a2 + 1) * 8) =
           uVar7 & 7 | (uVar14 | uVar12) << 0x18;
    }
  }
  else {
    uVar13 = 0;
    if (((uVar7 >> 0xf & 1) != 0) && (bVar2)) {
      uVar13 = 0x10000000;
    }
    uVar11 = 0;
    if (((uVar7 >> 0xe & 1) != 0) && (bVar2)) {
      uVar11 = 0x8000000;
    }
    if ((bVar1) || (0xf < *(byte *)((uint *)puVar10[8] + 2))) {
      pEVar5 = (Elf32_Ehdr *)0x0;
    }
    else {
      pEVar5 = &Elf32_Ehdr_ram_00400000;
    }
    _DAT_ram_3ff20cdc = iVar9 << 0x18 | uVar15 & 0x3ffff | uVar13 | uVar11 | (uint)pEVar5;
    memw();
    memw();
    _DAT_ram_3ff20ce0 = 0;
    if (0xf < *(byte *)(puVar10[8] + 8)) {
      _DAT_ram_3ff20ce0 = 0x1000000;
    }
    _DAT_ram_3ff20ce0 = uVar14 & 0xfff | (uint)*(byte *)(puVar10[8] + 0xc) | _DAT_ram_3ff20ce0;
    memw();
    uVar7 = (uint)*(byte *)((uint *)puVar10[8] + 2);
    _DAT_ram_3ff20ce8 = uVar12;
    if (0xf < uVar7) {
      uVar12 = 7;
      if (0x17 < uVar7) {
        uVar12 = 0x87;
      }
      uVar14 = 8;
      if ((*(uint *)puVar10[8] >> 6 & (uint)&Elf32_Ehdr_ram_00400000) == 0) {
        uVar14 = 0;
      }
      _DAT_ram_3ff20ce4 = uVar7 & 7 | (uVar14 | uVar12) << 0x18;
      memw();
    }
  }
  return;
}



void FUN_ram_004005c4(void)

{
  undefined uVar1;
  undefined *in_a2;
  
  if (DAT_ram_0040dde0 == 0) {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0xf9);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar1 = *in_a2;
  wDev_SetFrameAckType();
  wDev_ClearWaitingQueue(10,uVar1);
  return;
}



void FUN_ram_00400604(void)

{
  int in_a2;
  uint uVar1;
  int unaff_a3;
  
  ppEnqueueTxDone();
  if ((**(uint **)(in_a2 + 0x20) >> 6 & 0x400008) == 8) {
    rcUpdateTxDone(*(undefined4 *)(in_a2 + 0x18),*(uint **)(in_a2 + 0x20),0x400008);
  }
  pp_post(4,0,0x400008);
  if (unaff_a3 != 0) {
    uVar1 = *(uint *)(*(int *)(in_a2 + 0x20) + 4) >> 0x14 & 7;
    if ((&DAT_ram_0040ddf9)[uVar1 * 0x24] == '\0') {
      ppProcessTxQ(uVar1,0,uVar1 * 9);
    }
  }
  return;
}



void FUN_ram_0040065c(void)

{
  int *in_a2;
  uint *puVar1;
  uint unaff_a3;
  undefined4 uVar2;
  undefined4 unaff_a4;
  undefined4 unaff_a5;
  
  while( true ) {
    *in_a2 = *in_a2 + 1;
    puVar1 = *(uint **)(unaff_a3 + 0x20);
    *(char *)((int)puVar1 + 0xf) = (char)unaff_a4;
    uVar2 = unaff_a5;
    if ((*puVar1 >> 6 & 0xc0) == 0x80) {
      uVar2 = 0;
    }
    FUN_ram_00400604(unaff_a3,uVar2);
    if ((**(uint **)(unaff_a3 + 0x20) >> 6 & 0xc0) != 0x80) break;
    unaff_a3 = **(uint **)(unaff_a3 + 0x20) >> 2 & 0xf;
    ppDequeueTxQ(unaff_a3,0x80);
    if (unaff_a3 == 0) {
      return;
    }
  }
  return;
}



void lmacIsActive(void)

{
  return;
}



void lmacIsIdle(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void lmacSetAcParam(void)

{
  int iVar1;
  char cVar2;
  uint in_a2;
  undefined unaff_a3;
  uint unaff_a4;
  uint unaff_a5;
  undefined2 unaff_a6;
  undefined uVar3;
  undefined uVar4;
  uint uVar5;
  
  iVar1 = (in_a2 & 0xff) * 0x24;
  uVar5 = unaff_a5 & 0xff;
  if (NMIIrqIsOn == '\0') {
    vPortEnterCritical(&NMIIrqIsOn,unaff_a3,&NMIIrqIsOn);
    unaff_a5 = 0x8000000;
    memw();
    memw();
    _DAT_ram_3ff20c18 = 0x8000000;
  }
  (&DAT_ram_0040dded)[iVar1] = unaff_a3;
  uVar3 = (undefined)(unaff_a4 & 0xff);
  (&DAT_ram_0040ddef)[iVar1] = uVar3;
  uVar4 = (undefined)uVar5;
  (&DAT_ram_0040ddf0)[iVar1] = uVar4;
  if (uVar5 < (byte)(&DAT_ram_0040ddee)[iVar1]) {
    (&DAT_ram_0040ddee)[iVar1] = uVar4;
  }
  else {
    if ((uint)(byte)(&DAT_ram_0040ddee)[iVar1] < (unaff_a4 & 0xff)) {
      (&DAT_ram_0040ddee)[iVar1] = uVar3;
    }
  }
  cVar2 = NMIIrqIsOn;
  *(undefined2 *)(&DAT_ram_0040de00 + iVar1) = unaff_a6;
  if (cVar2 == '\0') {
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,&NMIIrqIsOn,unaff_a5,unaff_a6);
  }
  return;
}



void GetAccess(void)

{
  return;
}



void lmacDiscardAgedMSDU(void)

{
  int in_a2;
  
  FUN_ram_0040065c(in_a2 + 0x20);
  return;
}



void FUN_ram_004007b4(void)

{
  int *in_a2;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *in_a2;
  if (*(char *)((int)in_a2 + 0x11) != '\x06') {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x2fe);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  *(undefined *)((int)in_a2 + 0x11) = 0;
  *in_a2 = 0;
  uVar2 = **(uint **)(iVar4 + 0x20);
  uVar1 = (*(uint **)(iVar4 + 0x20))[1];
  if ((uVar2 >> 0x1b & 1) == 0) {
    uVar2 = uVar1 >> 8 & 0x3f;
    if (uVar2 < lmacConfMib[9]) {
      if ((uVar1 >> 0xe & 0x3f) < (uint)lmacConfMib[8]) {
        lmacDiscardAgedMSDU();
        return;
      }
      uVar3 = 3;
    }
    else {
      uVar3 = 2;
    }
    FUN_ram_0040065c(in_a2 + 8,iVar4,uVar3,1,uVar2);
  }
  else {
    ppRecordBarRRC(uVar2 >> 2 & 0xf,(uVar1 >> 4 & 0xf) + 2,uVar2);
    pp_post(6,**(uint **)(iVar4 + 0x20) >> 2 & 0xf,uVar2);
  }
  return;
}



void lmacRecycleMPDU(void)

{
  int in_a2;
  int unaff_a3;
  
  *(int *)(in_a2 + 0x1c) = *(int *)(in_a2 + 0x1c) + 1;
  *(undefined *)(*(int *)(unaff_a3 + 0x20) + 0xf) = 1;
  FUN_ram_00400604();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void lmacProcessTxTimeout(void)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  uint unaff_a5;
  uint uVar14;
  uint uVar15;
  uint local_30;
  
  memw();
  memw();
  uVar10 = _DAT_ram_3ff20cc0 & 0xf000ffff;
  memw();
  uVar14 = _DAT_ram_3ff20cc0 >> 0x10 & 0xfff;
  local_30 = 0;
  uVar13 = _DAT_ram_3ff20cc0;
  _DAT_ram_3ff20cc0 = uVar10;
  if (uVar14 != 0) {
    while( true ) {
      uVar10 = -uVar14 & uVar14;
      cVar2 = (char)(uVar10 >> 8);
      bVar3 = cVar2 == '\0';
      bVar4 = bVar3 * (char)uVar10 + !bVar3 * cVar2;
      bVar5 = bVar4 >> 4 == 0;
      bVar4 = bVar5 * (bVar4 & 0xf) + !bVar5 * (bVar4 >> 4);
      bVar6 = (bVar4 >> 2 & 3) == 0;
      uVar10 = 0x1f - (byte)((uVar10 == 0) * ' ' +
                            (uVar10 != 0) *
                            (bVar3 << 3 | 0x10U | bVar5 << 2 | bVar6 << 1 |
                            bVar6 * ((bVar4 >> 1 & 1) == 0) + !bVar6 * ((bVar4 >> 3 & 1) == 0)));
      if ((int)uVar10 < 0) break;
      uVar15 = uVar10 & 0xff;
      iVar1 = uVar15 * 0x24;
      if (NMIIrqIsOn == '\0') {
        vPortEnterCritical(&NMIIrqIsOn,0,uVar13,unaff_a5);
        memw();
        memw();
        _DAT_ram_3ff20c18 = (undefined1 *)0x8000000;
      }
      uVar13 = _DAT_ram_3ff20c74;
      puVar7 = WDEV_INTEREST_EVENT;
      memw();
      _DAT_ram_3ff20c74 = _DAT_ram_3ff20c74 | 0xc0000000;
      memw();
      puVar11 = &NMIIrqIsOn;
      if (NMIIrqIsOn == '\0') {
        memw();
        _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
        vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar13,unaff_a5);
        puVar11 = puVar7;
      }
      uVar8 = 0x22;
      ets_delay_us(0x22,puVar11,uVar13,unaff_a5);
      if (NMIIrqIsOn == '\0') {
        vPortEnterCritical(uVar8,0,&NMIIrqIsOn,unaff_a5);
        memw();
        memw();
        _DAT_ram_3ff20c18 = (undefined1 *)0x8000000;
      }
      puVar9 = (uint *)(&DAT_ram_3ff20dc4 + uVar15 * 8);
      memw();
      memw();
      *puVar9 = *puVar9 & 0xbfffffff;
      unaff_a5 = _DAT_ram_3ff20c74;
      memw();
      _DAT_ram_3ff20c74 = _DAT_ram_3ff20c74 & 0x3fffffff;
      memw();
      iVar12 = *(int *)(&DAT_ram_0040dde8 + iVar1);
      if (((&DAT_ram_0040ddf9)[iVar1] == '\x01') && (uVar15 == 7)) {
LAB_ram_00400988:
        memw();
        unaff_a5 = *puVar9;
        uVar13 = unaff_a5 & 0x7fffffff;
        memw();
        *puVar9 = uVar13;
        (&DAT_ram_0040ddf9)[iVar1] = 6;
        if (iVar12 != 0) {
          FUN_ram_004007b4(&DAT_ram_0040dde8 + iVar1,iVar12,uVar13,unaff_a5);
        }
      }
      else {
        memw();
        uVar13 = *puVar9;
        if ((int)uVar13 < 0) goto LAB_ram_00400988;
        if (iVar12 == 0) {
          if (our_tx_eb != 0) {
            puVar9 = *(uint **)(our_tx_eb + 0x20);
            uVar13 = puVar9[1] >> 0x14 & 7;
            if (uVar13 == (byte)(&DAT_ram_0040ddec)[iVar1]) {
              uVar15 = *puVar9;
              uVar13 = local_30;
              goto LAB_ram_004009d0;
            }
          }
        }
        else {
          puVar9 = *(uint **)(iVar12 + 0x20);
          uVar15 = 0;
          uVar13 = *puVar9;
LAB_ram_004009d0:
          *puVar9 = uVar15 | uVar13;
        }
      }
      if (NMIIrqIsOn == '\0') {
        memw();
        _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
        vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar13,unaff_a5);
      }
      uVar14 = uVar14 & (uint)(0xfffffffefffffffe >> 0x20 - ((byte)uVar10 & 0x1f));
    }
  }
  return;
}



void lmacProcessAllTxTimeout(void)

{
  pp_post(0xe,0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void lmacMSDUAged(void)

{
  memw();
  return;
}



void lmacProcessRtsStart(void)

{
  undefined in_a2;
  
  DAT_ram_0040dde4 = in_a2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void lmacTxFrame(void)

{
  int iVar1;
  char cVar2;
  int in_a2;
  uint *puVar3;
  uint unaff_a3;
  uint uVar4;
  uint uVar5;
  uint unaff_a6;
  int *piVar6;
  
  iVar1 = (unaff_a3 & 0xff) * 0x24;
  piVar6 = (int *)(&DAT_ram_0040dde8 + iVar1);
  cVar2 = (&DAT_ram_0040ddf9)[iVar1];
  if ((cVar2 == '\x03') || (cVar2 == '\0')) {
    if (cVar2 != '\x04') {
      *piVar6 = in_a2;
      if (in_a2 == 0) {
        ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x646);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if ((uint)lmacConfMib._10_2_ <
          (uint)*(ushort *)(in_a2 + 0x12) + (uint)*(ushort *)(in_a2 + 0x10)) {
        uVar4 = **(uint **)(in_a2 + 0x20);
        if ((uVar4 >> 7 & 1) == 0) {
          unaff_a6 = 0x100;
          **(uint **)(in_a2 + 0x20) = uVar4 & 0x3f;
        }
      }
      puVar3 = *(uint **)(in_a2 + 0x20);
      uVar4 = *puVar3;
      uVar5 = uVar4 >> 6;
      if (((uVar4 >> 0x12 & 1) != 0) && ((&DAT_ram_0040ddf9)[iVar1] == '\x03')) {
        unaff_a6 = puVar3[1] >> 4 & 0xf;
        if (2 < unaff_a6) {
          unaff_a6 = 0x100;
          uVar5 = 0xfff03fff;
          *puVar3 = uVar4 & 0x3f;
          uVar4 = 0xffffc0ff;
          puVar3[1] = puVar3[1] & 0xfff000ff;
        }
      }
      FUN_ram_004001e4(piVar6,0,uVar4,uVar5,unaff_a6);
      goto LAB_ram_00400b54;
    }
  }
  else {
    if (cVar2 != '\x04') {
      ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x63e);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  if (in_a2 != *piVar6) {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x641);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
LAB_ram_00400b54:
  uVar4 = _DAT_ram_3ff20e44;
  memw();
  (&DAT_ram_0040ddf9)[iVar1] = 1;
  uVar5 = (1 << 0x20 - (' ' - ((&DAT_ram_0040ddee)[iVar1] & 0x1f))) - 1;
  wDev_EnableTransmit((&DAT_ram_0040ddec)[iVar1],(&DAT_ram_0040dded)[iVar1],uVar4 & 0xffff & uVar5,
                      uVar5,unaff_a6);
  return;
}



void FUN_ram_00400b88(void)

{
  undefined uVar1;
  char cVar2;
  char cVar3;
  int *in_a2;
  uint *puVar4;
  int unaff_a3;
  int iVar5;
  uint uVar6;
  
  iVar5 = *in_a2;
  puVar4 = *(uint **)(iVar5 + 0x20);
  uVar6 = *puVar4 >> 6 & 0x20000;
  if (uVar6 != 0) {
    *in_a2 = 0;
    *(undefined *)((int)in_a2 + 0x11) = 0;
    lmacDiscardAgedMSDU();
    return;
  }
  if (unaff_a3 == 0) {
    if (*(char *)((int)in_a2 + 0xb) == '\0') {
      FUN_ram_00400178();
      rcGetRate(*(undefined4 *)(*in_a2 + 0x18),*(undefined4 *)(*in_a2 + 0x20),0x20000,iVar5);
      goto LAB_ram_00400c40;
    }
    cVar2 = *(char *)(puVar4 + 2);
    *(ushort *)((int)in_a2 + 0x16) = (ushort)(puVar4[1] >> 0x17);
    rcGetRate(*(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x20),0x20000,iVar5);
    cVar3 = *(char *)(*(int *)(*in_a2 + 0x20) + 8);
    if (cVar3 != cVar2) {
      ppCalFrameTimes(*in_a2,cVar3,0x20000,iVar5);
    }
    *(ushort *)((int)in_a2 + 0x16) =
         (*(short *)((int)in_a2 + 0x16) + *(short *)(*(int *)(*in_a2 + 0x20) + 10)) -
         (ushort)((uint)*(undefined4 *)(*(int *)(*in_a2 + 0x20) + 4) >> 0x17);
    FUN_ram_004001e4();
    *(undefined *)((int)in_a2 + 0x11) = 1;
    uVar1 = *(undefined *)(in_a2 + 1);
    uVar6 = 0;
  }
  else {
    if (*(char *)((int)in_a2 + 0xb) == '\0') {
      FUN_ram_00400178();
LAB_ram_00400c40:
      lmacTxFrame(*in_a2,*(undefined *)(in_a2 + 1),0x20000,iVar5);
      return;
    }
    Tx_Copy2Queue(*(undefined *)(in_a2 + 1));
    *(undefined *)((int)in_a2 + 0x11) = 1;
    uVar1 = *(undefined *)(in_a2 + 1);
  }
  wDev_EnableTransmit(uVar1,uVar6,uVar6,iVar5);
  return;
}



void FUN_ram_00400c70(void)

{
  char cVar1;
  undefined uVar2;
  int **in_a2;
  int *piVar3;
  uint uVar4;
  int unaff_a3;
  uint uVar5;
  undefined4 uVar6;
  int **ppiVar7;
  uint unaff_a5;
  uint unaff_a6;
  uint unaff_a7;
  int *piVar8;
  int **ppiVar9;
  uint uVar10;
  uint local_40;
  undefined4 uStack60;
  undefined2 uStack56;
  undefined auStack54 [6];
  
  piVar3 = our_tx_eb;
  cVar1 = *(char *)((int)in_a2 + 0x11);
  ppiVar9 = in_a2;
  if (unaff_a3 == 0) {
    if (cVar1 != '\x06') {
      if (cVar1 != '\x05') {
        ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x3d2);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      *(undefined *)((int)in_a2 + 0x11) = 0;
      ppiVar7 = DAT_ram_0040dde0;
      if (our_tx_eb == (int *)0x0) {
        ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x396);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if (DAT_ram_0040dde0 == (int **)0x0) {
        if (*in_a2 == (int *)0x0) {
          if ((*(uint *)our_tx_eb[8] >> 6 & 0x80000) == 0) {
            FUN_ram_00400178();
            if (*(char *)((int)in_a2 + 0xb) != '\0') {
              *(undefined *)((int)in_a2 + 0xb) = 0;
            }
            *(undefined *)((int)in_a2 + 0x12) = 3;
            lmacRecycleMPDU();
            local_40 = unaff_a5;
          }
          else {
            wDev_GetBAInfo(auStack54,&uStack56,&uStack60,&local_40);
            uVar4 = *(uint *)our_tx_eb[8];
            unaff_a6 = uVar4 >> 6 & 0x200000;
            if (unaff_a6 != 0) {
              unaff_a6 = (((uint *)our_tx_eb[8])[1] >> 4 & 0xf) + 1;
            }
            ppTxqUpdateBitmap(uVar4 >> 2 & 0xf,uStack56,uStack60,local_40,unaff_a6);
            pp_post(6,*(uint *)our_tx_eb[8] >> 2 & 0xf,uStack60,local_40,unaff_a6);
            FUN_ram_00400178();
            *(undefined *)((int)in_a2 + 0x12) = 1;
          }
          ppiVar7 = (int **)0x0;
          unaff_a5 = local_40;
          ppiVar9 = ppiVar7;
        }
        else {
          FUN_ram_00400178();
          *(undefined *)((int)in_a2 + 0x11) = 1;
          *(undefined *)((int)in_a2 + 0x12) = 4;
          lmacRecycleMPDU();
          ppiVar9 = (int **)0x1;
        }
      }
      else {
        unaff_a5 = *(uint *)our_tx_eb[8] >> 6 & 0x80000;
        DAT_ram_0040dddc = 0x94;
        if (unaff_a5 == 0) {
          DAT_ram_0040dddc = 0xd4;
        }
        FUN_ram_00400178();
        uVar2 = (undefined)unaff_a3;
        *in_a2 = (int *)ppiVar7;
        Tx_Copy2Queue(*(undefined *)(in_a2 + 1),1);
        *(undefined *)((int)in_a2 + 0x11) = 1;
        *(undefined *)((int)in_a2 + 0x12) = uVar2;
        lmacRecycleMPDU();
        ppiVar7 = (int **)0x1;
        ppiVar9 = ppiVar7;
      }
      goto LAB_ram_00401028;
    }
    *(undefined *)((int)in_a2 + 0x11) = 0;
    piVar3 = our_tx_eb;
    piVar8 = *in_a2;
    if (our_tx_eb == (int *)0x0) {
      if ((piVar8 == (int *)0x0) || (DAT_ram_0040dde0 != (int **)0x0)) {
        ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x365);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      ppiVar9 = (int **)(uint)*(byte *)((int)in_a2 + 0xb);
      if (ppiVar9 == (int **)0x0) {
        FUN_ram_00400178();
      }
      else {
        piVar3 = (int *)(uint)*(byte *)(in_a2 + 3);
        if (piVar3 != (int *)0x0) {
          piVar3 = (int *)(*(uint *)piVar8[8] >> 2 & 0xf);
          ppFetchTxQFirstAvail(piVar3);
        }
        *in_a2 = piVar3;
        ppiVar9 = (int **)*in_a2;
        if (ppiVar9 == (int **)0x0) {
          *(undefined *)((int)in_a2 + 0xb) = 0;
        }
        else {
          ppiVar9 = in_a2;
          FUN_ram_00400b88();
        }
      }
      uVar2 = 9;
      piVar3 = piVar8;
LAB_ram_00400d75:
      *(undefined *)((int)in_a2 + 0x12) = uVar2;
    }
    else {
      if (DAT_ram_0040dde0 == (int **)0x0) {
        if (piVar8 == (int *)0x0) {
          FUN_ram_00400178();
          if (*(char *)((int)in_a2 + 0xb) != '\0') {
            *(char *)((int)in_a2 + 0xb) = (char)piVar8;
          }
          uVar2 = 10;
          goto LAB_ram_00400d8f;
        }
        FUN_ram_00400178();
        *(undefined *)((int)in_a2 + 0x11) = 1;
        *(undefined *)((int)in_a2 + 0x12) = 0xd;
        ppiVar9 = (int **)0x1;
      }
      else {
        if (piVar8 != (int *)0x0) {
          ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x36a);
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        unaff_a5 = 0x94;
        unaff_a6 = *(uint *)our_tx_eb[8] >> 6 & 0x80000;
        uVar6 = 0xd4;
        if (unaff_a6 != 0) {
          uVar6 = 0x94;
        }
        ppiVar7 = (int **)&DAT_ram_0040dde0;
        FUN_ram_004005c4(in_a2 + 4,uVar6,&DAT_ram_0040dde0,0x94,unaff_a6);
        if ((*(uint *)piVar3[8] >> 6 & 0xc0) != 0x80) {
          *in_a2 = *ppiVar7;
          FUN_ram_00400b88();
          uVar2 = 0xb;
          goto LAB_ram_00400d75;
        }
        cVar1 = *(char *)((int)in_a2 + 0xb);
        if (cVar1 == '\0') {
          FUN_ram_00400178();
        }
        else {
          *(char *)((int)in_a2 + 0xb) = (char)piVar8;
        }
        ppRollBackTxQ(DAT_ram_0040dde0,cVar1,ppiVar7,0x94,unaff_a6);
        uVar2 = 0xc;
LAB_ram_00400d8f:
        *(undefined *)((int)in_a2 + 0x12) = uVar2;
        ppiVar9 = (int **)0x0;
      }
    }
    uVar4 = *(uint *)piVar3[8];
    uVar5 = ((uint *)piVar3[8])[1];
    uVar10 = uVar4 >> 6 & 0x200000;
    if (uVar10 == 0) {
      unaff_a7 = uVar5 >> 8 & 0x3f;
      if (unaff_a7 < lmacConfMib[9]) {
        if ((uVar5 >> 0xe & 0x3f) < (uint)lmacConfMib[8]) {
          uVar6 = 4;
        }
        else {
          uVar6 = 3;
        }
      }
      else {
        uVar6 = 2;
      }
      unaff_a5 = 1;
      if (*(char *)((int)in_a2 + 0x11) != '\0') {
        unaff_a5 = uVar10;
      }
      FUN_ram_0040065c(in_a2 + 8,piVar3,uVar6,unaff_a5,unaff_a5,unaff_a7);
      unaff_a6 = unaff_a5;
    }
    else {
      ppRecordBarRRC(uVar4 >> 2 & 0xf,(uVar5 >> 4 & 0xf) + 2,0x200000,unaff_a5,unaff_a6);
      pp_post(6,*(uint *)piVar3[8] >> 2 & 0xf,0x200000,unaff_a5,unaff_a6);
    }
  }
  else {
    if (1 < (byte)(cVar1 - 1U)) {
      ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x3d8);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (our_tx_eb == (int *)0x0) {
      *(undefined *)((int)in_a2 + 0x11) = 3;
      FUN_ram_00400b88();
      uVar2 = 5;
    }
    else {
      if (DAT_ram_0040dde0 == (int **)0x0) {
        ppiVar7 = (int **)*in_a2;
        if (ppiVar7 != (int **)0x0) {
          ets_printf("%s %u\n",&DAT_ram_0040b8e4,999);
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        if ((((*(uint *)our_tx_eb[8] >> 0x1c & 1) != 0) &&
            (uVar4 = ((uint *)our_tx_eb[8])[1] >> 4 & 0xf, uVar4 != 0)) &&
           ((unaff_a5 = (uint)lmacConfMib._10_2_, ppiVar9 = ppiVar7,
            unaff_a5 < (uint)*(ushort *)((int)our_tx_eb + 0x12) + (uint)*(ushort *)(our_tx_eb + 4)
            || (2 < uVar4)))) goto LAB_ram_00401028;
        *(undefined *)((int)in_a2 + 0x11) = 3;
        *in_a2 = piVar3;
        if (*(char *)((int)in_a2 + 0xb) != '\0') {
          *(undefined *)((int)in_a2 + 0xb) = 0;
        }
        ppiVar9 = in_a2;
        FUN_ram_00400b88();
        uVar2 = 7;
      }
      else {
        unaff_a5 = *(uint *)our_tx_eb[8] >> 6 & 0x80000;
        uVar6 = 0xd4;
        if (unaff_a5 != 0) {
          uVar6 = 0x94;
        }
        FUN_ram_004005c4(in_a2 + 4,uVar6,0x94,unaff_a5);
        ppRollBackTxQ(DAT_ram_0040dde0,uVar6,0x94,unaff_a5);
        *in_a2 = our_tx_eb;
        *(undefined *)((int)in_a2 + 0x11) = 3;
        FUN_ram_00400b88();
        uVar2 = 6;
      }
    }
    *(undefined *)((int)in_a2 + 0x12) = uVar2;
  }
  ppiVar7 = (int **)0x0;
LAB_ram_00401028:
  our_tx_eb = (int *)0x0;
  if (ppiVar7 == (int **)0x0) {
    DAT_ram_0040dde0 = ppiVar7;
  }
  if (ppiVar9 == (int **)0x0) {
    DAT_ram_0040dde4 = 8;
  }
  if (*(char *)((int)in_a2 + 0xd) == '\0') {
    our_tx_eb = (int *)0x0;
    return;
  }
  ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x3ff,unaff_a5,unaff_a6,unaff_a7);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void lmacProcessTxSuccess(void)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined unaff_a3;
  uint *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar3 = our_tx_eb;
  if (7 < DAT_ram_0040dde4) {
    return;
  }
  iVar1 = (uint)DAT_ram_0040dde4 * 0x24;
  if (our_tx_eb == 0) {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x2b5);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((&DAT_ram_0040ddf9)[iVar1] != '\x02') {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x2b6,(&DAT_ram_0040ddf9)[iVar1]);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  bVar2 = (&DAT_ram_0040ddef)[iVar1];
  uVar8 = (uint)bVar2;
  uVar9 = **(uint **)(our_tx_eb + 0x20) >> 6;
  if (((uVar9 & 0x402) == 0) && ((Elf32_Ehdr *)(uVar9 & 0x480000) != &Elf32_Ehdr_ram_00400000)) {
    uVar9 = uVar9 & 0x100;
    (&DAT_ram_0040ddee)[iVar1] = bVar2;
    if (uVar9 == 0) {
      (&DAT_ram_0040ddf1)[iVar1] = 0;
    }
    else {
      (&DAT_ram_0040ddf1)[iVar1] = 0;
      (&DAT_ram_0040ddf2)[iVar1] = 0;
    }
    uVar7 = *(uint *)(iVar3 + 0x20);
    *(undefined *)(uVar7 + 9) = unaff_a3;
  }
  else {
    (&DAT_ram_0040ddee)[iVar1] = bVar2;
    (&DAT_ram_0040ddf1)[iVar1] = 0;
    (&DAT_ram_0040ddf2)[iVar1] = 0;
    uVar7 = 0x7f;
    *(undefined *)(*(int *)(iVar3 + 0x20) + 9) = 0x7f;
  }
  puVar4 = *(uint **)(iVar3 + 0x20);
  uVar6 = *puVar4;
  if ((uVar6 >> 0xb & 1) != 0) {
    uVar6 = puVar4[1];
    uVar7 = uVar6 >> 4 & 0xf;
    if (uVar7 < 2) {
      uVar8 = 0xffffff0f;
      uVar7 = 0;
      uVar6 = uVar6 & 0xffffff0f;
      puVar4[1] = uVar6;
      uVar5 = 1;
      goto LAB_ram_00401133;
    }
  }
  (&DAT_ram_0040ddf9)[iVar1] = 5;
  uVar5 = 0;
LAB_ram_00401133:
  FUN_ram_00400c70(&DAT_ram_0040dde8 + iVar1,uVar5,uVar6,uVar7,uVar8,uVar9);
  return;
}



void FUN_ram_00401144(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int in_a2;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  int unaff_a3;
  undefined4 uVar7;
  uint unaff_a4;
  uint uVar8;
  uint uVar9;
  
  bVar1 = lmacConfMib[9];
  if (unaff_a3 == 0) {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x470);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (*(byte *)(in_a2 + 9) < lmacConfMib[9]) {
    *(byte *)(in_a2 + 9) = *(byte *)(in_a2 + 9) + 1;
  }
  if (*(byte *)(in_a2 + 9) < bVar1) {
    if (*(byte *)(in_a2 + 8) <= *(byte *)(in_a2 + 6)) goto LAB_ram_00401196;
    cVar3 = *(byte *)(in_a2 + 6) + 1;
  }
  else {
    cVar3 = *(char *)(in_a2 + 7);
  }
  *(char *)(in_a2 + 6) = cVar3;
LAB_ram_00401196:
  puVar4 = *(uint **)(unaff_a3 + 0x20);
  uVar9 = puVar4[1];
  uVar8 = uVar9 & 0xffffc0ff;
  puVar4[1] = uVar8;
  bVar2 = DAT_ram_0040dde4;
  bVar1 = *(byte *)(in_a2 + 4);
  if ((bVar1 == DAT_ram_0040dde4) &&
     ((unaff_a4 == 0 ||
      ((uVar8 = uVar8 >> 4 & 0xf, uVar8 < ((uVar9 >> 8 & 0x3f) + 1 & 0x3f) &&
       ((*puVar4 >> 0x1c & 1) == 0)))))) {
    uVar8 = 0xffffff0f;
    unaff_a4 = 0;
    puVar4[1] = puVar4[1] & 0xffffff0f;
  }
  bVar6 = *(char *)(in_a2 + 0x11) - 1;
  if (bVar6 < 2) {
    rcReachRetryLimit(puVar4,bVar6,unaff_a4,uVar8,bVar2,bVar1);
    if (((puVar4 == (uint *)0x0) &&
        ((*(uint *)(*(int *)(unaff_a3 + 0x20) + 4) >> 8 & 0x3f) < (uint)lmacConfMib[9])) &&
       (iVar5 = unaff_a3, lmacMSDUAged(), iVar5 == 0)) {
      unaff_a4 = (uint)*(byte *)(in_a2 + 4);
      if (unaff_a4 != DAT_ram_0040dde4) {
        if (*(char *)(in_a2 + 0x11) == '\x01') {
          *(undefined *)(in_a2 + 0x11) = 4;
          FUN_ram_00400b88();
          return;
        }
        ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x4a4,uVar8,bVar2,bVar1);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if ((our_tx_eb == unaff_a3) && ((**(uint **)(unaff_a3 + 0x20) >> 6 & 0x600000) == 0)) {
        bVar6 = *(byte *)(*(int *)(unaff_a3 + 0xc) + 1);
        unaff_a4 = (uint)bVar6;
        *(byte *)(*(int *)(unaff_a3 + 0xc) + 1) = bVar6 | 8;
      }
      uVar7 = 1;
    }
    else {
      *(undefined *)(in_a2 + 0x11) = 6;
      if (*(byte *)(in_a2 + 4) != DAT_ram_0040dde4) {
        FUN_ram_004007b4();
        return;
      }
      uVar7 = 0;
    }
    FUN_ram_00400c70(in_a2,uVar7,unaff_a4,uVar8,bVar2,bVar1);
    return;
  }
  ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x481,uVar8,bVar2,bVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void lmacProcessCtsTimeout(void)

{
  int iVar1;
  uint in_a2;
  int iVar2;
  
  iVar1 = (in_a2 & 0xff) * 0x24;
  if ((&DAT_ram_0040ddf9)[iVar1] == '\x01') {
    iVar2 = *(int *)(&DAT_ram_0040dde8 + iVar1);
    if (iVar2 == 0) {
      ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x524);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    FUN_ram_00401144(&DAT_ram_0040dde8 + iVar1,iVar2,1);
  }
  return;
}



void lmacProcessTxRtsError(void)

{
  uint in_a2;
  uint uVar1;
  uint unaff_a3;
  uint uVar2;
  
  uVar2 = in_a2 & 0xff;
  uVar1 = unaff_a3 & 0xff;
  if (DAT_ram_0040dde4 < 8) {
    if (uVar1 != DAT_ram_0040dde4) {
      ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x554);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (uVar2 < 0x12) {
      if (uVar2 < 0x10) {
        if ((uVar2 == 1) || (uVar2 == 3)) {
          lmacProcessCtsTimeout(uVar1,0x11,uVar2);
          return;
        }
LAB_ram_0040134a:
        printf("tx rts error 0x%x\n",uVar2,uVar2);
        ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x567);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
    else {
      if (uVar2 != 0xc0) goto LAB_ram_0040134a;
    }
    (&DAT_ram_0040ddf9)[uVar1 * 0x24] = 6;
    FUN_ram_00400c70(&DAT_ram_0040dde8 + uVar1 * 0x24,0,uVar2);
  }
  return;
}



void FUN_ram_0040136c(void)

{
  char cVar1;
  int in_a2;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  bVar3 = lmacConfMib[8];
  if (*(byte *)(in_a2 + 10) < lmacConfMib[8]) {
    *(byte *)(in_a2 + 10) = *(byte *)(in_a2 + 10) + 1;
  }
  if (*(byte *)(in_a2 + 10) < bVar3) {
    if (*(byte *)(in_a2 + 6) < *(byte *)(in_a2 + 8)) {
      cVar1 = *(byte *)(in_a2 + 6) + 1;
      goto LAB_ram_004013a8;
    }
  }
  else {
    cVar1 = *(char *)(in_a2 + 7);
LAB_ram_004013a8:
    *(char *)(in_a2 + 6) = cVar1;
  }
  iVar2 = *(int *)(our_tx_eb + 0x20);
  uVar5 = *(uint *)(iVar2 + 4);
  *(uint *)(iVar2 + 4) = uVar5 & 0xfff03fff;
  uVar7 = (uint)*(byte *)(in_a2 + 4);
  uVar6 = (uint)DAT_ram_0040dde4;
  if (uVar7 == uVar6) {
    uVar7 = 0xffffff0f;
    uVar6 = 0;
    *(uint *)(iVar2 + 4) = uVar5 & 0xfff03f0f;
  }
  bVar3 = *(char *)(in_a2 + 0x11) - 1;
  if (1 < bVar3) {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x4f8,uVar7);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  rcReachRetryLimit(iVar2,bVar3,uVar6,uVar7);
  if (iVar2 == 0) {
    uVar6 = *(uint *)(*(int *)(our_tx_eb + 0x20) + 4) >> 0xe & 0x3f;
    if ((uVar6 < lmacConfMib[8]) &&
       (iVar2 = our_tx_eb, lmacMSDUAged(our_tx_eb,(uint)lmacConfMib[8],uVar6,uVar7), iVar2 == 0)) {
      uVar6 = (uint)*(byte *)(in_a2 + 4);
      if (uVar6 != DAT_ram_0040dde4) {
        if (*(char *)(in_a2 + 0x11) == '\x01') {
          *(undefined *)(in_a2 + 0x11) = 4;
          FUN_ram_00400b88();
          return;
        }
        ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x50e,uVar7);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      if ((**(uint **)(our_tx_eb + 0x20) >> 0x1c & 1) == 0) {
        bVar3 = *(byte *)(*(int *)(our_tx_eb + 0xc) + 1);
        uVar6 = (uint)bVar3;
        *(byte *)(*(int *)(our_tx_eb + 0xc) + 1) = bVar3 | 8;
      }
      uVar4 = 1;
      goto LAB_ram_00401471;
    }
  }
  *(undefined *)(in_a2 + 0x11) = 6;
  if (*(byte *)(in_a2 + 4) != DAT_ram_0040dde4) {
    FUN_ram_004007b4();
    return;
  }
  uVar4 = 0;
LAB_ram_00401471:
  FUN_ram_00400c70(in_a2,uVar4,uVar6,uVar7);
  return;
}



void lmacProcessCollision(void)

{
  int iVar1;
  uint in_a2;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (7 < (in_a2 & 0xff)) {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x44c);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  iVar1 = (in_a2 & 0xff) * 0x24;
  piVar2 = (int *)(&DAT_ram_0040dde8 + iVar1);
  iVar3 = *piVar2;
  if (iVar3 != 0) {
    if ((&DAT_ram_0040ddf9)[iVar1] != '\x01') {
      ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x454);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    uVar5 = **(uint **)(iVar3 + 0x20) >> 6;
    if ((uVar5 & 0x300) == 0) {
      uVar4 = (uint)*(ushort *)(iVar3 + 0x12) + (uint)*(ushort *)(iVar3 + 0x10);
      uVar5 = (uint)lmacConfMib._10_2_;
      if (uVar5 < uVar4) {
        FUN_ram_0040136c(piVar2,iVar3,uVar4,uVar5);
        return;
      }
    }
    FUN_ram_00401144(piVar2,iVar3,1,uVar5);
  }
  return;
}



void lmacProcessCollisions(void)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint in_a2;
  uint uVar7;
  short sVar9;
  int iVar8;
  uint uVar10;
  
  wDev_GetTxqCollisions();
  uVar10 = in_a2;
  if (in_a2 != 0) {
    while( true ) {
      uVar7 = -uVar10 & uVar10;
      sVar9 = (short)(uVar7 >> 0x10);
      bVar1 = sVar9 == 0;
      sVar9 = (ushort)bVar1 * (short)uVar7 + (ushort)!bVar1 * sVar9;
      cVar2 = (char)((ushort)sVar9 >> 8);
      bVar3 = cVar2 == '\0';
      bVar4 = bVar3 * (char)sVar9 + !bVar3 * cVar2;
      bVar5 = bVar4 >> 4 == 0;
      bVar4 = bVar5 * (bVar4 & 0xf) + !bVar5 * (bVar4 >> 4);
      bVar6 = (bVar4 >> 2 & 3) == 0;
      iVar8 = -(uint)(byte)((uVar7 == 0) * ' ' +
                           (uVar7 != 0) *
                           (bVar1 << 4 | bVar3 << 3 | bVar5 << 2 | bVar6 << 1 |
                           bVar6 * ((bVar4 >> 1 & 1) == 0) + !bVar6 * ((bVar4 >> 3 & 1) == 0)));
      uVar7 = iVar8 + 0x1f;
      if ((int)uVar7 < 0) break;
      in_a2 = uVar7 & 0xff;
      wDev_ProcessCollision(in_a2,iVar8,0xffffffff);
      lmacProcessCollision(in_a2,iVar8,0xffffffff);
      uVar10 = uVar10 & (1 << 0x20 - (' ' - ((byte)uVar7 & 0x1f)) ^ 0xffffffffU);
    }
    wDev_ClearTxqCollisions(in_a2,iVar8,0xffffffff);
  }
  return;
}



void lmacProcessTXStartData(void)

{
  int iVar1;
  uint in_a2;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar2 = in_a2 & 0xff;
  uVar3 = uVar2;
  if (uVar2 == 10) {
    uVar3 = (uint)DAT_ram_0040dde4;
  }
  if (7 < uVar3) {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x245);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  iVar1 = uVar3 * 0x24;
  uVar6 = (uint)(byte)(&DAT_ram_0040ddf9)[iVar1];
  if (uVar6 != 1) {
    uVar3 = (uint)DAT_ram_0040dde4;
    if (7 < uVar3) {
      return;
    }
    iVar1 = uVar3 * 0x24;
  }
  puVar7 = (uint *)(&DAT_ram_0040dde8 + iVar1);
  if ((&DAT_ram_0040ddf9)[iVar1] != '\x01') {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x251,uVar6);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  puVar5 = &DAT_ram_0040dde4;
  DAT_ram_0040dde4 = (byte)uVar3;
  if (uVar2 == 10) {
    FUN_ram_004005c4(iVar1 + 0x40ddf8,DAT_ram_0040dddc,&DAT_ram_0040dde4,uVar6);
    DAT_ram_0040dde0 = 0;
  }
  uVar3 = *puVar7;
  if (uVar3 == 0) {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x259,uVar6);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  puVar4 = &our_tx_eb;
  (&DAT_ram_0040ddf9)[iVar1] = 2;
  uVar2 = our_tx_eb;
  if (our_tx_eb != 0) goto LAB_ram_004016e1;
  if (DAT_ram_0040dde0 != 0) {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x277,uVar6);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  *puVar7 = 0;
  uVar2 = **(uint **)(uVar3 + 0x20);
  our_tx_eb = uVar3;
  if ((uVar2 >> 0x1c & 1) != 0) goto LAB_ram_004016e1;
  if (((&DAT_ram_0040ddf3)[iVar1] == '\0') && (0 < *(short *)(&DAT_ram_0040ddfc + iVar1))) {
    (&DAT_ram_0040ddf5)[iVar1] = 1;
  }
  if ((*(short *)(&DAT_ram_0040de00 + iVar1) == 0) ||
     ((((&DAT_ram_0040ddf3)[iVar1] == '\0' || ((&DAT_ram_0040ddf4)[iVar1] == '\0')) &&
      ((&DAT_ram_0040ddf5)[iVar1] == '\0')))) {
LAB_ram_004016b8:
    uVar2 = **(uint **)(uVar3 + 0x20);
    puVar5 = (undefined1 *)(uVar2 >> 6);
    puVar4 = (undefined4 *)((uint)puVar5 & 0xc0);
    if (puVar4 != (undefined4 *)0x80) goto LAB_ram_004016e1;
    uVar2 = uVar2 >> 2 & 0xf;
    ppFetchTxQFirstAvail(uVar2,0x80,puVar5,uVar6);
    if (uVar2 == 0) goto LAB_ram_004016e1;
  }
  else {
    uVar2 = **(uint **)(uVar3 + 0x20) >> 2 & 0xf;
    ppFetchTxQFirstAvail(uVar2,*(short *)(&DAT_ram_0040de00 + iVar1),&DAT_ram_0040dde4,uVar6);
    if (uVar2 == 0) goto LAB_ram_004016b8;
    uVar6 = 0x402;
    uVar3 = **(uint **)(uVar3 + 0x20);
    puVar5 = (undefined1 *)(uVar3 >> 6);
    if (((uint)puVar5 & 0x402) != 0) {
      if (((uVar3 >> 0xb & 1) == 0) ||
         (puVar4 = (undefined4 *)((*(uint **)(uVar3 + 0x20))[1] >> 4 & 0xf),
         (undefined4 *)0x1 < puVar4)) {
        *puVar7 = uVar2;
        FUN_ram_004001e4(puVar7,0,puVar5,0x402);
        puVar4 = (undefined4 *)0x0;
        uVar2 = (uint)(byte)(&DAT_ram_0040ddec)[iVar1];
        puVar5 = (undefined1 *)0x0;
        wDev_EnableTransmit(uVar2,0,0,0x402);
      }
      goto LAB_ram_004016e1;
    }
  }
  puVar4 = (undefined4 *)0x1;
  DAT_ram_0040dde0 = uVar2;
  FUN_ram_004001e4(puVar7,1,puVar5,uVar6);
  uVar2 = iVar1 + 0x40ddf8;
  FUN_ram_004017cc(uVar2,1,puVar5,uVar6);
LAB_ram_004016e1:
  lmacProcessCollisions(uVar2,puVar4,puVar5,uVar6);
  return;
}



void lmacProcessAckTimeout(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_ram_0040dde4 < 8) {
    iVar1 = (uint)DAT_ram_0040dde4 * 0x24;
    uVar2 = **(uint **)(our_tx_eb + 0x20) >> 6 & 0x100;
    if (uVar2 == 0) {
      FUN_ram_00401144(&DAT_ram_0040dde8 + iVar1,our_tx_eb,0,0x100);
    }
    else {
      (&DAT_ram_0040ddee)[iVar1] = (&DAT_ram_0040ddef)[iVar1];
      (&DAT_ram_0040ddf1)[iVar1] = 0;
      FUN_ram_0040136c(&DAT_ram_0040dde8 + iVar1,0,uVar2,0x100);
    }
  }
  return;
}



void lmacProcessTxError(void)

{
  uint in_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_a5;
  
  uVar2 = in_a2 & 0xff;
  uVar1 = (uint)DAT_ram_0040dde4;
  if (uVar1 < 8) {
    uVar3 = 0x11;
    if (uVar2 < 0x12) {
      if (uVar2 < 0x10) {
        if ((uVar2 == 1) || (uVar2 == 3)) {
          lmacProcessAckTimeout(uVar1,uVar2,0x11);
          return;
        }
LAB_ram_00401790:
        printf("tx error 0x%x\n",uVar2,uVar3,unaff_a5);
        ets_printf("%s %u\n",&DAT_ram_0040b8e4,0x58f,unaff_a5);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
    else {
      uVar3 = uVar2 - 0xc0;
      unaff_a5 = 1;
      if (1 < uVar3) goto LAB_ram_00401790;
    }
    (&DAT_ram_0040ddf9)[uVar1 * 0x24] = 6;
    FUN_ram_00400c70(&DAT_ram_0040dde8 + uVar1 * 0x24,0,uVar3,unaff_a5);
  }
  return;
}



void lmacRxDone(void)

{
  ppEnqueueRxq();
  pp_post(5,0);
  return;
}



void FUN_ram_004017cc(void)

{
  undefined uVar1;
  undefined *in_a2;
  
  if (DAT_ram_0040dde0 == 0) {
    ets_printf("%s %u\n",&DAT_ram_0040b8e4,0xee);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  uVar1 = 0xd4;
  wDev_SetFrameAckType(0xd4,3);
  *in_a2 = uVar1;
  wDev_SetWaitingQueue(10,3);
  return;
}



void FUN_ram_00401808(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_00401840(void)

{
  code *pcVar1;
  ushort uVar2;
  ushort uVar3;
  
  pcVar1 = *(code **)(_g_osi_funcs_p + 4);
  (*pcVar1)(pcVar1);
  uVar3 = DAT_ram_0040e13c + 1;
  uVar2 = DAT_ram_0040e13c;
  if (uVar3 < 0x2e) {
    DAT_ram_0040e13e = DAT_ram_0040e13e + 1;
    DAT_ram_0040e13c = uVar3;
    uVar2 = DAT_ram_0040e13e;
    uVar3 = 0x2c;
    if (0x2c < DAT_ram_0040e13e) {
      DAT_ram_0040e13e = 0;
      uVar2 = DAT_ram_0040e13e;
    }
  }
  (**(code **)(_g_osi_funcs_p + 8))
            (pcVar1,*(code **)(_g_osi_funcs_p + 8),uVar2,uVar3,g_osi_funcs_p,0x2d);
  return;
}



void FUN_ram_004018a4(void)

{
  uint in_a2;
  uint uVar1;
  undefined unaff_a3;
  undefined unaff_a4;
  undefined unaff_a5;
  int unaff_a6;
  
  if (1 < in_a2) {
    DAT_ram_0040e2b4._0_1_ = 0;
    uVar1 = 1 << 0x20 - (' ' - ((byte)in_a2 & 0x1f));
    DAT_ram_0040e2d0 = unaff_a5;
    DAT_ram_0040e2d1 = unaff_a4;
    DAT_ram_0040e2d2 = unaff_a3;
    (&DAT_ram_0040e2b0)[unaff_a6] = uVar1 | (&DAT_ram_0040e2b0)[unaff_a6];
    DAT_ram_0040e2ac = uVar1 | DAT_ram_0040e2ac;
  }
  return;
}



void FUN_ram_004018e0(void)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint in_a2;
  uint unaff_a3;
  short sVar7;
  uint unaff_a4;
  int unaff_a5;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  uVar9 = (&DAT_ram_0040e2b0)[unaff_a5];
  if ((uVar9 == 0) && ((DAT_ram_0040e2ac >> ((&DAT_ram_0040e2c0)[unaff_a5] & 0x1f) & 1) == 0)) {
    FUN_ram_004018a4((&DAT_ram_0040e2c0)[unaff_a5]);
  }
  else {
    while( true ) {
      uVar8 = -uVar9 & uVar9;
      sVar7 = (short)(uVar8 >> 0x10);
      bVar1 = sVar7 == 0;
      sVar7 = (ushort)bVar1 * (short)uVar8 + (ushort)!bVar1 * sVar7;
      cVar2 = (char)((ushort)sVar7 >> 8);
      bVar3 = cVar2 == '\0';
      bVar4 = bVar3 * (char)sVar7 + !bVar3 * cVar2;
      bVar5 = bVar4 >> 4 == 0;
      bVar4 = bVar5 * (bVar4 & 0xf) + !bVar5 * (bVar4 >> 4);
      bVar6 = (bVar4 >> 2 & 3) == 0;
      iVar10 = 0x1f - (uint)(byte)((uVar8 == 0) * ' ' +
                                  (uVar8 != 0) *
                                  (bVar1 << 4 | bVar3 << 3 | bVar5 << 2 | bVar6 << 1 |
                                  bVar6 * ((bVar4 >> 1 & 1) == 0) + !bVar6 * ((bVar4 >> 3 & 1) == 0)
                                  ));
      if (iVar10 < 0) break;
      if (((DAT_ram_0040e2d0 == unaff_a4) && (DAT_ram_0040e2d1 == unaff_a3)) &&
         (DAT_ram_0040e2d2 == in_a2)) {
        return;
      }
      uVar9 = uVar9 & (1 << 0x20 - (' ' - ((byte)iVar10 & 0x1f)) ^ 0xffffffffU);
    }
    uVar9 = (DAT_ram_0040e2ac | 3) ^ 0xff;
    uVar8 = (1 << 0x20 - (' ' - ((&DAT_ram_0040e2c0)[unaff_a5] & 0x1f))) - 1U & uVar9;
    sVar7 = (short)(uVar8 >> 0x10);
    bVar1 = sVar7 == 0;
    sVar7 = (ushort)bVar1 * (short)uVar8 + (ushort)!bVar1 * sVar7;
    cVar2 = (char)((ushort)sVar7 >> 8);
    bVar3 = cVar2 == '\0';
    bVar4 = bVar3 * (char)sVar7 + !bVar3 * cVar2;
    bVar5 = bVar4 >> 4 == 0;
    bVar4 = bVar5 * (bVar4 & 0xf) + !bVar5 * (bVar4 >> 4);
    bVar6 = (bVar4 >> 2 & 3) == 0;
    iVar10 = 0x1f - (uint)(byte)((uVar8 == 0) * ' ' +
                                (uVar8 != 0) *
                                (bVar1 << 4 | bVar3 << 3 | bVar5 << 2 | bVar6 << 1 |
                                bVar6 * ((bVar4 >> 1 & 1) == 0) + !bVar6 * ((bVar4 >> 3 & 1) == 0)))
    ;
    if (iVar10 < 0) {
      uVar8 = uVar8 ^ uVar9;
      sVar7 = (short)(uVar8 >> 0x10);
      bVar1 = sVar7 == 0;
      sVar7 = (ushort)bVar1 * (short)uVar8 + (ushort)!bVar1 * sVar7;
      cVar2 = (char)((ushort)sVar7 >> 8);
      bVar3 = cVar2 == '\0';
      bVar4 = bVar3 * (char)sVar7 + !bVar3 * cVar2;
      bVar5 = bVar4 >> 4 == 0;
      bVar4 = bVar5 * (bVar4 & 0xf) + !bVar5 * (bVar4 >> 4);
      bVar6 = (bVar4 >> 2 & 3) == 0;
      iVar10 = 0x1f - (uint)(byte)((uVar8 == 0) * ' ' +
                                  (uVar8 != 0) *
                                  (bVar1 << 4 | bVar3 << 3 | bVar5 << 2 | bVar6 << 1 |
                                  bVar6 * ((bVar4 >> 1 & 1) == 0) + !bVar6 * ((bVar4 >> 3 & 1) == 0)
                                  ));
      if (iVar10 < 0) {
        return;
      }
    }
    uVar9 = (1 << 0x20 - (' ' - ((byte)iVar10 & 0x1f))) - 1U & DAT_ram_0040e2ac;
    sVar7 = (short)(uVar9 >> 0x10);
    bVar1 = sVar7 == 0;
    sVar7 = (ushort)bVar1 * (short)uVar9 + (ushort)!bVar1 * sVar7;
    cVar2 = (char)((ushort)sVar7 >> 8);
    bVar3 = cVar2 == '\0';
    bVar4 = bVar3 * (char)sVar7 + !bVar3 * cVar2;
    bVar5 = bVar4 >> 4 == 0;
    bVar4 = bVar5 * (bVar4 & 0xf) + !bVar5 * (bVar4 >> 4);
    bVar6 = (bVar4 >> 2 & 3) == 0;
    iVar11 = 0x1f - (uint)(byte)((uVar9 == 0) * ' ' +
                                (uVar9 != 0) *
                                (bVar1 << 4 | bVar3 << 3 | bVar5 << 2 | bVar6 << 1 |
                                bVar6 * ((bVar4 >> 1 & 1) == 0) + !bVar6 * ((bVar4 >> 3 & 1) == 0)))
    ;
    if (iVar11 < 0) {
      uVar9 = uVar9 ^ DAT_ram_0040e2ac;
      sVar7 = (short)(uVar9 >> 0x10);
      bVar1 = sVar7 == 0;
      sVar7 = (ushort)bVar1 * (short)uVar9 + (ushort)!bVar1 * sVar7;
      cVar2 = (char)((ushort)sVar7 >> 8);
      bVar3 = cVar2 == '\0';
      bVar4 = bVar3 * (char)sVar7 + !bVar3 * cVar2;
      bVar5 = bVar4 >> 4 == 0;
      bVar4 = bVar5 * (bVar4 & 0xf) + !bVar5 * (bVar4 >> 4);
      bVar6 = (bVar4 >> 2 & 3) == 0;
      uVar9 = (int)(iVar10 + (0x25 - (uint)(byte)((uVar9 == 0) * ' ' +
                                                 (uVar9 != 0) *
                                                 (bVar1 << 4 | bVar3 << 3 | bVar5 << 2 | bVar6 << 1
                                                 | bVar6 * ((bVar4 >> 1 & 1) == 0) +
                                                   !bVar6 * ((bVar4 >> 3 & 1) == 0))))) / 2;
      if (7 < (int)uVar9) {
        uVar9 = uVar9 - 6;
      }
    }
    else {
      uVar9 = iVar10 + 1 + iVar11 >> 1;
    }
    FUN_ram_004018a4(uVar9 & 0xff);
  }
  return;
}



void FUN_ram_004019f0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 unaff_a4;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)(uint)DAT_ram_0040e2d0;
  if ((puVar3 == (undefined4 *)0x3) || (puVar3 == (undefined4 *)0x0)) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
    if (((undefined4 *)0x2 < puVar3) && (uVar2 = 1, (undefined4 *)0x5 < puVar3)) {
      uVar2 = 0;
    }
  }
  GetAccess(uVar2,puVar3);
  if ((DAT_ram_0040e2cd == '\0') && (DAT_ram_0040e2b8 == 0)) {
    while (puVar1 = DAT_ram_0040e2c4, DAT_ram_0040e2c4 != (undefined4 *)0x0) {
      vPortEnterCritical(&DAT_ram_0040e2ac,puVar3,unaff_a4);
      DAT_ram_0040e2c4 = (undefined4 *)DAT_ram_0040e2c4[7];
      puVar4 = DAT_ram_0040e2c4;
      if (DAT_ram_0040e2c4 == (undefined4 *)0x0) {
        puVar4 = &DAT_ram_0040e2c4;
        DAT_ram_0040e2c8 = &DAT_ram_0040e2c4;
      }
      vPortExitCritical(&DAT_ram_0040e2ac,puVar3,puVar4);
      puVar1[7] = 0;
      puVar4 = puVar1;
      lmacMSDUAged(puVar1,puVar3,0);
      unaff_a4 = 0;
      if (puVar4 == (undefined4 *)0x0) {
        return;
      }
      lmacDiscardAgedMSDU(uVar2,puVar1,0);
      puVar3 = puVar1;
    }
  }
  return;
}



void ppFetchTxQFirstAvail(void)

{
  int iVar1;
  byte in_a2;
  
  iVar1 = DAT_ram_0040e2c4;
  if ((((in_a2 < 8) && (DAT_ram_0040e2d3 == '\0')) && (DAT_ram_0040e2c4 != 0)) &&
     ((**(uint **)(DAT_ram_0040e2c4 + 0x20) >> 0x18 & 1) == 0)) {
    vPortEnterCritical(**(uint **)(DAT_ram_0040e2c4 + 0x20));
    DAT_ram_0040e2c4 = *(int *)(DAT_ram_0040e2c4 + 0x1c);
    if (DAT_ram_0040e2c4 == 0) {
      DAT_ram_0040e2c8 = &DAT_ram_0040e2c4;
    }
    vPortExitCritical(DAT_ram_0040e2c4);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  return;
}



void ppDequeueTxQ(void)

{
  int iVar1;
  byte in_a2;
  
  iVar1 = DAT_ram_0040e2c4;
  if ((in_a2 < 8) && (DAT_ram_0040e2c4 != 0)) {
    vPortEnterCritical(in_a2);
    DAT_ram_0040e2c4 = *(int *)(DAT_ram_0040e2c4 + 0x1c);
    if (DAT_ram_0040e2c4 == 0) {
      DAT_ram_0040e2c8 = &DAT_ram_0040e2c4;
    }
    vPortExitCritical(DAT_ram_0040e2c4);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
  }
  return;
}



void ppRollBackTxQ(void)

{
  int iVar1;
  int in_a2;
  
  if ((**(uint **)(in_a2 + 0x20) >> 2 & 0xf) < 8) {
    vPortEnterCritical(*(uint **)(in_a2 + 0x20));
    *(int *)(in_a2 + 0x1c) = DAT_ram_0040e2c4;
    if (DAT_ram_0040e2c4 == 0) {
      DAT_ram_0040e2c4 = in_a2 + 0x1c;
      DAT_ram_0040e2c8 = DAT_ram_0040e2c4;
    }
    iVar1 = in_a2;
    vPortExitCritical(&DAT_ram_0040e2ac,&DAT_ram_0040e2ac,DAT_ram_0040e2c4,&DAT_ram_0040e2ac);
    DAT_ram_0040e2c4 = iVar1;
  }
  return;
}



void ppRecordBarRRC(void)

{
  undefined unaff_a3;
  
  DAT_ram_0040e2cc = unaff_a3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ppTxqUpdateBitmap(void)

{
  undefined2 unaff_a3;
  undefined4 unaff_a4;
  undefined4 unaff_a5;
  char unaff_a6;
  
  DAT_ram_0040e2bc = unaff_a5;
  _DAT_ram_0040e2c0 = unaff_a4;
  DAT_ram_0040e2cc = unaff_a6 + DAT_ram_0040e2cc;
  _DAT_ram_0040e2ce = unaff_a3;
  return;
}



void ppEnqueueTxDone(void)

{
  int *piVar1;
  int in_a2;
  
  if (in_a2 == 0) {
    ets_printf("%s %u\n",&DAT_ram_0040b92c,0xae9);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  vPortEnterCritical();
  *(undefined4 *)(in_a2 + 0x1c) = 0;
  piVar1 = DAT_ram_0040e3d8;
  *DAT_ram_0040e3d8 = in_a2;
  DAT_ram_0040e3d8 = (int *)(in_a2 + 0x1c);
  vPortExitCritical(&DAT_ram_0040e2ac,piVar1);
  return;
}



void ppEnqueueRxq(void)

{
  int *piVar1;
  int in_a2;
  
  vPortEnterCritical();
  *(undefined4 *)(in_a2 + 0x1c) = 0;
  piVar1 = DAT_ram_0040e3e0;
  *DAT_ram_0040e3e0 = in_a2;
  DAT_ram_0040e3e0 = (int *)(in_a2 + 0x1c);
  vPortExitCritical(&DAT_ram_0040e2ac,piVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void MacIsrSigPostDefHdl(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_a3;
  int *unaff_a4;
  code *unaff_a5;
  undefined4 uVar4;
  undefined4 unaff_a6;
  undefined4 *local_20;
  int aiStack28 [4];
  
  while (puVar3 = (undefined4 *)(uint)DAT_ram_0040e0e6, puVar3 != (undefined4 *)0x0) {
    FUN_ram_00401840(puVar3,unaff_a3,unaff_a4,unaff_a5,unaff_a6);
    local_20 = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      printf("p e2 m f\n",unaff_a3,unaff_a4,unaff_a5,unaff_a6);
    }
    iVar2 = (uint)DAT_ram_0040e0e4 * 8;
    unaff_a6 = *(undefined4 *)(&DAT_ram_0040e0ec + iVar2);
    uVar4 = *(undefined4 *)(&DAT_ram_0040e0f0 + iVar2);
    *local_20 = unaff_a6;
    local_20[1] = uVar4;
    uVar1 = DAT_ram_0040e0e4 + 1 & 0xffff;
    DAT_ram_0040e0e4 = (ushort)uVar1;
    if (9 < uVar1) {
      DAT_ram_0040e0e4 = 0;
    }
    DAT_ram_0040e0e6 = DAT_ram_0040e0e6 - 1;
    unaff_a4 = aiStack28;
    unaff_a5 = *(code **)(_g_osi_funcs_p + 0x70);
    iVar2 = DAT_ram_0040e414;
    (*unaff_a5)(DAT_ram_0040e414,&local_20,unaff_a4,unaff_a5,unaff_a6);
    if (iVar2 == 0) {
      printf("E_QF:%d!!",0,unaff_a4,unaff_a5,unaff_a6);
    }
    unaff_a3 = aiStack28[0] + -1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pp_post(void)

{
  int iVar1;
  uint in_a2;
  undefined1 *puVar2;
  char *__format;
  undefined *puVar3;
  uint unaff_a3;
  uint *puVar4;
  uint **ppuVar5;
  uint *puVar6;
  ushort uVar7;
  undefined4 unaff_a4;
  uint uVar8;
  undefined4 unaff_a5;
  code *pcVar9;
  uint *local_40 [4];
  uint uStack48;
  
  ppuVar5 = local_40;
  if (NMIIrqIsOn == 0) {
    vPortEnterCritical();
    memw();
    memw();
    _DAT_ram_3ff20c18 = (uint *)0x8000000;
  }
  if ((&DAT_ram_0040e418)[in_a2] != '\0') {
    if (NMIIrqIsOn != 0) {
      return;
    }
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT);
    return;
  }
  puVar4 = (uint *)0x9;
  if (in_a2 != 9) {
    puVar4 = (uint *)0x1;
    (&DAT_ram_0040e418)[in_a2] = '\x01';
  }
  puVar6 = WDEV_INTEREST_EVENT;
  local_40[0] = (uint *)(uint)NMIIrqIsOn;
  if (local_40[0] == (uint *)0x0) {
    local_40[0] = (uint *)&DAT_ram_3ff20c18;
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT);
    puVar4 = puVar6;
  }
  if (in_a2 == 0xc) {
    puVar2 = &DAT_ram_0040e2a8;
    DAT_ram_0040e2a8 = 1;
  }
  else {
    if (in_a2 < 4) {
      FUN_ram_00401840(local_40[0],puVar4);
      if (local_40[0] == (uint *)0x0) {
        __format = "p e1 m f\n";
        ppuVar5 = (uint **)puVar4;
      }
      else {
        *local_40[0] = in_a2;
        local_40[0][1] = unaff_a3;
        uVar8 = DAT_ram_0040e414;
        pcVar9 = *(code **)(_g_osi_funcs_p + 0x6c);
        unaff_a4 = 100;
        (**(code **)(_g_osi_funcs_p + 0x28))(100,*(code **)(_g_osi_funcs_p + 0x28));
        unaff_a5 = 1;
        (*pcVar9)(uVar8,local_40,unaff_a4,1);
        if (uVar8 != 0) {
          return;
        }
        __format = "E_UF!!!";
      }
      printf(__format,ppuVar5,unaff_a4,unaff_a5);
      return;
    }
    puVar2 = (undefined1 *)0x9;
    if (in_a2 == 9) {
      uVar8 = DAT_ram_0040e414;
      (**(code **)(_g_osi_funcs_p + 0x7c))(DAT_ram_0040e414,*(code **)(_g_osi_funcs_p + 0x7c));
      if (0x22 < uVar8) {
        return;
      }
      puVar2 = (undefined1 *)(uint)DAT_ram_0040e0e6;
      if (&DAT_ram_00000008 < puVar2) {
        return;
      }
    }
  }
  if (NMIIrqIsOn == 0) {
    uStack48 = (uint)NMIIrqIsOn;
    vPortEnterCritical(puVar2,0);
    memw();
    memw();
    _DAT_ram_3ff20c18 = (uint *)0x8000000;
  }
  uVar7 = DAT_ram_0040e0e6 + 1;
  if (uVar7 < 0xb) {
    iVar1 = (uint)DAT_ram_0040e0e8 * 8;
    uVar8 = DAT_ram_0040e0e8 + 1 & 0xffff;
    if (9 < uVar8) {
      uVar8 = 0;
    }
    DAT_ram_0040e0e8 = (ushort)uVar8;
    puVar3 = (undefined *)(uint)NMIIrqIsOn;
    DAT_ram_0040e0e6 = uVar7;
    *(uint *)(&DAT_ram_0040e0ec + iVar1) = in_a2;
    *(uint *)(&DAT_ram_0040e0f0 + iVar1) = unaff_a3;
    puVar4 = WDEV_INTEREST_EVENT;
    puVar6 = (uint *)(&DAT_ram_0040e0ec + iVar1);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = &DAT_ram_3ff20c18;
      memw();
      _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
      vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar8,9);
      puVar6 = puVar4;
    }
    HDL_MAC_SIG_IN_LV1_ISR(puVar3,puVar6,uVar8,9);
  }
  else {
    if (in_a2 == 0xc) {
      DAT_ram_0040e2a8 = 0;
      DAT_ram_0040e424 = DAT_ram_0040e424 + -1;
      pp_soft_wdt_count = 0;
      memw();
      _DAT_ram_60000914 = 0x73;
    }
    if (NMIIrqIsOn == 0) {
      memw();
      _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
      vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar7,10);
    }
  }
  return;
}



void FUN_ram_00401fa0(void)

{
  byte in_a2;
  uint uVar1;
  int unaff_a3;
  uint uVar2;
  
  uVar1 = (uint)(0xfffffffefffffffe >> 0x20 - (in_a2 & 0x1f));
  uVar2 = uVar1 & (&DAT_ram_0040e2b0)[unaff_a3];
  (&DAT_ram_0040e2b0)[unaff_a3] = uVar2;
  DAT_ram_0040e2ac = uVar1 & DAT_ram_0040e2ac;
  pp_post(8,0,&DAT_ram_0040e2ac,uVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ppProcessTxQ(void)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint in_a2;
  uint uVar7;
  short sVar9;
  int iVar8;
  undefined4 unaff_a3;
  uint uVar10;
  uint uVar11;
  uint unaff_a5;
  undefined4 unaff_a6;
  undefined4 unaff_a7;
  uint uVar12;
  
  uVar12 = in_a2 & 0xff;
  if (NMIIrqIsOn == '\0') {
    vPortEnterCritical();
    unaff_a3 = 0x8000000;
    memw();
    memw();
    _DAT_ram_3ff20c18 = 0x8000000;
  }
  uVar11 = uVar12;
  lmacIsIdle(uVar12,unaff_a3);
  if (uVar11 == 0) {
    if (NMIIrqIsOn != '\0') {
      return;
    }
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT);
    return;
  }
  bVar1 = (&DAT_ram_0040e2c0)[uVar12];
  uVar11 = (uint)bVar1;
  if (((DAT_ram_0040e2b0 >> (bVar1 & 0x1f) & 1) != 0) && ((char)DAT_ram_0040e2b4 != '\0')) {
    DAT_ram_0040e2b4._0_1_ = '\0';
    if ((DAT_ram_0040e2c4 == 0) && (DAT_ram_0040e2b8 == 0)) {
      FUN_ram_00401fa0(uVar11,uVar12,uVar11);
    }
    if (DAT_ram_0040e2b0 != 0) {
      uVar11 = 1 << 0x20 - (' ' - (bVar1 & 0x1f));
      uVar10 = uVar11 - 1 & DAT_ram_0040e2b0;
      unaff_a5 = 0xffffffff;
      uVar11 = (uVar10 ^ DAT_ram_0040e2b0) & (uVar11 ^ 0xffffffff);
      uVar7 = -uVar11 & uVar11;
      sVar9 = (short)(uVar7 >> 0x10);
      bVar2 = sVar9 == 0;
      sVar9 = (ushort)bVar2 * (short)uVar7 + (ushort)!bVar2 * sVar9;
      cVar3 = (char)((ushort)sVar9 >> 8);
      bVar4 = cVar3 == '\0';
      bVar1 = bVar4 * (char)sVar9 + !bVar4 * cVar3;
      bVar5 = bVar1 >> 4 == 0;
      bVar1 = bVar5 * (bVar1 & 0xf) + !bVar5 * (bVar1 >> 4);
      bVar6 = (bVar1 >> 2 & 3) == 0;
      iVar8 = 0x1f - (uint)(byte)((uVar7 == 0) * ' ' +
                                 (uVar7 != 0) *
                                 (bVar2 << 4 | bVar4 << 3 | bVar5 << 2 | bVar6 << 1 |
                                 bVar6 * ((bVar1 >> 1 & 1) == 0) + !bVar6 * ((bVar1 >> 3 & 1) == 0))
                                 );
      if (iVar8 < 0) {
        uVar10 = -uVar10 & uVar10;
        sVar9 = (short)(uVar10 >> 0x10);
        bVar2 = sVar9 == 0;
        sVar9 = (ushort)bVar2 * (short)uVar10 + (ushort)!bVar2 * sVar9;
        cVar3 = (char)((ushort)sVar9 >> 8);
        bVar4 = cVar3 == '\0';
        bVar1 = bVar4 * (char)sVar9 + !bVar4 * cVar3;
        bVar5 = bVar1 >> 4 == 0;
        bVar1 = bVar5 * (bVar1 & 0xf) + !bVar5 * (bVar1 >> 4);
        bVar6 = (bVar1 >> 2 & 3) == 0;
        iVar8 = 0x1f - (uint)(byte)((uVar10 == 0) * ' ' +
                                   (uVar10 != 0) *
                                   (bVar2 << 4 | bVar4 << 3 | bVar5 << 2 | bVar6 << 1 |
                                   bVar6 * ((bVar1 >> 1 & 1) == 0) +
                                   !bVar6 * ((bVar1 >> 3 & 1) == 0)));
        if (iVar8 < 0) goto LAB_ram_004020a8;
      }
      (&DAT_ram_0040e2c0)[uVar12] = (char)iVar8;
    }
  }
LAB_ram_004020a8:
  bVar1 = (&DAT_ram_0040e2c0)[uVar12];
  if ((uVar12 == 0) &&
     (((DAT_ram_0040e2b0 >> (bVar1 & 0x1f) & 1) == 0 || ((char)DAT_ram_0040e2b4 == '\0')))) {
    uVar7 = 0;
    FUN_ram_004019f0(0,bVar1,uVar11,unaff_a5);
    if (uVar7 != 0) goto LAB_ram_004021d4;
    uVar7 = 1;
    FUN_ram_004019f0(1,bVar1,uVar11,unaff_a5);
    if (uVar7 != 0) goto LAB_ram_004021d4;
  }
  uVar10 = (1 << 0x20 - (' ' - (bVar1 & 0x1f))) - 1U & DAT_ram_0040e2b0;
  unaff_a5 = uVar10 ^ DAT_ram_0040e2b0;
  unaff_a6 = 1;
  unaff_a7 = 0xffffffff;
  while( true ) {
    uVar11 = -unaff_a5 & unaff_a5;
    sVar9 = (short)(uVar11 >> 0x10);
    bVar2 = sVar9 == 0;
    sVar9 = (ushort)bVar2 * (short)uVar11 + (ushort)!bVar2 * sVar9;
    cVar3 = (char)((ushort)sVar9 >> 8);
    bVar4 = cVar3 == '\0';
    bVar1 = bVar4 * (char)sVar9 + !bVar4 * cVar3;
    bVar5 = bVar1 >> 4 == 0;
    bVar1 = bVar5 * (bVar1 & 0xf) + !bVar5 * (bVar1 >> 4);
    bVar6 = (bVar1 >> 2 & 3) == 0;
    uVar11 = 0x1f - (byte)((uVar11 == 0) * ' ' +
                          (uVar11 != 0) *
                          (bVar2 << 4 | bVar4 << 3 | bVar5 << 2 | bVar6 << 1 |
                          bVar6 * ((bVar1 >> 1 & 1) == 0) + !bVar6 * ((bVar1 >> 3 & 1) == 0)));
    if ((int)uVar11 < 0) break;
    uVar7 = uVar11 & 0xff;
    FUN_ram_004019f0(uVar7,uVar10,uVar11,unaff_a5,1,0xffffffff);
    if (uVar7 != 0) goto LAB_ram_00402152;
    unaff_a5 = unaff_a5 & (1 << 0x20 - (' ' - ((byte)uVar11 & 0x1f)) ^ 0xffffffffU);
  }
  unaff_a5 = 1;
  unaff_a6 = 0xffffffff;
  while( true ) {
    uVar11 = -uVar10 & uVar10;
    sVar9 = (short)(uVar11 >> 0x10);
    bVar2 = sVar9 == 0;
    sVar9 = (ushort)bVar2 * (short)uVar11 + (ushort)!bVar2 * sVar9;
    cVar3 = (char)((ushort)sVar9 >> 8);
    bVar4 = cVar3 == '\0';
    bVar1 = bVar4 * (char)sVar9 + !bVar4 * cVar3;
    bVar5 = bVar1 >> 4 == 0;
    bVar1 = bVar5 * (bVar1 & 0xf) + !bVar5 * (bVar1 >> 4);
    bVar6 = (bVar1 >> 2 & 3) == 0;
    uVar11 = 0x1f - (byte)((uVar11 == 0) * ' ' +
                          (uVar11 != 0) *
                          (bVar2 << 4 | bVar4 << 3 | bVar5 << 2 | bVar6 << 1 |
                          bVar6 * ((bVar1 >> 1 & 1) == 0) + !bVar6 * ((bVar1 >> 3 & 1) == 0)));
    if ((int)uVar11 < 0) {
      if (NMIIrqIsOn != '\0') {
        return;
      }
      memw();
      _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
      vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar11,1,0xffffffff,0xffffffff);
      return;
    }
    uVar7 = uVar11 & 0xff;
    FUN_ram_004019f0(uVar7,uVar10,uVar11,1,0xffffffff,0xffffffff);
    if (uVar7 != 0) break;
    uVar10 = uVar10 & (1 << 0x20 - (' ' - ((byte)uVar11 & 0x1f)) ^ 0xffffffffU);
  }
LAB_ram_00402152:
  (&DAT_ram_0040e2c0)[uVar12] = (char)uVar11;
  DAT_ram_0040e2b4._0_1_ = '\x01';
LAB_ram_004021d4:
  if ((**(uint **)(uVar7 + 0x20) >> 0x1d & 1) != 0) {
    DAT_ram_0040e410 = DAT_ram_0040e410 + -1;
    DAT_ram_0040e40c = DAT_ram_0040e40c + 1;
  }
  if (NMIIrqIsOn == '\0') {
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar11,unaff_a5,unaff_a6,unaff_a7);
  }
  lmacTxFrame(uVar7,uVar12,uVar11,unaff_a5,unaff_a6,unaff_a7);
  return;
}



void ppDiscardMPDU(void)

{
  int in_a2;
  int iVar1;
  
  iVar1 = *(int *)(in_a2 + 0x20);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined *)(iVar1 + 0xf) = 4;
  ppEnqueueTxDone();
  pp_post(4,0,4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ppCalTxop(void)

{
  int iVar1;
  ushort unaff_a3;
  ushort unaff_a4;
  uint unaff_a5;
  
  if (DAT_ram_0040e2d3 == '\0') {
    iVar1 = DAT_ram_0040e2c4;
    if (NMIIrqIsOn == '\0') {
      vPortEnterCritical(0,0,&DAT_ram_0040e2ac);
      memw();
      memw();
      _DAT_ram_3ff20c18 = 0x8000000;
      iVar1 = DAT_ram_0040e2c4;
    }
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      unaff_a5 = **(uint **)(iVar1 + 0x20) >> 6;
      if ((unaff_a5 & 0x40000) != 0) break;
      unaff_a3 = unaff_a3 + *(short *)((int)*(uint **)(iVar1 + 0x20) + 10);
      if (unaff_a4 <= unaff_a3) {
        if (NMIIrqIsOn != '\0') {
          return;
        }
        memw();
        _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
        vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,0x40000,unaff_a5);
        return;
      }
    }
    if (NMIIrqIsOn == '\0') {
      memw();
      _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
      vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,0x40000,unaff_a5);
    }
  }
  return;
}



void ppCalFrameTimes(void)

{
  ushort uVar1;
  int in_a2;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  puVar4 = *(uint **)(in_a2 + 0x20);
  uVar3 = *puVar4 >> 6;
  uVar2 = uVar3 & 0x80000;
  if (uVar2 == 0) {
    if ((uVar3 & 0x402) != 0) goto LAB_ram_00402320;
    uVar2 = (uint)*(byte *)(puVar4 + 2);
    RC_GetAckTime(uVar2,uVar3,0x402);
  }
  else {
    uVar2 = (uint)*(byte *)(puVar4 + 2);
    RC_GetBlockAckTime(uVar2,uVar3);
  }
  uVar2 = uVar2 & 0x1ff;
LAB_ram_00402320:
  puVar4[1] = puVar4[1] & 0x7fffff | uVar2 << 0x17;
  iVar5 = *(int *)(in_a2 + 0x20);
  uVar1 = (ushort)*(byte *)(iVar5 + 8);
  RC_GetCtsTime(*(byte *)(iVar5 + 8),*(short *)(in_a2 + 0x10) + *(short *)(in_a2 + 0x12),
                *(uint *)(iVar5 + 4) >> 0x17);
  *(ushort *)(iVar5 + 10) = uVar1;
  return;
}



void RC_GetAckRate(void)

{
  return;
}



void RC_GetRtsRate(void)

{
  return;
}



void RC_GetAckTime(void)

{
  return;
}



void RC_GetCtsTime(void)

{
  return;
}



void RC_GetBlockAckTime(void)

{
  return;
}



void esp_upload_sta0_event(void)

{
  esp_upload_event(1);
  return;
}



void FUN_ram_004024ec(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_004026d0(void)

{
  byte bVar1;
  int in_a2;
  uint uVar2;
  
  *(undefined *)(*(int *)(in_a2 + 0x60) + 0xb) = 0;
  *(undefined *)(in_a2 + 0x17) = 0;
  *(undefined4 *)(in_a2 + 0x58) = 500000;
  *(undefined4 *)(in_a2 + 0x28) = 0;
  *(undefined4 *)(in_a2 + 0x24) = 0;
  *(undefined4 *)(in_a2 + 0x38) = 0;
  *(undefined *)(in_a2 + 0x16) = 0;
  *(undefined *)(in_a2 + 6) = 0;
  bVar1 = *(byte *)(in_a2 + 0x77);
  if ((0U >> (bVar1 & 0x1f) & 1) == 0) {
    if ((*(char *)(in_a2 + 2) < '\x1a') && (*(char *)(in_a2 + 3) < '\x1a')) {
      uVar2 = (uint)*(byte *)(in_a2 + 5);
    }
    else {
      uVar2 = (uint)*(byte *)(in_a2 + 0x78);
    }
  }
  else {
    uVar2 = (uint)*(byte *)(in_a2 + 0x5c);
    phytype2mode(uVar2,*(undefined *)(in_a2 + 0x79));
    uVar2 = (uint)(byte)(&DAT_ram_0040d36d)[(uVar2 * 2 + (uint)bVar1) * 2];
  }
  if (*(byte *)(*(int *)(in_a2 + 0x60) + 10) < uVar2) {
    *(int *)(in_a2 + 0x60) = *(int *)(in_a2 + 0x60) + 0xc;
  }
  else {
    *(uint *)(in_a2 + 0x60) = uVar2 * 0xc + *(int *)(in_a2 + 0x68);
  }
  memw();
  *(undefined4 *)(in_a2 + 0x2c) = _DAT_ram_3ff20c00;
  return;
}



void FUN_ram_0040277c(void)

{
  byte bVar1;
  int in_a2;
  char cVar2;
  uint unaff_a3;
  int iVar3;
  
  bVar1 = *(byte *)(*(int *)(in_a2 + 0x60) + 1);
  *(int *)(in_a2 + 0x28) = *(int *)(in_a2 + 0x28) + 1;
  if (bVar1 < unaff_a3) {
    iVar3 = *(int *)(in_a2 + 0x24) + 2;
  }
  else {
    iVar3 = *(int *)(in_a2 + 0x24) + 1;
  }
  *(uint *)(in_a2 + 0x24) = iVar3 + unaff_a3;
  if (unaff_a3 < 6) {
    if (2 < unaff_a3) goto LAB_ram_004027b1;
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(in_a2 + 6) + '\x01';
  }
  *(char *)(in_a2 + 6) = cVar2;
LAB_ram_004027b1:
  if (10 < *(byte *)(in_a2 + 6)) {
    FUN_ram_004026d0();
  }
  return;
}



void rcUpdateTxDone(void)

{
  char cVar1;
  char *in_a2;
  int unaff_a3;
  int iVar2;
  char cVar3;
  
  if (((in_a2 != (char *)0x0) && (*(int *)(in_a2 + 0x60) != 0)) &&
     (*(int *)(unaff_a3 + 0x18) == *(int *)(in_a2 + 0x60))) {
    *(int *)(in_a2 + 0x38) = *(int *)(in_a2 + 0x38) + 1;
    if (*(char *)(unaff_a3 + 0xf) == '\x01') {
      cVar3 = (char)(*(uint *)(in_a2 + 0x14) & 4);
      if ((*(uint *)(in_a2 + 0x14) & 4) == 0) {
        cVar1 = *(char *)(unaff_a3 + 9);
        if (cVar1 != 0x7f) {
          if (*in_a2 != 0x7f) {
            cVar3 = (char)((uint)((int)*in_a2 + (int)cVar1) >> 1);
          }
          *in_a2 = cVar1;
          if (in_a2[1] == 0x7f) {
            in_a2[1] = cVar3;
          }
          else {
            iVar2 = in_a2[1] * 3 + (int)cVar3;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 3;
            }
            in_a2[1] = (char)(iVar2 >> 2);
          }
        }
      }
    }
    else {
      if (1 < (byte)(*(char *)(unaff_a3 + 0xf) - 2U)) {
        return;
      }
    }
    FUN_ram_0040277c();
  }
  return;
}



void rcUpdateRxDone(void)

{
  int in_a2;
  char cVar1;
  char *unaff_a3;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  cVar1 = *unaff_a3;
  if ((in_a2 != 0) && (uVar4 = *(uint *)(in_a2 + 0x14) & 1, cVar3 = (char)uVar4, uVar4 == 0)) {
    if (*(char *)(in_a2 + 2) == 0x7f) {
      *(char *)(in_a2 + 2) = cVar1;
    }
    else {
      cVar3 = (char)((uint)((int)*(char *)(in_a2 + 2) + (int)cVar1) >> 1);
      *(char *)(in_a2 + 2) = cVar1;
      cVar1 = cVar3;
    }
    if (*(char *)(in_a2 + 3) != 0x7f) {
      iVar2 = *(char *)(in_a2 + 3) * 3 + (int)cVar3;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      cVar1 = (char)(iVar2 >> 2);
    }
    *(char *)(in_a2 + 3) = cVar1;
  }
  return;
}



void rcUpdateDataRxDone(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rcGetSched(void)

{
  bool bVar1;
  byte bVar2;
  undefined uVar3;
  int in_a2;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint **unaff_a3;
  uint **ppuVar8;
  uint uVar9;
  uint unaff_a4;
  undefined *unaff_a5;
  uint unaff_a6;
  uint unaff_a7;
  int iVar10;
  uint uVar11;
  
  uVar7 = _DAT_ram_3ff20c00;
  puVar4 = *unaff_a3;
  ppuVar8 = unaff_a3;
  if ((in_a2 == 0) || (unaff_a5 = *(undefined **)(in_a2 + 0x60), unaff_a5 == (undefined *)0x0)) {
    if (((uint)puVar4 & 1) == 0) {
      ppuVar8 = (uint **)&DAT_ram_0040d174;
      unaff_a4 = 0x2000002;
      if ((((uint)puVar4 >> 6 & 0x2000002) == 0) && ((in_a2 == 0 || (*(int *)(in_a2 + 0x5c) != 0))))
      {
        ppuVar8 = (uint **)&DAT_ram_0040d234;
      }
      unaff_a3[6] = (uint *)ppuVar8;
      goto LAB_ram_00402b54;
    }
    puVar4 = (uint *)&DAT_ram_0040d1d4;
  }
  else {
    if (((uint)puVar4 >> 7 & 1) == 0) {
      if (((uint)puVar4 >> 9 & 1) != 0) {
        unaff_a6 = *(uint *)(in_a2 + 0x34);
        memw();
        uVar5 = (_DAT_ram_3ff20c00 - unaff_a6) - 1;
        if (unaff_a6 <= _DAT_ram_3ff20c00) {
          uVar5 = _DAT_ram_3ff20c00 - unaff_a6;
        }
        if (*(int *)(in_a2 + 0x24) != 0) {
          unaff_a6 = *(uint *)(in_a2 + 0x38);
          unaff_a7 = 99;
          if ((99 < unaff_a6) || (unaff_a6 = 99999, 99999 < uVar5)) {
            *(uint *)(in_a2 + 0x34) = _DAT_ram_3ff20c00;
            uVar11 = DAT_ram_0040e564 + 1;
            uVar5 = 0;
            DAT_ram_0040e564 = uVar11;
            __udivsi3(0,*(int *)(in_a2 + 0x24));
            unaff_a7 = uVar5 & 0xff;
            *(char *)(in_a2 + 0x16) = (char)unaff_a7;
            if (*(byte *)(in_a2 + 0x17) == 0) {
              uVar7 = (int)((uint)(byte)unaff_a5[9] * 3 + 0x80) >> 2;
              unaff_a4 = uVar7 & 0xff;
              *(char *)(in_a2 + 0x17) = (char)unaff_a4;
              if (unaff_a4 < unaff_a7) {
                *(char *)(in_a2 + 0x17) = (char)((int)(uVar7 + (uVar5 & 0xff)) >> 1);
              }
            }
            else {
              unaff_a6 = (int)((uint)*(byte *)(in_a2 + 0x17) + (uVar5 & 0xff)) >> 1;
              uVar6 = uVar7 - *(uint *)(in_a2 + 0x30);
              *(char *)(in_a2 + 0x17) = (char)unaff_a6;
              uVar5 = uVar6 - 1;
              if (*(uint *)(in_a2 + 0x30) <= uVar7) {
                uVar5 = uVar6;
              }
              uVar6 = (uint)*(byte *)(in_a2 + 1);
              FUN_ram_004024ec(uVar6,*unaff_a5);
              uVar6 = uVar6 >> 1 & 0xff;
              uVar9 = (uint)(byte)unaff_a5[9];
              iVar10 = 0x5a;
              if (uVar9 == 0) {
LAB_ram_004029e8:
                bVar1 = iVar10 - uVar6 < unaff_a6;
              }
              else {
                if (uVar9 < 0x41) {
                  iVar10 = 100;
                  goto LAB_ram_004029e8;
                }
                bVar1 = false;
                if (0x6e - uVar6 < unaff_a6) {
                  bVar1 = (uVar9 + 2) - uVar6 < unaff_a6;
                }
              }
              if ((bVar1) && (unaff_a7 = *(uint *)(in_a2 + 0x58), unaff_a7 < uVar5)) {
                unaff_a5[0xb] = 0;
                *(undefined4 *)(in_a2 + 0x58) = 500000;
                *(undefined4 *)(in_a2 + 0x28) = 0;
                *(undefined4 *)(in_a2 + 0x24) = 0;
                *(undefined4 *)(in_a2 + 0x38) = 0;
                *(undefined *)(in_a2 + 0x16) = 0;
                *(undefined *)(in_a2 + 0x17) = 0;
                *(undefined *)(in_a2 + 6) = 0;
                bVar2 = *(byte *)(in_a2 + 0x77);
                if ((0U >> (bVar2 & 0x1f) & 1) == 0) {
                  bVar2 = *(byte *)(in_a2 + 4);
                }
                else {
                  uVar7 = (uint)*(byte *)(in_a2 + 0x5c);
                  phytype2mode(uVar7,*(undefined *)(in_a2 + 0x79));
                  bVar2 = (&DAT_ram_0040d36c)[(uVar7 * 2 + (uint)bVar2) * 2];
                }
                iVar10 = *(int *)(in_a2 + 0x60);
                unaff_a4 = (uint)*(byte *)(iVar10 + 10);
                if (bVar2 < unaff_a4) {
                  *(int *)(in_a2 + 0x60) = iVar10 + -0xc;
                  unaff_a4 = (uint)*(byte *)(iVar10 + -1);
                  *(byte *)(iVar10 + -1) = *(byte *)(iVar10 + -1) | 1;
                  memw();
                  *(uint *)(in_a2 + 0x30) = _DAT_ram_3ff20c00;
                }
              }
              else {
                bVar2 = unaff_a5[0xb];
                unaff_a7 = bVar2 & 1;
                if (((bVar2 & 1) != 0) || ((uVar11 & 3) == 0)) {
                  if ((int)unaff_a6 < (int)(uVar9 - uVar6)) {
                    if (((bVar2 & 1) != 0) && (*(uint *)(in_a2 + 0x58) < 0x3d0901)) {
                      *(undefined4 *)(in_a2 + 0x58) = 0;
                    }
                    uVar5 = uVar7 - *(uint *)(in_a2 + 0x2c);
                    if (uVar7 < *(uint *)(in_a2 + 0x2c)) {
                      uVar5 = uVar5 - 1;
                    }
                    if (100000 < uVar5) {
                      FUN_ram_004026d0();
                    }
                  }
                  else {
                    if ((bVar2 & 1) != 0) {
                      unaff_a5[0xb] = bVar2 & 0xfe;
                      *(undefined4 *)(in_a2 + 0x58) = 500000;
                    }
                  }
                }
              }
            }
            uVar5 = (uint)*(byte *)(*(int *)(in_a2 + 0x60) + 10);
            uVar7 = (uint)*(byte *)(in_a2 + 0x5c);
            phytype2mode(uVar7,*(undefined *)(in_a2 + 0x79),unaff_a4,unaff_a5,unaff_a6,unaff_a7);
            iVar10 = (uVar7 * 2 + (uint)*(byte *)(in_a2 + 0x77)) * 2;
            uVar7 = (uint)(byte)(&DAT_ram_0040d36c)[iVar10];
            if (((byte)(&DAT_ram_0040d36c)[iVar10] <= uVar5) &&
               (uVar7 = (uint)(byte)(&DAT_ram_0040d36d)[iVar10],
               uVar5 < (byte)(&DAT_ram_0040d36d)[iVar10])) {
              uVar7 = uVar5;
            }
            *(uint *)(in_a2 + 0x60) = uVar7 * 0xc + *(int *)(in_a2 + 0x68);
            *(undefined4 *)(in_a2 + 0x28) = 0;
            *(undefined4 *)(in_a2 + 0x24) = 0;
            *(undefined4 *)(in_a2 + 0x38) = 0;
          }
        }
        ppuVar8 = (uint **)*unaff_a3;
        *unaff_a3 = (uint *)ppuVar8;
        puVar4 = *(uint **)(in_a2 + 0x60);
        goto LAB_ram_00402b51;
      }
      ppuVar8 = (uint **)0x200800;
      if ((((uint)puVar4 >> 6 & 0x200800) != 0) && (*(int *)(in_a2 + 0x5c) != 0)) {
        puVar4 = (uint *)&DAT_ram_0040d360;
        goto LAB_ram_00402b51;
      }
    }
    puVar4 = *(uint **)(in_a2 + 100);
  }
LAB_ram_00402b51:
  unaff_a3[6] = puVar4;
LAB_ram_00402b54:
  if (unaff_a3[6] == (uint *)0x0) {
    printf("==dl\n",ppuVar8,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
  }
  if (((in_a2 == 0) || ((*(uint *)(in_a2 + 0x14) >> 6 & 1) == 0)) ||
     (((uint)*unaff_a3 >> 9 & 1) == 0)) {
    if ((0xc1U >> ((byte)((uint)*unaff_a3 >> 1) & 1) & 1) == 0) {
      uVar3 = *(undefined *)unaff_a3[6];
    }
    else {
      uVar3 = 0x10;
    }
  }
  else {
    uVar3 = *(undefined *)(in_a2 + 7);
  }
  *(undefined *)(unaff_a3 + 2) = uVar3;
  return;
}



void rcGetRate(void)

{
  undefined uVar1;
  int in_a2;
  uint *unaff_a3;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = *unaff_a3;
  uVar2 = uVar4 >> 6 & (uint)&Elf32_Ehdr_ram_00400000;
  if (uVar2 == 0) {
    puVar3 = (undefined *)unaff_a3[6];
    uVar6 = unaff_a3[1] >> 4 & 0xf;
    uVar5 = uVar2;
    do {
      uVar5 = uVar5 + (byte)puVar3[1] & 0xff;
      if (uVar6 < uVar5) {
        if (((in_a2 != 0) && ((*(uint *)(in_a2 + 0x14) >> 6 & 1) != 0)) && ((uVar4 >> 9 & 1) != 0))
        {
          uVar1 = *(undefined *)(in_a2 + 7);
          goto LAB_ram_00402c69;
        }
        if ((0xc1U >> ((byte)(uVar4 >> 1) & 1) & 1) != 0) goto LAB_ram_00402c27;
        if ((int)(lmacConfMib[8] - 2) <= (int)uVar6) goto LAB_ram_00402c66;
        uVar1 = *puVar3;
        goto LAB_ram_00402c69;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 4);
    if ((0xc1U >> ((byte)(uVar4 >> 1) & 1) & 1) == 0) {
LAB_ram_00402c66:
      uVar1 = puVar3[6];
    }
    else {
LAB_ram_00402c27:
      uVar1 = 0x10;
    }
LAB_ram_00402c69:
    *(undefined *)(unaff_a3 + 2) = uVar1;
  }
  return;
}



void rcReachRetryLimit(void)

{
  return;
}



void trc_NeedRTS(void)

{
  byte bVar1;
  int in_a2;
  
  bVar1 = *(byte *)(*(int *)(in_a2 + 0x20) + 8);
  if ((((bVar1 != 0xb) && (bVar1 < 0xc)) && (bVar1 != 1)) && (bVar1 == 0)) {
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_00402d34(void)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  short in_a2;
  int unaff_a3;
  
  iVar3 = wDevCtrl._20_4_;
  uVar2 = wDevCtrl._16_4_;
  uVar1 = wDevCtrl._2_2_;
  wDevCtrl._0_2_ = wDevCtrl._0_2_ - in_a2;
  if (wDevCtrl._0_2_ < 2) {
    if (wDevCtrl._0_2_ == 1) {
      wDevCtrl._8_4_ = *(undefined4 *)(unaff_a3 + 8);
      *(undefined4 *)(unaff_a3 + 8) = 0;
      *(undefined4 *)(wDevCtrl._12_4_ + 8) = 0x41195c;
    }
    else {
      wDevCtrl._8_4_ = wDevCtrl._16_4_;
      wDevCtrl._16_4_ = 0;
      wDevCtrl._12_4_ = wDevCtrl._20_4_;
      wDevCtrl._20_4_ = 0;
      wDevCtrl._0_2_ = wDevCtrl._2_2_;
      wDevCtrl._2_2_ = 0;
      if (uVar1 == 1) {
        *(undefined4 *)(iVar3 + 8) = 0x41195c;
      }
      *(undefined4 *)(unaff_a3 + 8) = 0;
      memw();
      _DAT_ram_3ff20008 = uVar2;
    }
  }
  else {
    wDevCtrl._8_4_ = *(undefined4 *)(unaff_a3 + 8);
    *(undefined4 *)(unaff_a3 + 8) = 0;
  }
  if ((uint)wDevCtrl._0_2_ + (uint)wDevCtrl._2_2_ < 2) {
    memw();
    _DAT_ram_3ff20ca8 = _DAT_ram_3ff20ca8 & 0xfffffff;
    memw();
    memw();
    _DAT_ram_3ff20cac = _DAT_ram_3ff20cac & 0xfffffff;
    memw();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_MacTimSetFunc(void)

{
  undefined4 in_a2;
  
  memw();
  memw();
  DAT_ram_0040e9d4 = in_a2;
  _DAT_ram_3ff21014 = _DAT_ram_3ff21014 | 0x80000000;
  return;
}



// WARNING: Removing unreachable block (ram,0x00402e41)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_MacTimArm(void)

{
  uint uVar1;
  int in_a2;
  
  if (NMIIrqIsOn == '\0') {
    vPortEnterCritical();
    memw();
    memw();
    _DAT_ram_3ff20c18 = 0x8000000;
  }
  uVar1 = _DAT_ram_3ff21098;
  memw();
  memw();
  memw();
  _DAT_ram_3ff2109c = _DAT_ram_3ff21004 + in_a2;
  _DAT_ram_3ff210a0 = _DAT_ram_3ff21008;
  if (_DAT_ram_3ff2109c <= _DAT_ram_3ff21004) {
    _DAT_ram_3ff210a0 = _DAT_ram_3ff21008 + 1;
  }
  memw();
  memw();
  memw();
  _DAT_ram_3ff21098 = _DAT_ram_3ff21098 | 0x80000000;
  memw();
  if (NMIIrqIsOn == '\0') {
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar1,&DAT_ram_3ff21004);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x00402ef1)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_MacTim1Arm(void)

{
  uint uVar1;
  int in_a2;
  
  if (NMIIrqIsOn == '\0') {
    vPortEnterCritical();
    memw();
    memw();
    _DAT_ram_3ff20c18 = 0x8000000;
  }
  uVar1 = _DAT_ram_3ff210c8;
  memw();
  memw();
  memw();
  _DAT_ram_3ff210cc = _DAT_ram_3ff21048 + in_a2;
  _DAT_ram_3ff210d0 = _DAT_ram_3ff2104c;
  if (_DAT_ram_3ff210cc <= _DAT_ram_3ff21048) {
    _DAT_ram_3ff210d0 = _DAT_ram_3ff2104c + 1;
  }
  memw();
  memw();
  memw();
  _DAT_ram_3ff210c8 = _DAT_ram_3ff210c8 | 0x80000000;
  memw();
  if (NMIIrqIsOn == '\0') {
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar1,&DAT_ram_3ff21048);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_EnableTransmit(void)

{
  memw();
  memw();
  memw();
  _DAT_ram_00411768 = _DAT_ram_00411768 + 1;
  _DAT_ram_3ff20dc0 = 0;
  _DAT_ram_3ff20dc4 = _DAT_ram_3ff20dc4 | 0xc0000000;
  return;
}



void wDev_DisableTransmit(void)

{
  uint in_a2;
  
  memw();
  memw();
  *(uint *)(&DAT_ram_3ff20dc4 + (in_a2 & 0xff) * 8) =
       *(uint *)(&DAT_ram_3ff20dc4 + (in_a2 & 0xff) * 8) & 0x3fffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void Tx_Copy2Queue(void)

{
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_3ff20dc4 = _DAT_ram_3ff20cdc & 0x3fffffff;
  _DAT_ram_3ff20dc8 = _DAT_ram_3ff20ce0;
  _DAT_ram_3ff20dcc = _DAT_ram_3ff20ce4;
  _DAT_ram_3ff20dd0 = _DAT_ram_3ff20ce8;
  return;
}



void wDev_ProcessCollision(void)

{
  uint in_a2;
  
  wDev_DisableTransmit(in_a2 & 0xff);
  *(int *)(&DAT_ram_00411768 + ((in_a2 & 0xff) + 0x18) * 4) =
       *(int *)(&DAT_ram_00411768 + ((in_a2 & 0xff) + 0x18) * 4) + 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_GetTxqCollisions(void)

{
  memw();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_ClearTxqCollisions(void)

{
  memw();
  memw();
  _DAT_ram_3ff20cc0 = _DAT_ram_3ff20cc0 & 0xfffff000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_SetWaitingQueue(void)

{
  uint in_a2;
  uint *puVar1;
  
  memw();
  _DAT_ram_3ff20cb0 = in_a2 & 0xf | _DAT_ram_3ff20cb0 & 0xfffffff0;
  memw();
  puVar1 = (uint *)((8 - (in_a2 & 0xff)) * 0x14 + 0x3ff20d04);
  memw();
  memw();
  *puVar1 = *puVar1 & 0x7fffffff;
  memw();
  memw();
  *puVar1 = *puVar1 | 0x40000000;
  return;
}



void wDev_ClearWaitingQueue(void)

{
  uint in_a2;
  uint *puVar1;
  
  puVar1 = (uint *)((8 - (in_a2 & 0xff)) * 0x14 + 0x3ff20d04);
  memw();
  memw();
  *puVar1 = *puVar1 & 0xbfffffff;
  return;
}



void wDev_SetFrameAckType(void)

{
  uint unaff_a3;
  
  memw();
  memw();
  uRam00000000 = uRam00000000 & 0xfffffff0 | unaff_a3 & 0xff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void wDev_AppendRxBlocks(void)

{
  uint *in_a2;
  int unaff_a3;
  uint unaff_a4;
  uint uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint unaff_a7;
  uint *puVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar1 = unaff_a4 & 0xffff;
  uVar6 = 0;
  uVar3 = 0xff000fff;
  for (puVar4 = in_a2; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[2]) {
    memw();
    memw();
    *puVar4 = *puVar4 | 0x80000000;
    memw();
    uVar6 = uVar6 + 1 & 0xffff;
    memw();
    *puVar4 = *puVar4 & 0xbfffffff;
    memw();
    memw();
    *puVar4 = *puVar4 & 0xdfffffff;
    memw();
    memw();
    unaff_a7 = *puVar4 & 0xff000fff;
    memw();
    *puVar4 = unaff_a7;
  }
  if (uVar6 != uVar1) {
    printf("ass:%d,%d\n",uVar6,uVar1,0xdfffffff,0xff000fff,unaff_a7);
    ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x633,0xdfffffff,0xff000fff,unaff_a7);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (NMIIrqIsOn == '\0') {
    vPortEnterCritical(&NMIIrqIsOn,0,uVar1,&NMIIrqIsOn,0xff000fff,unaff_a7);
    memw();
    memw();
    _DAT_ram_3ff20c18 = 0x8000000;
  }
  puVar2 = wDevCtrl;
  uVar5 = (ushort)uVar6;
  if (wDevCtrl._0_2_ == 0) {
    memw();
    wDevCtrl._0_2_ = uVar5;
    wDevCtrl._8_4_ = in_a2;
    wDevCtrl._12_4_ = unaff_a3;
    _DAT_ram_3ff20008 = in_a2;
    if (uVar6 == 1) {
      *(undefined4 *)(unaff_a3 + 8) = 0x41195c;
    }
  }
  else {
    if (wDevCtrl._0_2_ == 1) {
      puVar4 = in_a2;
      if (wDevCtrl._16_4_ != (uint *)0x0) {
        *(uint **)(wDevCtrl._20_4_ + 8) = in_a2;
        uVar6 = uVar6 + wDevCtrl._2_2_;
        puVar4 = wDevCtrl._16_4_;
      }
      wDevCtrl._16_4_ = puVar4;
      wDevCtrl._2_2_ = (ushort)uVar6;
      wDevCtrl._20_4_ = unaff_a3;
    }
    else {
      wDevCtrl._0_2_ = uVar5 + wDevCtrl._0_2_;
      *(uint **)(wDevCtrl._12_4_ + 8) = in_a2;
      wDevCtrl._12_4_ = unaff_a3;
    }
  }
  if (1 < (uint)wDevCtrl._0_2_ + (uint)wDevCtrl._2_2_) {
    memw();
    uVar3 = 0x10000000;
    _DAT_ram_3ff20ca8 = _DAT_ram_3ff20ca8 & 0xfffffff | 0x10000000;
    memw();
    memw();
    puVar2 = (undefined1 *)((uint)_DAT_ram_3ff20cac & 0xfffffff | 0x50000000);
    memw();
    _DAT_ram_3ff20cac = puVar2;
  }
  if (NMIIrqIsOn == '\0') {
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,puVar2,&NMIIrqIsOn,uVar3,unaff_a7);
  }
  return;
}



void FUN_ram_004032c4(void)

{
  undefined4 uVar1;
  
  uVar1 = wDevCtrl._8_4_;
  FUN_ram_00402d34();
  wDev_AppendRxBlocks(uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void wDev_AppendRxAmpduLensBlocks(void)

{
  uint *in_a2;
  undefined4 unaff_a3;
  short unaff_a4;
  uint unaff_a7;
  uint *puVar1;
  short sVar2;
  
  sVar2 = 0;
  for (puVar1 = in_a2; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
    memw();
    sVar2 = sVar2 + 1;
    memw();
    *puVar1 = *puVar1 | 0x80000000;
    memw();
    memw();
    *puVar1 = *puVar1 & 0xbfffffff;
    memw();
    memw();
    *puVar1 = *puVar1 & 0xdfffffff;
    memw();
    memw();
    unaff_a7 = *puVar1 & 0xff000fff;
    memw();
    *puVar1 = unaff_a7;
  }
  if (sVar2 != unaff_a4) {
    ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x67d,0xdfffffff,0xff000fff,unaff_a7);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (NMIIrqIsOn == '\0') {
    vPortEnterCritical(&NMIIrqIsOn,&NMIIrqIsOn,0,0xdfffffff,0xff000fff,unaff_a7);
    memw();
    memw();
    _DAT_ram_3ff20c18 = 0x8000000;
  }
  if (wDevCtrl._48_4_ == (uint *)0x0) {
    memw();
    wDevCtrl._48_4_ = in_a2;
    _DAT_ram_3ff2000c = in_a2;
  }
  else {
    *(uint **)(wDevCtrl._52_4_ + 8) = in_a2;
  }
  wDevCtrl[4] = (char)sVar2 + wDevCtrl[4];
  wDevCtrl._52_4_ = unaff_a3;
  if (NMIIrqIsOn == '\0') {
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,wDevCtrl,0xdfffffff,0xff000fff,unaff_a7)
    ;
  }
  return;
}



void FUN_ram_004033f4(void)

{
  undefined4 uVar1;
  int in_a2;
  
  uVar1 = wDevCtrl._48_4_;
  wDevCtrl._48_4_ = *(undefined4 *)(in_a2 + 8);
  *(undefined4 *)(in_a2 + 8) = 0;
  wDevCtrl[4] = wDevCtrl[4] + -1;
  wDev_AppendRxAmpduLensBlocks(uVar1);
  return;
}



void wDev_Get_KeyEntry(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint *in_a2;
  byte *unaff_a3;
  uint uVar3;
  uint *unaff_a4;
  undefined *unaff_a5;
  void *unaff_a7;
  size_t in_stack_00000000;
  
  uVar2 = uRam3ff21404;
  uVar1 = uRam3ff21400;
  memw();
  memw();
  *unaff_a5 = (char)uRam3ff21400;
  unaff_a5[1] = (char)((uint)uVar1 >> 8);
  unaff_a5[3] = (char)((uint)uVar1 >> 0x18);
  unaff_a5[4] = (char)uVar2;
  unaff_a5[2] = (char)((uint)uVar1 >> 0x10);
  unaff_a5[5] = (char)(uVar2 >> 8);
  *unaff_a3 = (byte)(uVar2 >> 0x18) & 1;
  *unaff_a4 = uVar2 >> 0x1e;
  uVar3 = uVar2 >> 0x12 & 7;
  if (((uVar2 >> 0x10 & 3) == 1) && (uVar3 == 1)) {
    uVar3 = 5;
  }
  *in_a2 = uVar3;
  memcpy(unaff_a7,(void *)0x3ff21408,in_stack_00000000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_GetBAInfo(void)

{
  byte *in_a2;
  ushort *unaff_a3;
  undefined4 *unaff_a4;
  undefined4 *unaff_a5;
  
  memw();
  *in_a2 = (byte)(_DAT_ram_3ff20174 >> 0xc) & 0xf;
  memw();
  *unaff_a3 = (ushort)_DAT_ram_3ff20174 & 0xfff;
  memw();
  *unaff_a4 = _DAT_ram_3ff20168;
  memw();
  *unaff_a5 = _DAT_ram_3ff20164;
  return;
}



void wDev_set_promiscuous_filter(void)

{
  undefined *in_a2;
  
  DAT_ram_0040d388 = *in_a2;
  DAT_ram_0040d389 = in_a2[1];
  DAT_ram_0040d38a = in_a2[2];
  DAT_ram_0040d38b = in_a2[3];
  return;
}



void wDev_get_promiscuous_filter(void)

{
  undefined uVar1;
  undefined uVar2;
  undefined *in_a2;
  
  uVar1 = DAT_ram_0040d389;
  *in_a2 = DAT_ram_0040d388;
  uVar2 = DAT_ram_0040d38a;
  in_a2[1] = uVar1;
  uVar1 = DAT_ram_0040d38b;
  in_a2[2] = uVar2;
  in_a2[3] = uVar1;
  return;
}



void wDev_set_promiscuous_ctrl_filter(void)

{
  undefined *in_a2;
  
  DAT_ram_0040e9e0._0_1_ = *in_a2;
  DAT_ram_0040e9e0._1_1_ = in_a2[1];
  DAT_ram_0040e9e0._2_1_ = in_a2[2];
  DAT_ram_0040e9e0._3_1_ = in_a2[3];
  return;
}



void wDev_get_promiscuous_ctrl_filter(void)

{
  undefined uVar1;
  undefined uVar2;
  undefined *in_a2;
  
  uVar1 = DAT_ram_0040e9e0._1_1_;
  *in_a2 = (undefined)DAT_ram_0040e9e0;
  uVar2 = DAT_ram_0040e9e0._2_1_;
  in_a2[1] = uVar1;
  uVar1 = DAT_ram_0040e9e0._3_1_;
  in_a2[2] = uVar2;
  in_a2[3] = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_SnifferRxLDPC(void)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *__dest;
  int iVar4;
  uint *__src;
  
  puVar1 = _DAT_ram_3ff21100;
  if ((_DAT_ram_0040d388 >> 3 & 1) != 0) {
    memw();
    memw();
    if (((0x3d < (_DAT_ram_3ff20038 - 0x42U & 0xff)) &&
        (__src = *(uint **)(wDevCtrl._8_4_ + 4), (*__src & 0xc000) != 0)) &&
       ((uVar2 = __src[1], (uVar2 >> 7 & 1) != 0 ||
        ((7 < (uVar2 & 0x7f) || ((uVar2 >> 0x1e & 1) != 0)))))) {
      puVar3 = (undefined4 *)&DAT_ram_00000008;
      (**(code **)(_g_osi_funcs_p + 0x94))(8,4,__src);
      if (puVar3 != (undefined4 *)0x0) {
        __dest = (uint *)&DAT_ram_0000000c;
        (**(code **)(_g_osi_funcs_p + 0x94))(0xc,4,__src);
        if (__dest != (uint *)0x0) {
          memcpy(__dest,__src,0xc);
          memw();
          iVar4 = 999;
          if ((uint)(_DAT_ram_3ff210fc - (int)puVar1) < 1000) {
            (**(code **)(_g_osi_funcs_p + 0xa4))(__dest,*(code **)(_g_osi_funcs_p + 0xa4),puVar1);
            __src = puVar1;
          }
          else {
            chm_get_current_channel(999,_DAT_ram_3ff210fc - (int)puVar1,puVar1);
            if (iVar4 == 0) {
              ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x84f);
              do {
                    // WARNING: Do nothing block with infinite loop
              } while( true );
            }
            __src = (uint *)__dest[2];
            __dest[2] = (uint)__src & 0xfff0ffff | *(byte *)(iVar4 + 6) & 0xf;
            if ((((*__dest & 0xc000) != 0) &&
                (((uVar2 = __dest[1], (uVar2 >> 7 & 1) != 0 || (7 < (uVar2 & 0x7f))) ||
                 ((uVar2 >> 0x1e & 1) != 0)))) && ((uVar2 & 0x7f) < 0x20)) {
              *puVar3 = 3;
              puVar3[1] = __dest;
              iVar4 = 9;
              pp_post(9,puVar3,__src);
              if (iVar4 != 1) {
                return;
              }
            }
            (**(code **)(_g_osi_funcs_p + 0xa4))(__dest,*(code **)(_g_osi_funcs_p + 0xa4),__src);
          }
        }
        (**(code **)(_g_osi_funcs_p + 0xa4))(puVar3,*(code **)(_g_osi_funcs_p + 0xa4),__src);
      }
    }
  }
  return;
}



void esp_wifi_set_promiscuous_data_len(void)

{
  uint in_a2;
  
  if (0x5dc < in_a2) {
    DAT_ram_0040d380 = 0x5dc;
    return;
  }
  DAT_ram_0040d380 = in_a2;
  return;
}



void esp_wifi_get_promiscuous_data_len(void)

{
  undefined4 *in_a2;
  
  if (in_a2 != (undefined4 *)0x0) {
    *in_a2 = DAT_ram_0040d380;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_SnifferRxHT40_data(void)

{
  uint *puVar1;
  uint *__dest;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  
  puVar1 = (uint *)&DAT_ram_00000008;
  (**(code **)(_g_osi_funcs_p + 0x94))(8,4,*(code **)(_g_osi_funcs_p + 0x94));
  if (puVar1 == (uint *)0x0) goto LAB_ram_004037c8;
  pcVar5 = *(code **)(_g_osi_funcs_p + 0x94);
  __dest = (uint *)&DAT_ram_0000000c;
  (*pcVar5)(0xc,4,pcVar5);
  if (__dest == (uint *)0x0) {
LAB_ram_0040379a:
    pcVar4 = *(code **)(_g_osi_funcs_p + 0xa4);
    __dest = puVar1;
  }
  else {
    pcVar5 = (code *)&DAT_ram_0000000c;
    memcpy(__dest,*(void **)(wDevCtrl._8_4_ + 4),0xc);
    memw();
    if (_DAT_ram_3ff210fc != DAT_ram_0040e9d0) {
      (**(code **)(_g_osi_funcs_p + 0xa4))(__dest,*(code **)(_g_osi_funcs_p + 0xa4),0xc);
      goto LAB_ram_0040379a;
    }
    iVar3 = DAT_ram_0040e9d0;
    chm_get_current_channel(DAT_ram_0040e9d0,_DAT_ram_3ff210fc,0xc);
    if (iVar3 == 0) {
      ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x894);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    pcVar5 = (code *)__dest[2];
    __dest[2] = (uint)pcVar5 & 0xfff0ffff | *(byte *)(iVar3 + 6) & 0xf;
    if (((*__dest & 0xc000) == 0) ||
       (((uVar2 = __dest[1], (uVar2 >> 7 & 1) == 0 && ((uVar2 & 0x7f) < 8)) ||
        (0x1f < (uVar2 & 0x7f))))) {
      (**(code **)(_g_osi_funcs_p + 0xa4))(__dest,*(code **)(_g_osi_funcs_p + 0xa4),pcVar5);
      goto LAB_ram_0040379a;
    }
    *puVar1 = 3;
    puVar1[1] = (uint)__dest;
    iVar3 = 9;
    pp_post(9,puVar1,pcVar5);
    if (iVar3 != 1) goto LAB_ram_004037c8;
    (**(code **)(_g_osi_funcs_p + 0xa4))(puVar1,*(code **)(_g_osi_funcs_p + 0xa4),pcVar5);
    pcVar4 = *(code **)(_g_osi_funcs_p + 0xa4);
  }
  (*pcVar4)(__dest,pcVar4,pcVar5);
LAB_ram_004037c8:
  memw();
  memw();
  _DAT_ram_3ff20c70 = _DAT_ram_3ff20c70 | 2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_SnifferRxHT40(void)

{
  memw();
  DAT_ram_0040e9d0 = _DAT_ram_3ff210fc;
  while (memw(), (uint)(_DAT_ram_3ff20c00 - _DAT_ram_3ff210fc) < 0x1e) {
    memw();
    if ((_DAT_ram_3ff20c1c & 4) != 0) {
      return;
    }
  }
  memw();
  if (((_DAT_ram_3ff20c1c & 4) != 0) &&
     (memw(), (uint)(_DAT_ram_3ff21100 - _DAT_ram_3ff210fc) < 0x1e)) {
    return;
  }
  memw();
  if ((_DAT_ram_3ff201d4 >> 8 & 0xff) < 8) {
    return;
  }
  memw();
  _DAT_ram_3ff20c70 = _DAT_ram_3ff20c70 & 0xfffffffd;
  memw();
  do {
    memw();
  } while ((_DAT_ram_3ff20c1c & 4) == 0);
  memw();
  _DAT_ram_3ff20c24 = 4;
  memw();
  if ((0x3d < (_DAT_ram_3ff20038 - 0x42U & 0xff)) && ((_DAT_ram_0040d388 >> 3 & 1) != 0)) {
    pp_post(0x10,0,&DAT_ram_3ff20c1c,0x1d,&DAT_ram_3ff20c00,4);
    return;
  }
  memw();
  memw();
  _DAT_ram_3ff20c24 = 4;
  _DAT_ram_3ff20c70 = _DAT_ram_3ff20c70 | 2;
  return;
}



// WARNING: Removing unreachable block (ram,0x00403c45)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_ProcessFiq(void)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint **ppuVar15;
  undefined1 *unaff_a5;
  undefined1 *unaff_a6;
  uint **ppuVar16;
  uint unaff_a7;
  uint uVar17;
  uint *puVar18;
  int *piVar19;
  uint *puVar20;
  undefined2 uStack68;
  
  uVar4 = _DAT_ram_3ff20c18;
  memw();
  memw();
  memw();
  _DAT_ram_3ff20c18 = 0;
  uVar17 = _DAT_ram_3ff20c20;
  if ((_DAT_ram_3ff20c20 & 0x8000000) != 0) {
    memw();
    _DAT_ram_3ff20c24 = 0x8000000;
    uVar17 = _DAT_ram_3ff20c20 & 0xf7ffffff;
    if (DAT_ram_0040e9d4 != (code *)0x0) {
      (*DAT_ram_0040e9d4)(DAT_ram_0040e9d4,&DAT_ram_3ff20c24,uVar4);
    }
  }
  uVar5 = _DAT_ram_3ff20c84;
  puVar10 = &NMIIrqIsOn;
  NMIIrqIsOn = NMIIrqIsOn + '\x01';
  if (NMIIrqIsOn == '\x01') {
    puVar10 = (undefined1 *)0x8000000;
    memw();
    _DAT_ram_3ff20c18 = 0x8000000;
  }
  if (uVar17 != 0) {
    memw();
    memw();
    _DAT_ram_3ff20c24 = uVar17;
    if ((uVar17 >> 0x1c & 1) != 0) {
      ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x4ae);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    if (((uVar17 >> 0x1a & 1) != 0) && (DAT_ram_0040e9d8 != (code *)0x0)) {
      (*DAT_ram_0040e9d8)(DAT_ram_0040e9d8,puVar10,uVar4);
    }
    if ((uVar17 & 0xc) == 8) {
      wDev_SnifferRxHT40(8,puVar10,uVar4);
    }
    else {
      if ((uVar17 & 0x104) == 4) {
        puVar10 = (undefined1 *)0x0;
        pp_post(0x11,0,uVar4);
      }
    }
    uVar1 = _DAT_ram_3ff210fc;
    puVar3 = _DAT_ram_3ff20014;
    if ((uVar17 >> 8 & 1) != 0) {
      memw();
      if (wDevCtrl[5] == '\0') {
        memw();
        memw();
        memw();
        if (_DAT_ram_3ff20014 == (uint *)0x0) {
          ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x4d4);
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        if (_DAT_ram_3ff20014[2] == 0) {
          ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x4d5);
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        memw();
        puVar20 = wDevCtrl._8_4_;
        if ((*_DAT_ram_3ff20014 >> 0x1e & 1) == 0) {
          ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x4d6);
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        do {
          puVar13 = (uint *)puVar20[2];
          uVar14 = (uint)(puVar20 == puVar3);
          puVar18 = (uint *)wDevCtrl._8_4_[1];
          uVar12 = 0x8000000;
          ppuVar16 = (uint **)(puVar18[1] & 0x8000000);
          chm_get_current_channel(0x8000000,0,uVar14,unaff_a5,ppuVar16,unaff_a7);
          if (uVar12 == 0) {
            ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x17e,unaff_a5,ppuVar16,unaff_a7);
            do {
                    // WARNING: Do nothing block with infinite loop
            } while( true );
          }
          uVar11 = 0x7fff;
          puVar18[2] = puVar18[2] & 0xfff0ffff | *(byte *)(uVar12 + 6) & 0xf;
          uStack68 = 0x7fff;
          uVar2 = *(ushort *)(puVar18 + 3);
          unaff_a7 = (uint)uVar2;
          if ((-0x5a < *(char *)puVar18) && (uVar6 = (uint)(byte)TestStaFreqCalValOK, uVar6 != 0)) {
            phy_get_bb_freqoffset(uVar6,0x7fff,(int)*(char *)puVar18,unaff_a5,ppuVar16,unaff_a7);
            uStack68 = (undefined2)(uVar6 >> 0x10);
            if (((uVar6 & 0xffff) + 299 & 0xffff) < 599) {
              uStack68 = (undefined2)((uVar6 & 0xffff) + (uint)_TestStaFreqCalValDev >> 0x10);
            }
          }
          if (ppuVar16 != (uint **)0x0) goto LAB_ram_00403c51;
          uVar6 = *puVar18;
          ppuVar15 = ppuVar16;
          if ((uVar6 & 0x30000000) == 0) {
            if ((uVar6 & 0xc0000000) == 0) {
              ppuVar15 = (uint **)0x1;
            }
            else {
              if ((unaff_a7 & 0xf) == 4) {
LAB_ram_00403c18:
                ppuVar15 = (uint **)0x1;
              }
              else {
                if ((unaff_a7 & 0xf) != 8) {
                  if ((uVar2 & 0xf) != 0) {
                    DAT_ram_004118b4 = DAT_ram_004118b4 + 1;
                    goto LAB_ram_00403c18;
                  }
                  if ((unaff_a7 & 0xff) != 0x40) {
                    if (((unaff_a7 & 0xff) != 0x80) || (uVar14 == 0)) {
                      ppuVar16 = (uint **)0x1;
                      ppuVar15 = (uint **)0x1;
                      goto LAB_ram_00403c29;
                    }
                    DAT_ram_004118b0 = DAT_ram_004118b0 + 1;
                  }
                  ppuVar16 = (uint **)0x1;
                }
              }
LAB_ram_00403c29:
              DAT_ram_004118ac = DAT_ram_004118ac + 1;
            }
          }
          else {
            if ((unaff_a7 & 0xf) == 4) {
              uVar6 = unaff_a7 & 0xf0;
              if (uVar6 == 0x90) {
                DAT_ram_00411898 = DAT_ram_00411898 + 1;
              }
              else {
                if (uVar6 == 0xa0) {
                  DAT_ram_0041189c = DAT_ram_0041189c + 1;
                  goto LAB_ram_00403c55;
                }
                if (uVar6 == 0x80) {
                  DAT_ram_00411894 = DAT_ram_00411894 + 1;
                }
                else {
                  DAT_ram_004118a0 = DAT_ram_004118a0 + 1;
                }
              }
LAB_ram_00403c51:
              ppuVar16 = (uint **)0x0;
              ppuVar15 = (uint **)0x1;
            }
            else {
              if ((unaff_a7 & 0xf) == 8) {
                DAT_ram_004118a8 = DAT_ram_004118a8 + 1;
                rcUpdateDataRxDone(puVar18,0x7fff,&DAT_ram_00411768,unaff_a5,0,unaff_a7);
              }
              else {
                if ((uVar2 & 0xf) != 0) {
                  DAT_ram_004118b4 = DAT_ram_004118b4 + 1;
                  goto LAB_ram_00403c51;
                }
                if ((unaff_a7 & 0xf0) == 0x80) {
                  if ((uVar6 & 0x50000000) == 0x50000000) {
                    *puVar18 = uVar6 & 0x7fffffff;
                    ppuVar15 = (uint **)(uVar14 ^ 1);
                  }
                  else {
                    uVar11 = 1;
                    if ((uVar6 & 0xa0000000) != 0xa0000000) {
                      ppuVar16 = (uint **)0x1;
                    }
                    ppuVar15 = (uint **)((uint)ppuVar16 & 0xff);
                  }
                }
                DAT_ram_004118a4 = DAT_ram_004118a4 + 1;
                ppuVar16 = (uint **)0x1;
              }
            }
          }
LAB_ram_00403c55:
          unaff_a6 = wDevCtrl;
          if (((uint)wDevCtrl._0_2_ + (uint)wDevCtrl._2_2_ < 2) && (ppuVar16 == (uint **)0x0)) {
            unaff_a7 = unaff_a7 & 0xf;
            if (unaff_a7 == 8) {
              uVar6 = wDevCtrl._8_4_[1];
              puVar10 = (undefined1 *)0x18;
              unaff_a7 = (uint)*(byte *)(uVar6 + 0xd);
              if ((unaff_a7 & 3) == 3) {
                puVar10 = (undefined1 *)0x1e;
              }
              if ((*(byte *)(uVar6 + 0xc) & 0x8c) == 0x88) {
                puVar10 = puVar10 + 2;
              }
              unaff_a6 = (undefined1 *)(*puVar18 >> 0x10 & 0xfff);
              if ((*puVar18 & 0xc000) != 0) {
                unaff_a6 = (undefined1 *)(puVar18[1] >> 8 & 0xffff);
              }
              if (((unaff_a7 & 3) == 2) && (puVar10 <= unaff_a6)) {
                puVar10 = puVar10 + uVar6 + 0xc;
                puVar7 = puVar10;
                if ((*(byte *)(uVar6 + 0xd) >> 6 & 1) != 0) {
                  puVar7 = puVar10 + 4;
                  if (((byte)puVar10[3] >> 5 & 1) != 0) {
                    puVar7 = puVar10 + 8;
                  }
                }
                unaff_a5 = (undefined1 *)(uint)(byte)puVar7[6];
                unaff_a6 = unaff_a5;
                if (unaff_a5 == (undefined1 *)0x8e88) goto LAB_ram_00403cd9;
              }
            }
            ppuVar15 = (uint **)0x1;
          }
LAB_ram_00403cd9:
          if ((DAT_ram_004118c8 == '\x01') || (ppuVar15 != (uint **)0x0)) {
LAB_ram_00403d11:
            FUN_ram_004032c4(puVar20,1,ppuVar15,unaff_a5,unaff_a6,unaff_a7);
          }
          else {
            memw();
            if ((*puVar20 & 0xfff000) == 0) {
              ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x280,unaff_a5,unaff_a6,unaff_a7);
              do {
                    // WARNING: Do nothing block with infinite loop
              } while( true );
            }
            ppuVar15 = (uint **)&DAT_ram_00000008;
            esf_rx_buf_alloc(8,uVar11,*puVar20,unaff_a5,unaff_a6,unaff_a7);
            if (ppuVar15 == (uint **)0x0) goto LAB_ram_00403d11;
            puVar18 = ppuVar15[8];
            puVar18[1] = uVar1;
            puVar18[2] = uVar12;
            puVar18 = wDevCtrl._8_4_;
            ppuVar15[1] = puVar20;
            *ppuVar15 = puVar18;
            puVar18 = (uint *)puVar18[1];
            *(undefined2 *)(ppuVar15 + 2) = 1;
            ppuVar15[3] = puVar18;
            memw();
            unaff_a5 = (undefined1 *)*puVar20;
            memw();
            *puVar20 = (uint)unaff_a5 & 0xbfffffff;
            *(undefined2 *)(ppuVar15 + 5) = uStack68;
            FUN_ram_00402d34(1,puVar20,ppuVar15,unaff_a5,unaff_a6,unaff_a7);
            lmacRxDone(ppuVar15,puVar20,ppuVar15,unaff_a5,unaff_a6,unaff_a7);
          }
          puVar10 = DAT_ram_0041188c + 1;
          puVar20 = puVar13;
          DAT_ram_0041188c = puVar10;
        } while (uVar14 == 0);
      }
      else {
        puVar10 = (undefined1 *)0x0;
        pp_post(0xf,0,uVar4);
      }
    }
    piVar8 = (int *)0x30000;
    piVar19 = (int *)(uVar5 >> 0xc & 0xf);
    if ((uVar17 & 0x30000) != 0) {
      piVar8 = piVar19;
      lmacProcessRtsStart(piVar19,puVar10,uVar5,unaff_a5,unaff_a6,unaff_a7);
    }
    if ((uVar17 >> 0x13 & 1) != 0) {
      memw();
      uVar1 = uVar5 >> 0x1c;
      uVar12 = 0x7f;
      if ((_DAT_ram_3ff20e04 >> 0x18 & 1) != 0) {
        uVar12 = _DAT_ram_3ff20e04 >> 0x10 & 0xff;
      }
      if ((piVar19 != (int *)0xa) && ((int *)0x7 < piVar19)) {
        ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x505,unaff_a5,unaff_a6,unaff_a7);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      iVar9 = our_tx_eb;
      if ((our_tx_eb == 0) && ((uVar17 >> 0x12 & 1) != 0)) {
        lmacProcessTXStartData(piVar19,uVar12,uVar5,unaff_a5,unaff_a6,unaff_a7);
        iVar9 = -0x40001;
        uVar17 = uVar17 & 0xfffbffff;
      }
      if (uVar1 == 2) {
        lmacProcessCtsTimeout(piVar19,uVar12,uVar5,unaff_a5,unaff_a6,unaff_a7);
      }
      else {
        if (uVar1 < 3) {
          if (uVar1 == 0) {
            lmacProcessTxSuccess(piVar19,uVar12,uVar5,unaff_a5,unaff_a6,unaff_a7);
          }
          else {
            if (uVar1 != 1) {
LAB_ram_00403e25:
              ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x521,unaff_a5,unaff_a6,unaff_a7);
              do {
                    // WARNING: Do nothing block with infinite loop
              } while( true );
            }
            lmacProcessTxRtsError(uVar5 >> 0x10 & 0xff,piVar19,uVar5,unaff_a5,unaff_a6,unaff_a7);
          }
        }
        else {
          if (uVar1 == 4) {
            lmacProcessTxError(uVar5 >> 0x10 & 0xff,uVar12,uVar5,unaff_a5,unaff_a6,unaff_a7);
          }
          else {
            if (uVar1 != 5) goto LAB_ram_00403e25;
            lmacProcessAckTimeout(iVar9,uVar12,uVar5,unaff_a5,unaff_a6,unaff_a7);
          }
        }
      }
      piVar8 = (int *)(&DAT_ram_00411768 + (int)(piVar19 + 3) * 4);
      puVar10 = (undefined1 *)(*piVar8 + 1);
      *piVar8 = (int)puVar10;
    }
    if ((uVar17 >> 0x12 & 1) != 0) {
      if ((piVar19 != (int *)0xa) && ((int *)0x7 < piVar19)) {
        ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x52d,unaff_a5,unaff_a6,unaff_a7);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      lmacProcessTXStartData(piVar19,puVar10,uVar5,unaff_a5,unaff_a6,unaff_a7);
      piVar8 = piVar19;
    }
    if ((uVar17 >> 0x1d & 1) != 0) {
      lmacProcessAllTxTimeout(piVar8,puVar10,uVar5,unaff_a5,unaff_a6,unaff_a7);
    }
    if ((uVar17 >> 0x14 & 1) != 0) {
      lmacProcessCollisions(piVar8,puVar10,uVar5,unaff_a5,unaff_a6,unaff_a7);
    }
    if ((uVar17 >> 9 & 1) != 0) {
      DAT_ram_004118bc = DAT_ram_004118bc + 1;
    }
    if ((uVar17 >> 0x17 & 1) != 0) {
      DAT_ram_004118c0 = DAT_ram_004118c0 + 1;
    }
  }
  memw();
  memw();
  memw();
  NMIIrqIsOn = NMIIrqIsOn + -1;
  _DAT_ram_3ff00000 = 0;
  _DAT_ram_3ff20c18 = uVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void wdev_recv_sniffer_data(void)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *__dest;
  int iVar5;
  uint *puVar6;
  code *__dest_00;
  undefined1 *puVar7;
  int iVar8;
  code *pcVar9;
  uint *__src;
  uint *puVar10;
  uint unaff_a6;
  uint *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint *puVar14;
  uint *puStack76;
  uint *puStack72;
  uint uStack68;
  uint *puStack56;
  
  puVar2 = _DAT_ram_3ff20014;
  memw();
  memw();
  memw();
  memw();
  if (_DAT_ram_3ff20014 == (uint *)0x0) {
    ets_printf("%s %u\n",&DAT_ram_0040b9a4,0xa13,0);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (_DAT_ram_3ff20014[2] == 0) {
    ets_printf("%s %u\n",&DAT_ram_0040b9a4,0xa14,_DAT_ram_3ff20014);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  memw();
  puStack76 = wDevCtrl._8_4_;
  if ((*_DAT_ram_3ff20014 & 0x40000000) == 0) {
    ets_printf("%s %u\n",&DAT_ram_0040b9a4,0xa15,_DAT_ram_3ff20014);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
LAB_ram_00404299:
  puVar6 = wDevCtrl._48_4_;
  if (puStack76 == (uint *)0x0) {
    return;
  }
  for (; memw(), (*puStack76 & 0x40000000) == 0; puStack76 = (uint *)puStack76[2]) {
  }
  puVar7 = wDevCtrl;
  puVar12 = (undefined1 *)0x1;
  __src = (uint *)wDevCtrl._8_4_[1];
  uVar13 = __src[1] >> 0x1b & 1;
  for (puVar11 = wDevCtrl._8_4_; memw(), (*puVar11 & 0x40000000) == 0; puVar11 = (uint *)puVar11[2])
  {
    puVar12 = (undefined1 *)((uint)(puVar12 + 1) & 0xffff);
  }
  bVar1 = *(byte *)(__src + 3);
  uStack68 = bVar1 & 0xf;
  if ((bVar1 & 0xf) != 0) {
    if (uStack68 != 4) {
      puVar7 = (undefined1 *)(uStack68 - 8);
      puVar10 = (uint *)0x2;
      uVar3 = 0x14;
      uStack68 = 2;
      if ((code *)puVar7 == (code *)0x0) {
        uVar3 = 4;
      }
      goto LAB_ram_00403fe1;
    }
    puVar10 = (uint *)0x1;
    uStack68 = 1;
    uVar3 = 2;
    puVar7 = DAT_ram_0040e9e0;
    if (((uint)DAT_ram_0040e9e0 >> ((bVar1 >> 4) + 0x10 & 0x1f) & 1) == 0) goto LAB_ram_00403fe1;
LAB_ram_00403fe9:
    FUN_ram_004032c4(puVar11,puVar12,puVar7,puVar10,unaff_a6);
    if (uVar13 == 0) goto LAB_ram_00404285;
LAB_ram_00404065:
    puVar12 = wDevCtrl;
    goto LAB_ram_004041a9;
  }
  uVar3 = 1;
  puVar10 = __src;
LAB_ram_00403fe1:
  if ((uVar3 & _DAT_ram_0040d388) == 0) goto LAB_ram_00403fe9;
  if (uVar13 != 0) {
    puStack72 = __src + 3;
    puVar14 = (uint *)wDevCtrl._48_4_[1];
    puStack56 = (uint *)0x0;
    do {
      memw();
      puVar10 = puVar6;
      if (((uint *)(puVar6[1] + (*puVar6 >> 0xc & 0xfff)) <= puVar14) ||
         (puVar10 = puStack56, (uint *)(uint)*(byte *)((int)__src + 9) <= puStack56))
      goto LAB_ram_0040419d;
      puVar7 = (code *)0x1b;
      if (((byte)(*(char *)puVar14 + 0x1fU) < 0x1c) || (*(char *)puVar14 == '\0')) {
        memw();
        puVar7 = (undefined1 *)(*wDevCtrl._8_4_ & 0xfff);
        puVar10 = puStack72;
        if ((code *)puVar7 + wDevCtrl._8_4_[1] <= puStack72 + 6) goto LAB_ram_0040419d;
        puStack56 = (uint *)((int)puStack56 + 1U & 0xffff);
        puVar10 = *(uint **)(_g_osi_funcs_p + 0x94);
        puVar4 = (uint *)&DAT_ram_00000008;
        (*(code *)puVar10)(8,4,g_osi_funcs_p,puVar10,unaff_a6);
        if (puVar4 == (uint *)0x0) {
          FUN_ram_004032c4(puVar11,puVar12,g_osi_funcs_p,puVar10,unaff_a6);
          puVar7 = g_osi_funcs_p;
          goto LAB_ram_00404065;
        }
        puVar10 = *(uint **)(_g_osi_funcs_p + 0x94);
        __dest = (uint *)&DAT_ram_00000034;
        (*(code *)puVar10)(0x34,4,g_osi_funcs_p,puVar10,unaff_a6);
        if (__dest == (uint *)0x0) {
          (**(code **)(_g_osi_funcs_p + 0xa4))
                    (puVar4,*(code **)(_g_osi_funcs_p + 0xa4),g_osi_funcs_p,puVar10,unaff_a6);
          FUN_ram_004032c4(puVar11,puVar12,g_osi_funcs_p,puVar10,unaff_a6);
          puVar7 = wDevCtrl;
          goto LAB_ram_004041a9;
        }
        memcpy(__dest,__src,0xc);
        if ((*__dest & 0xc000) == 0) {
          *__dest = *__dest & 0xf000ffff | *puVar14 >> 8 & 0xfff;
        }
        else {
          __dest[1] = __dest[1] & 0xff0000ff;
        }
        iVar5 = 0x1c;
        if ((*(byte *)((int)puStack72 + 1) & 3) == 3) {
          iVar5 = 0x22;
        }
        iVar8 = iVar5 + 2;
        if ((int)((uint)*(byte *)((int)puStack72 + 1) << 0x18) < 0) {
          iVar8 = iVar5 + 6;
        }
        unaff_a6 = iVar8 + 3U & 0xfffffffc;
        puVar10 = __dest + 3;
        memcpy(puVar10,puStack72,unaff_a6);
        puStack72 = (uint *)((int)puStack72 + unaff_a6);
        chm_get_current_channel(puVar10,puStack72,unaff_a6,__dest,unaff_a6);
        if (puVar10 == (uint *)0x0) {
          ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x992,__dest,unaff_a6);
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
        __dest[2] = __dest[2] & 0xfff0ffff | *(byte *)((int)puVar10 + 6) & 0xf;
        *puVar4 = uStack68;
        pcVar9 = _promiscuous_cb;
        puVar4[1] = (uint)__dest;
        if (pcVar9 != (code *)0x0) {
          *(char *)__dest = *(char *)__dest + -0x60;
          (*pcVar9)(__dest,uStack68,pcVar9,__dest,unaff_a6);
        }
        puVar7 = *(code **)(_g_osi_funcs_p + 0xa4);
        (*(code *)puVar7)(__dest,g_osi_funcs_p,puVar7,__dest,unaff_a6);
        (**(code **)(_g_osi_funcs_p + 0xa4))
                  (puVar4,*(code **)(_g_osi_funcs_p + 0xa4),puVar7,__dest,unaff_a6);
      }
      puVar14 = puVar14 + 1;
    } while( true );
  }
  pcVar9 = *(code **)(_g_osi_funcs_p + 0x94);
  puVar6 = (uint *)&DAT_ram_00000008;
  (*pcVar9)(8,4,pcVar9,puVar10,unaff_a6);
  if (puVar6 == (uint *)0x0) {
LAB_ram_0040420d:
    FUN_ram_004032c4(puVar11,puVar12,pcVar9,puVar10,unaff_a6);
  }
  else {
    uVar13 = *__src >> 0x10 & 0xfff;
    if ((*__src & 0xc000) != 0) {
      uVar13 = __src[1] >> 8 & 0xffff;
    }
    if (DAT_ram_0040d380 < uVar13) {
      uVar13 = DAT_ram_0040d380 & 0xffff;
    }
    pcVar9 = (code *)(uVar13 + 0xc & 0xffff);
    puVar10 = *(uint **)(_g_osi_funcs_p + 0x94);
    __dest_00 = pcVar9;
    (*(code *)puVar10)(pcVar9,4,pcVar9,puVar10,unaff_a6);
    if (__dest_00 == (code *)0x0) {
      (**(code **)(_g_osi_funcs_p + 0xa4))
                (puVar6,*(code **)(_g_osi_funcs_p + 0xa4),pcVar9,puVar10,unaff_a6);
      goto LAB_ram_0040420d;
    }
    memcpy(__dest_00,__src,(size_t)pcVar9);
    FUN_ram_004032c4(puVar11,puVar12,pcVar9,__dest_00,unaff_a6);
    chm_get_current_channel(puVar11,puVar12,pcVar9,__dest_00,unaff_a6);
    if (puVar11 == (uint *)0x0) {
      ets_printf("%s %u\n",&DAT_ram_0040b9a4,0x9c4,__dest_00,unaff_a6);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    uVar13 = *(uint *)(__dest_00 + 8);
    *(uint *)(__dest_00 + 8) = uVar13 & 0xfff0ffff | *(byte *)((int)puVar11 + 6) & 0xf;
    puVar6[1] = (uint)__dest_00;
    *puVar6 = uStack68;
    iVar5 = 9;
    pp_post(9,puVar6,uVar13,__dest_00,unaff_a6);
    if (iVar5 == 1) {
      (**(code **)(_g_osi_funcs_p + 0xa4))
                (__dest_00,*(code **)(_g_osi_funcs_p + 0xa4),uVar13,__dest_00,unaff_a6);
      (**(code **)(_g_osi_funcs_p + 0xa4))
                (puVar6,*(code **)(_g_osi_funcs_p + 0xa4),uVar13,__dest_00,unaff_a6);
    }
  }
  goto LAB_ram_00404285;
LAB_ram_0040419d:
  FUN_ram_004032c4(puVar11,puVar12,puVar7,puVar10,unaff_a6);
LAB_ram_004041a9:
  FUN_ram_004033f4(wDevCtrl._48_4_,puVar12,puVar7,puVar10,unaff_a6);
LAB_ram_00404285:
  DAT_ram_0041188c = DAT_ram_0041188c + 1;
  if (puStack76 == puVar2) {
    return;
  }
  puStack76 = (uint *)puStack76[2];
  goto LAB_ram_00404299;
}



void Cache_Read_Enable_New(void)

{
  return;
}



void HDL_MAC_SIG_IN_LV1_ISR(void)

{
  return;
}



void LwipTimOutLim(void)

{
  return;
}



void PendFreeBcnEb(void)

{
  return;
}



void ResetCcountVal(void)

{
  return;
}



void ShowCritical(void)

{
  return;
}



void TestStaFreqCalValDev(void)

{
  return;
}



void TestStaFreqCalValInput(void)

{
  return;
}



void TestStaFreqCalValOK(void)

{
  return;
}



void TmpSTAAPCloseAP(void)

{
  return;
}



void Wait_SPI_Idle(void)

{
  return;
}



void __divsi3(void)

{
  return;
}



void __udivsi3(void)

{
  return;
}



void __umoddi3(void)

{
  return;
}



void __umodsi3(void)

{
  return;
}



void _xt_set_xt_ccompare_val(void)

{
  return;
}



void ap_freq_force_to_scan(void)

{
  return;
}



void bit_popcount(void)

{
  return;
}



void chip6_phy_init_ctrl(void)

{
  return;
}



void chip_v6_set_chan_offset(void)

{
  return;
}



void chm_get_current_channel(void)

{
  return;
}



void clockgate_watchdog(void)

{
  return;
}



void esp_get_free_heap_size(void)

{
  return;
}



void esp_upload_event(void)

{
  return;
}



void esp_wifi_try_rate_from_high(void)

{
  return;
}



void ethbroadcast(void)

{
  return;
}



void ets_delay_us(void)

{
  return;
}



void ets_printf(void)

{
  return;
}



void ets_timer_arm(void)

{
  return;
}



void ets_timer_arm_us(void)

{
  return;
}



void ets_timer_disarm(void)

{
  return;
}



void ets_timer_setfn(void)

{
  return;
}



void ets_update_cpu_frequency(void)

{
  return;
}



void flashchip(void)

{
  return;
}



void gScanStruct(void)

{
  return;
}



void g_ic(void)

{
  return;
}



void g_osi_funcs_p(void)

{
  return;
}



void g_phyFuns(void)

{
  return;
}



void g_wifi_nvs(void)

{
  return;
}



void gpio_input_get(void)

{
  return;
}



void hostap_input(void)

{
  return;
}



void ieee80211_free_pbuf(void)

{
  return;
}



void ieee80211_getmgtframe(void)

{
  return;
}



void ieee80211_output_pbuf(void)

{
  return;
}



void ieee80211_send_setup(void)

{
  return;
}



void lldesc_build_chain(void)

{
  return;
}



void lldesc_num2link(void)

{
  return;
}



int memcmp(void *__s1,void *__s2,size_t __n)

{
  int in_o2;
  
  return in_o2;
}



void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *in_o2;
  
  return in_o2;
}



void * memset(void *__s,int __c,size_t __n)

{
  void *in_o2;
  
  return in_o2;
}



void noise_check_loop(void)

{
  return;
}



void os_timer_arm(void)

{
  return;
}



void os_timer_disarm(void)

{
  return;
}



void os_timer_setfn(void)

{
  return;
}



void periodic_cal_top(void)

{
  return;
}



void phy_get_bb_freqoffset(void)

{
  return;
}



void phy_rx_gain_dc_table(void)

{
  return;
}



void pm_goto_sleep(void)

{
  return;
}



void pm_rtc2usec(void)

{
  return;
}



void pm_rtc_clock_cali(void)

{
  return;
}



void pm_set_sleep_cycles(void)

{
  return;
}



void pm_set_sleep_mode(void)

{
  return;
}



void pm_usec2rtc(void)

{
  return;
}



void pm_wait4wakeup(void)

{
  return;
}



void pm_wakeup_init(void)

{
  return;
}



void pm_wakeup_opt(void)

{
  return;
}



void pp_michael_mic_failure(void)

{
  return;
}



int printf(char *__format,...)

{
  int in_o2;
  
  return in_o2;
}



void promiscuous_cb(void)

{
  return;
}



void prvGetExpectedIdleTime(void)

{
  return;
}



void read_hw_noisefloor(void)

{
  return;
}



void scan_connect_state(void)

{
  return;
}



void scan_hidden_ssid(void)

{
  return;
}



void scan_start(void)

{
  return;
}



void sta_input(void)

{
  return;
}



void system_restart_in_nmi(void)

{
  return;
}



void system_rtc_mem_write(void)

{
  return;
}



void timer_list(void)

{
  return;
}



void tx_pwctrl_background(void)

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



void vTaskStepTick(void)

{
  return;
}



void _start(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void esf_buf_alloc(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_a2;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  undefined *__s;
  int unaff_a3;
  code *pcVar7;
  uint unaff_a4;
  undefined4 uVar8;
  code *pcVar9;
  code *unaff_a5;
  uint uVar10;
  
  uVar10 = unaff_a4 & 0xffff;
  if ((unaff_a3 == 1) && (in_a2 != 0)) {
    if (DAT_ram_0040d394 == (int *)0x0) {
      return;
    }
    if (NMIIrqIsOn == '\0') {
      vPortEnterCritical(&NMIIrqIsOn,&NMIIrqIsOn);
      unaff_a4 = 0x8000000;
      memw();
      memw();
      _DAT_ram_3ff20c18 = 0x8000000;
    }
    piVar3 = DAT_ram_0040d394;
    piVar1 = DAT_ram_0040d394 + 7;
    DAT_ram_0040d394 = (int *)DAT_ram_0040d394[7];
    *piVar1 = 0;
    if (NMIIrqIsOn == '\0') {
      memw();
      _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
      vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,unaff_a4);
    }
    *(int *)(*piVar3 + 4) = in_a2;
    puVar4 = (undefined4 *)piVar3[8];
    piVar3[3] = in_a2 + -0x24;
    *(short *)((int)piVar3 + 0x12) = (short)uVar10;
    uVar8 = *puVar4;
  }
  else {
    if (unaff_a3 == 4) {
      puVar5 = (uint *)&DAT_ram_0000003c;
      (**(code **)(_g_osi_funcs_p + 0x94))(0x3c);
      if (puVar5 == (uint *)0x0) {
        return;
      }
      uVar6 = 0xc;
      (**(code **)(_g_osi_funcs_p + 0x94))(0xc);
      pcVar9 = (code *)0x3fffffff;
      *puVar5 = uVar6;
      if (uVar6 - 1 < 0x40000000) {
        puVar5[1] = uVar6;
        *(undefined2 *)(puVar5 + 2) = 1;
        puVar4 = (undefined4 *)&DAT_ram_0000001c;
        (**(code **)(_g_osi_funcs_p + 0x98))(0x1c);
        puVar5[8] = (uint)puVar4;
        if ((undefined *)((int)puVar4 + -1) < (undefined *)0x40000000) {
          *puVar4 = *puVar4;
          (**(code **)(_g_osi_funcs_p + 0x94))(uVar10);
          puVar5[3] = uVar10;
          if (uVar10 - 1 < 0x40000000) {
            *(uint *)(*puVar5 + 4) = uVar10;
            return;
          }
          if (0x40000000 < uVar10) {
            (**(code **)(_g_osi_funcs_p + 0xa4))
                      (uVar10,*(code **)(_g_osi_funcs_p + 0xa4),0x3fffffff);
          }
          (**(code **)(_g_osi_funcs_p + 0xa4))
                    (puVar5[8],*(code **)(_g_osi_funcs_p + 0xa4),0x3fffffff);
          iVar2 = _g_osi_funcs_p;
          puVar5[8] = 0;
          (**(code **)(iVar2 + 0xa4))(*puVar5,*(code **)(iVar2 + 0xa4),0x3fffffff);
        }
        else {
          if ((undefined4 *)0x40000000 < puVar4) {
            (**(code **)(_g_osi_funcs_p + 0xa4))
                      (puVar4,*(code **)(_g_osi_funcs_p + 0xa4),0x3fffffff);
          }
          (**(code **)(_g_osi_funcs_p + 0xa4))(*puVar5,*(code **)(_g_osi_funcs_p + 0xa4),0x3fffffff)
          ;
        }
        iVar2 = _g_osi_funcs_p;
        *puVar5 = 0;
        (**(code **)(iVar2 + 0xa4))(puVar5,*(code **)(iVar2 + 0xa4),0x3fffffff);
        return;
      }
      if (0x40000000 < uVar6) {
        (**(code **)(_g_osi_funcs_p + 0xa4))(uVar6,*(code **)(_g_osi_funcs_p + 0xa4),0x3fffffff);
      }
      pcVar7 = *(code **)(_g_osi_funcs_p + 0xa4);
LAB_ram_00404a29:
      (*pcVar7)(puVar5,pcVar7,pcVar9);
      return;
    }
    if (unaff_a3 == 5) {
      if (DAT_ram_0040d39c == (int *)0x0) {
        return;
      }
      if (NMIIrqIsOn == '\0') {
        vPortEnterCritical(&NMIIrqIsOn);
        memw();
        memw();
        _DAT_ram_3ff20c18 = 0x8000000;
      }
      piVar3 = DAT_ram_0040d39c;
      piVar1 = DAT_ram_0040d39c + 7;
      DAT_ram_0040d39c = (int *)DAT_ram_0040d39c[7];
      *piVar1 = 0;
      if (NMIIrqIsOn == '\0') {
        memw();
        _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
        vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT);
      }
      memset((void *)piVar3[8],0,0x1c);
      *(int *)(*piVar3 + 4) = piVar3[3];
      puVar4 = (undefined4 *)piVar3[8];
      uVar8 = *puVar4;
    }
    else {
      if (unaff_a3 == 6) {
        puVar5 = (uint *)&DAT_ram_0000003c;
        (**(code **)(_g_osi_funcs_p + 0x94))(0x3c,4,*(code **)(_g_osi_funcs_p + 0x94));
        if (puVar5 == (uint *)0x0) {
          return;
        }
        pcVar9 = *(code **)(_g_osi_funcs_p + 0x94);
        uVar6 = 0xc;
        (*pcVar9)(0xc,4,pcVar9);
        *puVar5 = uVar6;
        if (uVar6 - 1 < 0x40000000) {
          puVar5[1] = uVar6;
          *(undefined2 *)(puVar5 + 2) = 1;
          pcVar9 = *(code **)(_g_osi_funcs_p + 0x94);
          __s = &DAT_ram_0000001c;
          (*pcVar9)(0x1c,4,pcVar9);
          puVar5[8] = (uint)__s;
          if (__s + -1 < (undefined *)0x40000000) {
            memset(__s,0,0x1c);
            *(undefined4 *)puVar5[8] = *(undefined4 *)puVar5[8];
            unaff_a5 = *(code **)(_g_osi_funcs_p + 0x94);
            (*unaff_a5)(uVar10,4,0,unaff_a5);
            puVar5[3] = uVar10;
            pcVar9 = (code *)0x0;
            if (uVar10 - 1 < 0x40000000) {
              *(uint *)(*puVar5 + 4) = uVar10;
              return;
            }
            if (uVar10 != 0) {
              (**(code **)(_g_osi_funcs_p + 0xa4))
                        (uVar10,*(code **)(_g_osi_funcs_p + 0xa4),0,unaff_a5);
            }
            (**(code **)(_g_osi_funcs_p + 0xa4))
                      (puVar5[8],*(code **)(_g_osi_funcs_p + 0xa4),0,unaff_a5);
            iVar2 = _g_osi_funcs_p;
            puVar5[8] = 0;
            (**(code **)(iVar2 + 0xa4))(*puVar5,*(code **)(iVar2 + 0xa4),0,unaff_a5);
          }
          else {
            if ((undefined *)0x40000000 < __s) {
              (**(code **)(_g_osi_funcs_p + 0xa4))(__s,*(code **)(_g_osi_funcs_p + 0xa4),pcVar9);
            }
            (**(code **)(_g_osi_funcs_p + 0xa4))(*puVar5,*(code **)(_g_osi_funcs_p + 0xa4),pcVar9);
          }
          iVar2 = _g_osi_funcs_p;
          *puVar5 = 0;
          (**(code **)(iVar2 + 0xa4))(puVar5,*(code **)(iVar2 + 0xa4),pcVar9,unaff_a5);
          return;
        }
        if (0x40000000 < uVar6) {
          (**(code **)(_g_osi_funcs_p + 0xa4))(uVar6,*(code **)(_g_osi_funcs_p + 0xa4),pcVar9);
        }
        pcVar7 = *(code **)(_g_osi_funcs_p + 0xa4);
        goto LAB_ram_00404a29;
      }
      if (unaff_a3 != 7) {
        return;
      }
      if (DAT_ram_0040d3a0 == 0) {
        return;
      }
      if (NMIIrqIsOn == '\0') {
        vPortEnterCritical(&NMIIrqIsOn);
        memw();
        memw();
        _DAT_ram_3ff20c18 = 0x8000000;
      }
      iVar2 = DAT_ram_0040d3a0;
      puVar4 = (undefined4 *)(DAT_ram_0040d3a0 + 0x1c);
      DAT_ram_0040d3a0 = *(int *)(DAT_ram_0040d3a0 + 0x1c);
      *puVar4 = 0;
      if (NMIIrqIsOn == '\0') {
        memw();
        _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
        vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT);
      }
      puVar4 = *(undefined4 **)(iVar2 + 0x20);
      uVar8 = *puVar4;
    }
  }
  *puVar4 = uVar8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void esf_buf_recycle(void)

{
  undefined4 *puVar1;
  undefined4 *in_a2;
  int unaff_a3;
  code *pcVar2;
  undefined4 uVar3;
  
  if (unaff_a3 - 1U < 2) {
    if ((unaff_a3 == 1) && (pcVar2 = (code *)in_a2[0xc], pcVar2 != (code *)0x0)) {
      (*pcVar2)(in_a2 + 9,pcVar2);
    }
    uVar3 = 0x1c;
    memset((void *)in_a2[8],0,0x1c);
    if (NMIIrqIsOn == '\0') {
      vPortEnterCritical(&NMIIrqIsOn,0,0x1c);
      memw();
      memw();
      _DAT_ram_3ff20c18 = 0x8000000;
    }
    puVar1 = in_a2;
    in_a2[7] = DAT_ram_0040d394;
    DAT_ram_0040d394 = puVar1;
  }
  else {
    if (unaff_a3 == 4) {
LAB_ram_00404d27:
      (**(code **)(_g_osi_funcs_p + 0xa4))(*in_a2,*(code **)(_g_osi_funcs_p + 0xa4));
      (**(code **)(_g_osi_funcs_p + 0xa4))(in_a2[8],*(code **)(_g_osi_funcs_p + 0xa4));
      (**(code **)(_g_osi_funcs_p + 0xa4))(in_a2[3],*(code **)(_g_osi_funcs_p + 0xa4));
      (**(code **)(_g_osi_funcs_p + 0xa4))();
      return;
    }
    if (unaff_a3 == 5) {
      uVar3 = 0x1c;
      memset((void *)in_a2[8],0,0x1c);
      if (NMIIrqIsOn == '\0') {
        vPortEnterCritical(&NMIIrqIsOn,0,0x1c);
        memw();
        memw();
        _DAT_ram_3ff20c18 = 0x8000000;
      }
      puVar1 = in_a2;
      in_a2[7] = DAT_ram_0040d39c;
      DAT_ram_0040d39c = puVar1;
    }
    else {
      if (unaff_a3 == 6) goto LAB_ram_00404d27;
      if (unaff_a3 == 7) {
        uVar3 = 0x1c;
        memset((void *)in_a2[8],0,0x1c);
        if (NMIIrqIsOn == '\0') {
          vPortEnterCritical(&NMIIrqIsOn,0,0x1c);
          memw();
          memw();
          _DAT_ram_3ff20c18 = 0x8000000;
        }
        puVar1 = in_a2;
        in_a2[7] = DAT_ram_0040d3a0;
        DAT_ram_0040d3a0 = puVar1;
      }
      else {
        if (unaff_a3 != 8) {
          return;
        }
        uVar3 = 0xc;
        memset((void *)in_a2[8],0,0xc);
        if (NMIIrqIsOn == '\0') {
          vPortEnterCritical(&NMIIrqIsOn,0,0xc);
          memw();
          memw();
          _DAT_ram_3ff20c18 = 0x8000000;
        }
        puVar1 = in_a2;
        in_a2[7] = DAT_ram_0040d3a4;
        DAT_ram_0040d3a4 = puVar1;
      }
    }
  }
  if (NMIIrqIsOn == '\0') {
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar3);
  }
  return;
}



void esf_buf_setup(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint **ppuVar4;
  uint **ppuVar5;
  int iVar6;
  uint *puVar7;
  undefined *puVar8;
  uint *puVar9;
  
  piVar3 = &DAT_ram_0040d3a8;
  puVar8 = &DAT_ram_0040d99c;
  iVar6 = 0x30;
  do {
    *(undefined2 *)(piVar3 + 2) = 1;
    iVar2 = wDevCtrl._40_4_ + iVar6;
    iVar1 = *(int *)(wDevCtrl._40_4_ + 4);
    *piVar3 = iVar2;
    piVar3[1] = iVar2;
    piVar3[3] = iVar1;
    piVar3[8] = (int)puVar8;
    esf_buf_recycle(piVar3,1);
    iVar6 = iVar6 + -0xc;
    piVar3 = piVar3 + 0xf;
    puVar8 = puVar8 + 0x1c;
  } while (iVar6 != -0xc);
  puVar9 = (uint *)&DAT_ram_0040da28;
  puVar7 = &DAT_ram_0040db78;
  ppuVar4 = (uint **)&DAT_ram_0040d4d4;
  do {
    memw();
    memw();
    *puVar7 = *puVar7 & 0xfffff000 | 0x40;
    *(undefined2 *)(ppuVar4 + 2) = 1;
    *ppuVar4 = puVar7;
    ppuVar4[1] = puVar7;
    ppuVar4[3] = puVar7 + 3;
    ppuVar4[8] = puVar9;
    esf_buf_recycle(ppuVar4,5);
    ppuVar4 = ppuVar4 + 0xf;
    puVar7 = puVar7 + 0x13;
    puVar9 = puVar9 + 7;
  } while (ppuVar4 != (uint **)&DAT_ram_0040d6b4);
  puVar7 = (uint *)&DAT_ram_0040db08;
  do {
    ppuVar4[8] = puVar7;
    ppuVar5 = ppuVar4 + 0xf;
    esf_buf_recycle(ppuVar4,7);
    puVar7 = puVar7 + 7;
    ppuVar4 = ppuVar5;
  } while (ppuVar5 != (uint **)&DAT_ram_0040d7a4);
  puVar7 = (uint *)&DAT_ram_0040d948;
  do {
    ppuVar5[8] = puVar7;
    ppuVar4 = ppuVar5 + 0xf;
    esf_buf_recycle(ppuVar5,8);
    puVar7 = puVar7 + 3;
    ppuVar5 = ppuVar4;
  } while (ppuVar4 != (uint **)&DAT_ram_0040d948);
  return;
}



// WARNING: Removing unreachable block (ram,0x00404efb)

void FUN_ram_00404ee4(void)

{
  wDev_SetRxPolicy(1);
  return;
}



void ic_get_addr(void)

{
  return;
}



void ic_set_opmode(void)

{
  undefined4 unaff_a3;
  undefined unaff_a4;
  
  if_ctrl._8_4_ = unaff_a3;
  if_ctrl[12] = unaff_a4;
  return;
}



void ic_enable_interface(void)

{
  byte in_a2;
  uint uVar1;
  void *unaff_a3;
  undefined4 unaff_a4;
  uint uVar2;
  undefined unaff_a5;
  undefined1 *puVar3;
  
  puVar3 = if_ctrl;
  memcpy(if_ctrl,unaff_a3,6);
  *(undefined4 *)(puVar3 + 8) = unaff_a4;
  puVar3[0xc] = unaff_a5;
  uVar2 = (uint)interface_mask;
  uVar1 = 1 << 0x20 - (' ' - (in_a2 & 0x1f)) & 0xffU | uVar2;
  interface_mask = (byte)uVar1;
  bit_popcount(uVar1,&interface_mask,uVar2);
  return;
}



void ic_interface_enabled(void)

{
  return;
}



void ic_disable_interface(void)

{
  byte in_a2;
  uint uVar1;
  uint unaff_a4;
  
  uVar1 = (uint)interface_mask;
  if ((interface_mask >> (in_a2 & 0x1f) & 1) != 0) {
    unaff_a4 = (uint)(0xfffffffefffffffe >> 0x20 - (in_a2 & 0x1f));
    uVar1 = uVar1 & unaff_a4;
    interface_mask = (byte)uVar1;
    rc_disable_trc_by_interface(in_a2,uVar1,unaff_a4);
  }
  bit_popcount(interface_mask,uVar1,unaff_a4);
  return;
}



void ic_is_pure_sta(void)

{
  return;
}



void ic_get_ptk_alg(void)

{
  return;
}



void ic_get_gtk_alg(void)

{
  return;
}



void ic_set_ptk_alg(void)

{
  undefined unaff_a3;
  
  if_ctrl[13] = unaff_a3;
  return;
}



void ic_set_gtk_alg(void)

{
  undefined unaff_a3;
  
  if_ctrl[14] = unaff_a3;
  return;
}



void ic_interface_is_p2p(void)

{
  return;
}



// WARNING: Removing unreachable block (ram,0x00405100)
// WARNING: Removing unreachable block (ram,0x00405109)
// WARNING: Removing unreachable block (ram,0x00405112)
// WARNING: Removing unreachable block (ram,0x00405121)
// WARNING: Removing unreachable block (ram,0x0040511b)

void ic_set_vif(void)

{
  uint in_a2;
  uint uVar1;
  char unaff_a3;
  undefined4 unaff_a5;
  undefined unaff_a6;
  uint uVar2;
  
  uVar2 = in_a2 & 0xff;
  if (unaff_a3 == '\x02') {
    printf("chg if%d\n",uVar2);
    if_ctrl._8_4_ = unaff_a5;
    if_ctrl[12] = unaff_a6;
  }
  else {
    if (unaff_a3 == '\x01') {
      printf("add if%d\n",uVar2);
      wDev_SetMacAddress(uVar2);
      uVar1 = uVar2;
      ic_enable_interface(uVar2);
      if (uVar1 == 1) {
        wDevEnableRx(1);
      }
      FUN_ram_00404ee4(uVar2);
    }
    else {
      printf("del if%d\n",uVar2);
      wDev_SetRxPolicy(0,uVar2,0);
      uVar1 = uVar2;
      ic_disable_interface(uVar2,uVar2,0);
      if (uVar1 == 0) {
        wDevDisableRx(0,uVar2,0);
        pm_force_scan_unlock(uVar1,uVar2,0);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ic_set_sta(void)

{
  char cVar1;
  undefined *puVar2;
  uint in_a2;
  char *pcVar3;
  char *pcVar4;
  char unaff_a3;
  uint uVar5;
  undefined1 *unaff_a4;
  uint uVar6;
  undefined *unaff_a5;
  uint unaff_a6;
  undefined4 unaff_a7;
  char *pcVar7;
  undefined *puVar8;
  
  pcVar7 = (char *)(in_a2 & 0xff);
  uVar6 = (uint)unaff_a5 & 0xff;
  puVar8 = (undefined *)(unaff_a6 & 0xffff);
  if (unaff_a3 == '\0') {
    pcVar3 = pcVar7;
    rc_disable_trc(pcVar7);
  }
  else {
    pcVar4 = pcVar7;
    rc_enable_trc(pcVar7);
    pcVar3 = "aid %d\n";
    printf("aid %d\n",puVar8,uVar6,puVar8);
    unaff_a4 = puVar8;
    unaff_a5 = puVar8;
    if (pcVar4 != (char *)0x0) {
      unaff_a4 = if_ctrl;
      uVar5 = (uint)NMIIrqIsOn;
      *(undefined4 *)(pcVar4 + 0x5c) = unaff_a7;
      uVar6 = (uint)if_ctrl[12];
      if (uVar5 == 0) {
        vPortEnterCritical(if_ctrl,0,uVar6,puVar8);
        unaff_a4 = &DAT_ram_3ff20c18;
        memw();
        uVar5 = 0x8000000;
        memw();
        _DAT_ram_3ff20c18 = (undefined *)0x8000000;
      }
      esp_wifi_try_rate_from_high(unaff_a4,uVar5,uVar6,puVar8);
      if (unaff_a4 != (undefined *)0x0) {
        unaff_a4 = (undefined *)0x21;
      }
      rcUpdatePhyMode(pcVar4,unaff_a4,uVar6,puVar8);
      puVar2 = WDEV_INTEREST_EVENT;
      pcVar3 = (char *)(uint)NMIIrqIsOn;
      if (pcVar3 == (char *)0x0) {
        pcVar3 = &DAT_ram_3ff20c18;
        memw();
        _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
        vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar6,puVar8);
        unaff_a4 = puVar2;
      }
    }
  }
  rc_only_sta_trc(pcVar3,unaff_a4,uVar6,unaff_a5);
  pcVar4 = pcVar3;
  if ((int)pcVar3 < 0) {
LAB_ram_004051f3:
    pm_shutdown(pcVar4,unaff_a4,uVar6,unaff_a5);
  }
  else {
    pcVar4 = (char *)((uint)pcVar3 & 0xff);
    ic_is_pure_sta(pcVar4,unaff_a4,uVar6,unaff_a5);
    if ((pcVar4 == (char *)0x0) ||
       (pcVar4 = (char *)(uint)interface_mask, (interface_mask >> 1 & 1) != 0))
    goto LAB_ram_004051f3;
    pm_open(pcVar3,unaff_a4,uVar6,unaff_a5);
  }
  if (pcVar7 != (char *)0x1) {
    return;
  }
  if (NMIIrqIsOn == 0) {
    vPortEnterCritical(&NMIIrqIsOn,unaff_a4,uVar6,unaff_a5);
    memw();
    memw();
    _DAT_ram_3ff20c18 = (undefined *)0x8000000;
  }
  if (unaff_a3 == '\0') {
    if (pm_wait4wakeup == (code)0x0) goto LAB_ram_00405234;
    cVar1 = -1;
  }
  else {
    cVar1 = '\x01';
  }
  pm_wait4wakeup = (code)((char)pm_wait4wakeup + cVar1);
LAB_ram_00405234:
  if (NMIIrqIsOn == 0) {
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar6,unaff_a5);
  }
  return;
}



void ic_bss_info_update(void)

{
  uint in_a2;
  char *__format;
  uint unaff_a3;
  uint uVar1;
  uint unaff_a4;
  int unaff_a5;
  
  uVar1 = in_a2 & 0xff;
  if ((unaff_a4 & 0xffff) == 2) {
    if (unaff_a5 == 0) {
      FUN_ram_00404ee4(uVar1,uVar1);
    }
    else {
      wDev_SetRxPolicy(2,uVar1);
    }
    printf("bcn %d\n");
  }
  else {
    if ((unaff_a4 & 0xffff) == 1) {
      wDev_SetRxPolicy(2,uVar1);
      __format = "cnt \n";
      unaff_a4 = unaff_a3;
    }
    else {
      FUN_ram_00404ee4(uVar1,uVar1);
      __format = "uncnt \n";
    }
    printf(__format,uVar1,unaff_a4);
  }
  return;
}



void ic_set_key(void)

{
  char cVar1;
  undefined in_a2;
  char unaff_a3;
  undefined unaff_a4;
  byte unaff_a6;
  
  cVar1 = unaff_a3;
  if ((unaff_a6 < 6) && (cVar1 = if_ctrl[13], if_ctrl[14] = unaff_a3, unaff_a3 == '\0')) {
    cVar1 = unaff_a3;
  }
  if_ctrl[13] = cVar1;
  wDev_Insert_KeyEntry(unaff_a3,in_a2,unaff_a4);
  wDev_Crypto_Conf(in_a2,unaff_a3,unaff_a4);
  return;
}



void ic_get_key(void)

{
  wDev_Get_KeyEntry();
  return;
}



void ic_remove_key(void)

{
  undefined in_a2;
  
  wDev_remove_KeyEntry(in_a2);
  return;
}



void ic_get_rssi(void)

{
  undefined in_a2;
  
  rc_get_trc(in_a2);
  return;
}



void lmacInitAc(void)

{
  int iVar1;
  uint in_a2;
  undefined unaff_a3;
  undefined unaff_a4;
  undefined unaff_a5;
  undefined2 unaff_a6;
  
  iVar1 = (in_a2 & 0xff) * 0x24;
  (&DAT_ram_0040ddec)[iVar1] = (char)(in_a2 & 0xff);
  (&DAT_ram_0040ddf1)[iVar1] = 0;
  (&DAT_ram_0040ddf2)[iVar1] = 0;
  (&DAT_ram_0040ddf9)[iVar1] = 0;
  (&DAT_ram_0040dded)[iVar1] = unaff_a3;
  (&DAT_ram_0040ddef)[iVar1] = unaff_a4;
  (&DAT_ram_0040ddf0)[iVar1] = unaff_a5;
  (&DAT_ram_0040ddee)[iVar1] = unaff_a4;
  *(undefined2 *)(&DAT_ram_0040de00 + iVar1) = unaff_a6;
  *(undefined4 *)(&DAT_ram_0040de04 + iVar1) = 0;
  *(undefined4 *)(&DAT_ram_0040de08 + iVar1) = 0;
  return;
}



void lmacInit(void)

{
  uint uVar1;
  
  lmacConfMib._0_4_ = 0x100;
  lmacConfMib._4_4_ = 0x200;
  lmacConfMib[9] = 0xb;
  lmacConfMib[8] = 0xb;
  lmacConfMib._16_2_ = 9;
  lmacConfMib._12_2_ = 0x92a;
  lmacConfMib._10_2_ = 0x92a;
  lmacConfMib._24_2_ = 0x15f;
  lmacConfMib._26_2_ = 0xfff;
  lmacInitAc(2,3,4,10,0);
  lmacInitAc(3,7,4,10,0);
  lmacInitAc(1,2,3,4,0xbc0);
  lmacInitAc(0,2,2,3,0x5e0);
  lmacInitAc(4,2,4,10,0);
  lmacInitAc(7,2,5,10,0);
  DAT_ram_0040dde4 = 8;
  uVar1 = (uint)lmacConfMib._24_2_;
  RC_SetBasicRate(uVar1,1,5,10,0);
  rcAttach(uVar1,1,5,10,0);
  return;
}



void lmacSetRetryLimit(void)

{
  byte in_a2;
  
  if (in_a2 < 0x15) {
    if (in_a2 < 5) {
      in_a2 = 5;
    }
  }
  else {
    in_a2 = 0x14;
  }
  lmacConfMib[8] = in_a2;
  lmacConfMib[9] = in_a2;
  return;
}



void FUN_ram_0040549c(void)

{
  DAT_ram_0040df14 = &DAT_ram_0040df44;
  DAT_ram_0040df18 = &LAB_ram_00405a88;
  DAT_ram_0040df74._0_2_ = (ushort)DAT_ram_0040df74 & 0xf1ff | 0x400;
  return;
}



void pm_idle_sleep(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_00405510(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *unaff_a4;
  undefined4 *unaff_a5;
  undefined4 *puVar5;
  undefined4 unaff_a6;
  uint unaff_a7;
  undefined4 *unaff_a13;
  undefined4 *puVar6;
  undefined4 *unaff_a15;
  undefined4 *puVar7;
  byte in_CCOUNT;
  byte in_CCOMPARE0;
  
  if (_phy_rx_gain_dc_table == 0) {
    ets_printf("%s %u\n",&DAT_ram_0040b90c,0x176);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if (DAT_ram_0040d13c == '\x01') {
    puVar6 = (undefined4 *)(uint)DAT_ram_0040e04a;
    if (puVar6 < (undefined4 *)0x2) {
      if (puVar6 == (undefined4 *)0x1) {
        rsr(in_CCOUNT);
        unaff_a13 = *(undefined4 **)(uint)in_CCOUNT;
        rsr(in_CCOMPARE0);
        unaff_a15 = *(undefined4 **)(uint)in_CCOMPARE0;
        if (unaff_a15 <= unaff_a13) {
          printf("err6:%u,%u\n",unaff_a13,unaff_a15);
          unaff_a4 = unaff_a15;
        }
        CCOMPARE_AddVal = unaff_a13 + 1000000;
        _xt_set_xt_ccompare_val(&CCOMPARE_AddVal,CCOMPARE_AddVal,unaff_a4);
      }
      pm_wakeup_init(2,0,unaff_a4);
      if (DAT_ram_0040e04a == 1) {
        rsr(in_CCOUNT);
        puVar5 = *(undefined4 **)(uint)in_CCOUNT;
        puVar7 = &DAT_ram_0040e044;
        if (puVar5 <= unaff_a13) {
          printf("err4:%u,%u\n",unaff_a13,puVar5,puVar5);
          puVar7 = unaff_a13;
          unaff_a4 = puVar5;
        }
        unaff_a5 = (undefined4 *)((int)puVar5 + ((int)unaff_a15 - (int)unaff_a13));
        CCOMPARE_AddVal = unaff_a5;
        _xt_set_xt_ccompare_val(&CCOMPARE_AddVal,puVar7,unaff_a4,unaff_a5);
      }
      DAT_ram_0040e04a = 2;
    }
    else {
      pm_wakeup_init(2,1);
    }
    DAT_ram_0040e048 = 0;
    rsr(in_CCOUNT);
    puVar7 = *(undefined4 **)(uint)in_CCOUNT;
    rsr(in_CCOMPARE0);
    puVar5 = *(undefined4 **)(uint)in_CCOMPARE0;
    if (puVar5 <= puVar7) {
      printf("err5:%u,%u,%d\n",puVar7,puVar5,puVar6);
      unaff_a4 = puVar5;
      unaff_a5 = puVar6;
    }
    memw();
    __umodsi3((_DAT_ram_3ff20c00 + WdevTimOffSet) - DAT_ram_0040e040,10000,unaff_a4,unaff_a5);
    puVar7 = (undefined4 *)((int)puVar7 + DAT_ram_0040e044);
    if (puVar5 <= puVar7) {
      uVar2 = (uint)DAT_ram_0040e048;
      while( true ) {
        unaff_a7 = uVar2 + 1 & 0xffff;
        unaff_a5 = (undefined4 *)0xc3500;
        if ((uint)((int)puVar7 - (int)puVar5) < 0xc3501) break;
        puVar7 = puVar7 + -200000;
        uVar2 = unaff_a7;
      }
      DAT_ram_0040e048 = (ushort)uVar2;
      rsr(in_CCOUNT);
      unaff_a6 = 400000;
      CCOMPARE_AddVal =
           (undefined4 *)((int)puVar5 + ((*(int *)(uint)in_CCOUNT + 800000) - (int)puVar7));
      puVar6 = (undefined4 *)(*(int *)(uint)in_CCOUNT + 400000);
      if (CCOMPARE_AddVal < puVar6) {
        CCOMPARE_AddVal = CCOMPARE_AddVal + 200000;
        puVar6 = (undefined4 *)(uVar2 + 1);
        DAT_ram_0040e048 = (ushort)puVar6;
      }
      _xt_set_xt_ccompare_val(&CCOMPARE_AddVal,CCOMPARE_AddVal,puVar6,800000,400000,unaff_a7);
      DAT_ram_0040e048 = DAT_ram_0040e048 + 1;
    }
    rsr(in_CCOUNT);
    rsr(in_CCOMPARE0);
    unaff_a4 = *(undefined4 **)(uint)in_CCOMPARE0;
    if (unaff_a4 < (undefined4 *)(*(int *)(uint)in_CCOUNT + 400000)) {
      DAT_ram_0040e048 = DAT_ram_0040e048 + 1;
      CCOMPARE_AddVal = (undefined4 *)(*(int *)(uint)in_CCOUNT + 800000);
      _xt_set_xt_ccompare_val(CCOMPARE_AddVal,&CCOMPARE_AddVal,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
    }
    memw();
    iVar1 = (_DAT_ram_3ff20c00 + WdevTimOffSet) - DAT_ram_0040e040;
    __udivsi3(iVar1,10000,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
    uVar4 = (uint)DAT_ram_0040e048;
    uVar2 = iVar1 + uVar4 & 0xffff;
    DAT_ram_0040e048 = (ushort)uVar2;
    vTaskStepTick(uVar2,uVar4,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
    uVar2 = WDEV_INTEREST_EVENT;
    if (NMIIrqIsOn == '\0') {
      memw();
      _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
      vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
      uVar4 = uVar2;
    }
    uVar3 = 0;
    clockgate_watchdog(0,uVar4,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
    system_soft_wdt_restart(uVar3,uVar4,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
    puVar6 = _DAT_ram_3ff00014;
    if (DAT_ram_0040e04b == '\x01') {
      memw();
      _DAT_ram_3ff00014 = (undefined4 *)((uint)_DAT_ram_3ff00014 | 1);
      memw();
      ets_update_cpu_frequency(0xa0,_DAT_ram_3ff00014,puVar6,unaff_a5,unaff_a6,unaff_a7);
      unaff_a4 = puVar6;
    }
  }
  else {
    if (DAT_ram_0040d13c == '\x02') {
      clockgate_watchdog(1,2);
      pm_wakeup_init(8,0);
      clockgate_watchdog(0,0);
    }
  }
  if (pend_flag_periodic_cal == '\x01') {
    pend_flag_periodic_cal = '\0';
    periodic_cal_top(0,0,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
  }
  if (pend_flag_noise_check == '\x01') {
    pend_flag_noise_check = '\0';
    noise_check_loop(1,1,0,unaff_a5,unaff_a6,unaff_a7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_00405728(void)

{
  if (DAT_ram_0040df74._2_1_ != '\0') {
    memw();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_00405770(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_a4;
  uint unaff_a6;
  uint unaff_a7;
  int iVar4;
  
  uVar3 = _DAT_ram_3ff20c00;
  memw();
  DAT_ram_0040df74._0_2_ = (ushort)DAT_ram_0040df74 & 0xf1ff | 0x800;
  if (DAT_ram_0040df74._2_1_ == '\0') {
    ets_timer_disarm(&DAT_ram_0040dfd0,0x800);
    ets_timer_disarm(&DAT_ram_0040df98,0x800);
    ets_timer_arm(&DAT_ram_0040df98,0x69,0);
  }
  else {
    iVar4 = 0;
    while( true ) {
      uVar2 = DAT_ram_0040df70;
      iVar1 = DAT_ram_0040df54;
      if (DAT_ram_0040df54 - uVar3 <= DAT_ram_0040df70) break;
      unaff_a4 = (uint)DAT_ram_0040df84;
      DAT_ram_0040df5c = DAT_ram_0040df54;
      unaff_a6 = unaff_a4 * DAT_ram_0040df70;
      DAT_ram_0040df54 = DAT_ram_0040df70 + DAT_ram_0040df54;
      unaff_a7 = DAT_ram_0040df58 - DAT_ram_0040df54;
      if (unaff_a6 < unaff_a7) {
        DAT_ram_0040df58 = unaff_a6 + DAT_ram_0040df58;
      }
      iVar4 = iVar4 + 1;
      if (iVar4 == 100) {
        printf("why %u %u %u %u\n",DAT_ram_0040df70,unaff_a4,DAT_ram_0040df54,uVar3,unaff_a7);
        if (DAT_ram_0040df84 == 0) {
          DAT_ram_0040df84 = 1;
        }
        unaff_a6 = uVar3;
        if (DAT_ram_0040df70 == 0) {
          DAT_ram_0040df70 = 0x19000;
        }
      }
    }
    ets_timer_disarm(&DAT_ram_0040dfd0,DAT_ram_0040df70,unaff_a4,DAT_ram_0040df54,unaff_a6,unaff_a7)
    ;
    ets_timer_disarm(&DAT_ram_0040df98,uVar2,unaff_a4,iVar1,unaff_a6,unaff_a7);
    memw();
    ets_timer_arm_us(&DAT_ram_0040df98,
                     ((DAT_ram_0040df94 + DAT_ram_0040df54) - DAT_ram_0040df90) - uVar3,0,iVar1,
                     unaff_a6,unaff_a7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_00405854(void)

{
  int in_a2;
  uint uVar1;
  uint uVar2;
  
  if ((DAT_ram_0040df74 & 0xe00) != 0x600) {
    printf("pm wakeup st: %d, cause: %d\n",DAT_ram_0040df74 >> 9 & 7);
  }
  if ((DAT_ram_0040df74 & 0xe00) != 0x600) {
    ets_printf("%s %u\n",&DAT_ram_0040b90c,0x2da);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  if ((DAT_ram_0040df74 >> 0xd & 1) == 0) {
    uVar2 = DAT_ram_0040df74 & 0xffff;
    uVar1 = DAT_ram_0040df74 & 0xf1ff;
  }
  else {
    uVar2 = 0xa00;
    uVar1 = DAT_ram_0040df74 & 0xf1ff | 0xa00;
  }
  DAT_ram_0040df74 = DAT_ram_0040df74 & 0xffff0000 | uVar1;
  FUN_ram_00405510(uVar1,uVar2,0x600);
  uVar1 = DAT_ram_0040df74;
  DAT_ram_0040df74 = DAT_ram_0040df74 & 0xffffff | in_a2 << 0x18;
  if (in_a2 == 8) {
    memw();
    ets_timer_disarm(&DAT_ram_0040df98,uVar2,0x600);
    ets_timer_arm_us(&DAT_ram_0040df98,DAT_ram_0040df94,0);
  }
  else {
    if ((in_a2 == 0x10) && ((uVar1 & 0x2000) != 0)) {
      ets_timer_disarm(&DAT_ram_0040dfd0,uVar2,0x600);
      DAT_ram_0040df74 = DAT_ram_0040df74 | 0x4000;
      ets_timer_arm(&DAT_ram_0040dfd0,0xf,0);
    }
  }
  return;
}



void FUN_ram_00405934(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_ram_0040df74 & 0xe00) == 0xc00) {
    if ((DAT_ram_0040df74 >> 0xd & 1) == 0) {
      uVar2 = DAT_ram_0040df74 & 0xffff;
      uVar1 = DAT_ram_0040df74 & 0xf1ff;
      DAT_ram_0040df74 = DAT_ram_0040df74 & 0xfffff1ff;
    }
    else {
      uVar1 = DAT_ram_0040df74 & 0xffff;
      uVar2 = uVar1 | 0xe00;
      DAT_ram_0040df74 = DAT_ram_0040df74 & 0xffff0000 | uVar2;
    }
    ppProcessWaitQ(&DAT_ram_0040df44,uVar1,uVar2,0xc00,0xc00);
  }
  else {
    printf("offST%d",DAT_ram_0040df74 >> 9 & 7,0xe00,0xc00,DAT_ram_0040df74 & 0xe00);
  }
  return;
}



void pm_set_gpio_wakeup_pin(void)

{
  byte in_a2;
  uint uVar1;
  int unaff_a3;
  
  uVar1 = 1 << 0x20 - (' ' - (in_a2 & 0x1f));
  if (unaff_a3 == 4) {
    DAT_ram_0040e05c = uVar1 | DAT_ram_0040e05c;
  }
  else {
    if (unaff_a3 == 5) {
      DAT_ram_0040e05c = (uVar1 ^ 0xffffffff) & DAT_ram_0040e05c;
    }
  }
  DAT_ram_0040e060 = uVar1 | DAT_ram_0040e060;
  return;
}



void pm_clear_gpio_wakeup_pin(void)

{
  DAT_ram_0040e05c = 0;
  DAT_ram_0040e060 = 0;
  return;
}



void pm_is_gpio_int_trig(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_rtc_clock_cali_proc(void)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(_g_phyFuns + 0x98);
  DAT_ram_0040df48 = 0;
  (*pcVar1)(0x6a,2,8,0,pcVar1);
  pm_rtc_clock_cali(&DAT_ram_0040df44,2,8,0,pcVar1);
  return;
}



void pm_get_ck170_period(void)

{
  if (DAT_ram_0040df11 == '\0') {
    pm_rtc_clock_cali_proc(0);
    DAT_ram_0040df11 = '\x01';
  }
  return;
}



void pm_set_sleep_time(void)

{
  undefined4 uVar1;
  undefined4 in_a2;
  
  uVar1 = DAT_ram_0040df48;
  pm_usec2rtc();
  pm_set_sleep_cycles(in_a2,uVar1);
  return;
}



void pm_rf_is_closed(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_set_sleep_type_from_upper(void)

{
  uint in_a2;
  char *__format;
  undefined4 uVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = in_a2 & 0xff;
  bVar3 = (byte)uVar4;
  if (uVar4 == 0) {
    __format = "sleep %s";
    pcVar2 = "disable";
    _LwipTimOutLim = uVar4;
    DAT_ram_0040e04c = bVar3;
    DAT_ram_0040e04e = bVar3;
  }
  else {
    if (DAT_ram_0040e04e == '\0') {
      idle_timer_reopen_flag = 1;
    }
    DAT_ram_0040e04e = 1;
    pcVar2 = "enable";
    printf("sleep %s","enable");
    if (1 < (uVar4 - 1 & 0xff)) goto LAB_ram_00406077;
    if (DAT_ram_0040e04c != uVar4) {
      if (uVar4 == 1) {
        uVar1 = 3000;
        _LwipTimOutLim = 3000;
      }
      else {
        _LwipTimOutLim = 0;
        printf("\n light sleep is not supported now \n",LwipTimOutLim);
        uVar1 = 100;
      }
      reset_noise_timer(uVar1,LwipTimOutLim);
      DAT_ram_0040e04c = bVar3;
    }
    __format = ",type: %d";
    pcVar2 = (char *)(uint)DAT_ram_0040e04c;
  }
  printf(__format,pcVar2);
  bVar3 = DAT_ram_0040e04d;
LAB_ram_00406077:
  DAT_ram_0040e04d = bVar3;
  printf("\n",pcVar2);
  return;
}



void pm_get_sleep_type(void)

{
  return;
}



void uart_tx_flush(void)

{
  return;
}



void pm_suspend(void)

{
  return;
}



void pm_reset_idle_sleep(void)

{
  uint uVar1;
  
  DAT_ram_0040df78 = 0;
  os_timer_disarm(&DAT_ram_0040e008);
  if (((DAT_ram_0040df74 >> 0xd & 1) == 0) &&
     (uVar1 = DAT_ram_0040df74, rc_get_mask(DAT_ram_0040df74), uVar1 == 0)) {
    os_timer_arm(&DAT_ram_0040e008,500,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: ram

void pm_open(void)

{
  uint in_a2;
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = in_a2 & 0xff;
  if ((DAT_ram_0040df74 >> 0xd & 1) == 0) {
    uVar1 = DAT_ram_0040df74;
    fpm_is_open(DAT_ram_0040df74);
    if (uVar1 != 0) {
      esp_wifi_fpm_close(uVar1);
    }
    uVar1 = uVar3;
    rc_get_sta_trc(uVar3);
    if (uVar1 != 0) {
      (**(code **)(_g_osi_funcs_p + 0x2c))(*(code **)(_g_osi_funcs_p + 0x2c));
      os_timer_disarm(&DAT_ram_0040e008);
      printf("pm open phy_2,type:%d %d %d\n",(uint)DAT_ram_0040e04c,DAT_ram_0040df74 >> 9 & 7,
             (uint)DAT_ram_0040df7a);
      if ((DAT_ram_0040df74 & 0xe00) == 0) {
        DAT_ram_0040df74 = DAT_ram_0040df74 | 0xe00;
      }
      else {
        if (((DAT_ram_0040df74 & 0xe00) != 0xc00) && ((DAT_ram_0040df74 & 1) != 0)) {
          ets_printf("%s %u\n",&DAT_ram_0040b90c,0x408,g_osi_funcs_p);
          do {
                    // WARNING: Do nothing block with infinite loop
          } while( true );
        }
      }
      DAT_ram_0040df14 = 0;
      DAT_ram_0040df18 = 0;
      DAT_ram_0040df8e = *(undefined2 *)(uVar1 + 0x20);
      DAT_ram_0040df86 = (undefined)uVar3;
      memcpy(&DAT_ram_0040df87,(void *)(uVar1 + 0x1a),6);
      uVar3 = DAT_ram_0040df74 & 0xffff;
      DAT_ram_0040df74 = DAT_ram_0040df74 | 1;
      memw();
      DAT_ram_0040df50 = 0;
      DAT_ram_0040df4c = _DAT_ram_3ff20c00;
      uVar2 = _DAT_ram_3ff20c00;
      pp_disable_idle_timer(_DAT_ram_3ff20c00,uVar3,6,g_osi_funcs_p);
      pp_enable_idle_timer(uVar2,uVar3,6,g_osi_funcs_p);
      uVar3 = DAT_ram_0040df74 & 0xffff;
      DAT_ram_0040df74 = DAT_ram_0040df74 | 0x2000;
      (**(code **)(_g_osi_funcs_p + 0x30))(*(code **)(_g_osi_funcs_p + 0x30),uVar3,6,g_osi_funcs_p);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void vApplicationIdleHook(void)

{
  code *pcVar1;
  
  (**(code **)(_g_osi_funcs_p + 0x2c))(*(code **)(_g_osi_funcs_p + 0x2c));
  pcVar1 = DAT_ram_0040df18;
  if (DAT_ram_0040df18 != (code *)0x0) {
    (*DAT_ram_0040df18)(DAT_ram_0040df14,DAT_ram_0040df18);
  }
  (**(code **)(_g_osi_funcs_p + 0x30))(*(code **)(_g_osi_funcs_p + 0x30),pcVar1);
  return;
}



void freertos_set_idle_cb(void)

{
  undefined4 in_a2;
  undefined4 unaff_a3;
  
  DAT_ram_0040df14 = unaff_a3;
  DAT_ram_0040df18 = in_a2;
  return;
}



void pm_incr_active_cnt(void)

{
  if (DAT_ram_0040df80 + 1 != 0) {
    DAT_ram_0040df80 = DAT_ram_0040df80 + 1;
    return;
  }
  DAT_ram_0040df80 = DAT_ram_0040df80 + 2;
  return;
}



void pm_disable_active_timer(void)

{
  os_timer_disarm(&DAT_ram_0040e024);
  return;
}



void pm_enable_active_timer(void)

{
  os_timer_arm(&DAT_ram_0040e024,10000,0);
  return;
}



void pm_keep_active_disable(void)

{
  DAT_ram_0040df7e = 0;
  pm_disable_active_timer(0);
  DAT_ram_0040df80 = 0;
  return;
}



void pm_keep_active_enable(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_ram_0040df44;
  DAT_ram_0040df7e = 1;
  pm_disable_active_timer(&DAT_ram_0040df44,1);
  pm_enable_active_timer(puVar1,1);
  return;
}



void pm_enable_gpio_wakeup(void)

{
  DAT_ram_0040df74._0_2_ = (ushort)DAT_ram_0040df74 | 0x20;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_attach(void)

{
  undefined4 uVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  
  DAT_ram_0040df74._0_2_ = (ushort)DAT_ram_0040df74 & 0xfffc | 0xc;
  DAT_ram_0040e04a = 2;
  ets_timer_setfn(&DAT_ram_0040dfb4,&LAB_ram_00405910,0);
  DAT_ram_0040e04b = 0;
  DAT_ram_0040e04d = 0;
  DAT_ram_0040df74._2_1_ = 0;
  DAT_ram_0040e04c = 2;
  DAT_ram_0040e04e = 1;
  DAT_ram_0040df6c = 0x9c4;
  DAT_ram_0040df90 = 3000;
  DAT_ram_0040df94 = 9000;
  DAT_ram_0040df74._0_2_ = (ushort)DAT_ram_0040df74 & 0xdfdf;
  DAT_ram_0040df80 = 0;
  DAT_ram_0040df7e = 0;
  ppRegisterTxCallback(&LAB_ram_004069d4,5,0xffffdfff);
  ppRegisterTxCallback(&LAB_ram_004068fc,6,0xffffdfff);
  ets_timer_setfn(&DAT_ram_0040df98,&LAB_ram_00406778,0);
  ets_timer_setfn(&DAT_ram_0040dfd0,&LAB_ram_00406828,0);
  os_timer_setfn(&DAT_ram_0040dfec,&LAB_ram_004054c4,0);
  os_timer_setfn(&DAT_ram_0040e008,pm_idle_sleep,0);
  os_timer_setfn(&DAT_ram_0040e024,&LAB_ram_00406ef8,0);
  pcVar3 = *(code **)(_g_osi_funcs_p + 100);
  uVar1 = 4;
  (*pcVar3)(4,4,pcVar3);
  pcVar4 = *(code **)(_g_osi_funcs_p + 0xc);
  pcVar2 = *(code **)(_g_osi_funcs_p + 0x24);
  DAT_ram_0040df40 = uVar1;
  (*pcVar2)(pcVar2,_g_osi_funcs_p,pcVar3);
  pcVar2 = pcVar2 + -4;
  (*pcVar4)(&LAB_ram_00406b20,&DAT_ram_0040b920,0x400,0,pcVar2,pcVar4);
  pcVar3 = *(code **)(_g_osi_funcs_p + 0x24);
  (*pcVar3)(pcVar3,&DAT_ram_0040b920,0x400,0,pcVar2,pcVar4);
  DAT_ram_0040df79 = 1;
  pm_reset_idle_sleep(pcVar3,&DAT_ram_0040b920,0x400,0,pcVar2,pcVar4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_send_nullfunc(void)

{
  undefined4 uVar1;
  char in_a2;
  uint **ppuVar2;
  undefined4 uVar3;
  char unaff_a3;
  uint *puVar4;
  uint uVar5;
  void *__s;
  uint *local_40 [4];
  undefined4 uStack48;
  
  local_40[0] = (uint *)0x0;
  if (unaff_a3 != '\0') {
    if (DAT_ram_0040df7b != '\0') {
      if (in_a2 != '\0') {
        DAT_ram_0040df7d = 0;
        return;
      }
      DAT_ram_0040df7d = 2;
      return;
    }
    if (DAT_ram_0040df7c != '\0') {
      DAT_ram_0040df7d = in_a2;
      return;
    }
    if ((DAT_ram_0040df74 >> 0xf & 1) != 0) {
      if (in_a2 != '\0') {
        DAT_ram_0040df7d = 1;
        return;
      }
      DAT_ram_0040df7d = 2;
      return;
    }
    DAT_ram_0040df7a = 1;
    if (in_a2 == '\0') {
      DAT_ram_0040df7c = '\x01';
    }
    else {
      DAT_ram_0040df7b = '\x01';
    }
  }
  ppuVar2 = local_40;
  ieee80211_getmgtframe(ppuVar2,0x18,0);
  if (ppuVar2 != (uint **)0x0) {
    __s = (void *)(*ppuVar2)[1];
    uStack48 = 0x18;
    memset(__s,0,0x18);
    uVar1 = uStack48;
    puVar4 = *ppuVar2;
    *(short *)(ppuVar2 + 4) = (short)uStack48;
    *(undefined2 *)((int)ppuVar2 + 0x12) = 0;
    memw();
    memw();
    *puVar4 = *puVar4 | 0x80000000;
    memw();
    memw();
    *puVar4 = *puVar4 | 0x40000000;
    memw();
    memw();
    *puVar4 = *puVar4 & 0xdfffffff;
    memw();
    memw();
    *puVar4 = *puVar4 & 0xff000fff | 0x18000;
    uVar3 = 0;
    uStack48 = 0xf00d;
    ic_get_addr(0,0xf00d,puVar4,uVar1);
    ieee80211_send_setup(uStack48,ppuVar2,0x48,0,uVar3,&DAT_ram_0040df87,&DAT_ram_0040df87);
    puVar4 = ppuVar2[8];
    memw();
    puVar4[5] = _DAT_ram_3ff20c00;
    uVar5 = *puVar4;
    puVar4[1] = puVar4[1] & 0xff8ffff0 | 6;
    *puVar4 = uVar5 & 0x3f;
    *puVar4 = uVar5 & 0x3d;
    ppuVar2[6] = (uint *)0x0;
    if (unaff_a3 != '\0') {
      if (in_a2 == '\0') {
        puVar4[4] = 0x40;
      }
      else {
        *(byte *)((int)__s + 1) = *(byte *)((int)__s + 1) | 0x10;
        puVar4 = (uint *)&DAT_ram_00000020;
        ppuVar2[8][4] = 0x20;
      }
    }
    ppTxPkt(ppuVar2,puVar4,0,0xfffffffd,uVar3,&DAT_ram_0040df87);
    return;
  }
  ets_printf("%s %u\n",&DAT_ram_0040b90c,0x82e);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_ram_004065ac(void)

{
  int in_a2;
  
  pm_rf_is_closed();
  if (in_a2 == 0) {
    pm_send_nullfunc(0,1);
    DAT_ram_0040df74._0_2_ = (ushort)DAT_ram_0040df74 & 0xf1ff | 0xc00;
  }
  else {
    printf("rf close,nulldata_false");
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_004065e8(void)

{
  uint uVar1;
  uint uVar2;
  
  DAT_ram_0040df14 = 0;
  DAT_ram_0040df18 = 0;
  uVar2 = DAT_ram_0040df74 & 0xffff;
  DAT_ram_0040df74 = DAT_ram_0040df74 & 0xffffbfff;
  memw();
  ets_timer_disarm(&DAT_ram_0040df98,uVar2);
  ets_timer_disarm(&DAT_ram_0040dfd0,uVar2);
  if (((DAT_ram_0040df74 >> 0xc & 1) == 0) && (uVar2 = (uint)DAT_ram_0040df7b, uVar2 == 0)) {
    DAT_ram_0040df7d = DAT_ram_0040df7b;
    uVar2 = DAT_ram_0040df74 & 0xffff;
    if ((DAT_ram_0040df74 >> 0xd & 1) == 0) {
      uVar1 = DAT_ram_0040df74 & 0xf1ff;
    }
    else {
      uVar1 = uVar2 | 0xe00;
    }
    DAT_ram_0040df74 = DAT_ram_0040df74 & 0xffff0000 | uVar1;
    ppProcessWaitQ(uVar1,uVar2);
    return;
  }
  FUN_ram_004065ac(DAT_ram_0040df74,uVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_shutdown(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  if ((DAT_ram_0040df74 >> 0xd & 1) != 0) {
    (**(code **)(_g_osi_funcs_p + 0x2c))(*(code **)(_g_osi_funcs_p + 0x2c));
    ets_timer_disarm(&DAT_ram_0040df98);
    ets_timer_disarm(&DAT_ram_0040dfd0);
    uVar6 = DAT_ram_0040df74 & 0xffff;
    DAT_ram_0040df7a = 0;
    DAT_ram_0040df7b = 0;
    DAT_ram_0040df74 = DAT_ram_0040df74 & 0xffffefff;
    puVar3 = &DAT_ram_0040d13c;
    if ((DAT_ram_0040d13c == '\x02') &&
       (pm_rf_is_closed(&DAT_ram_0040d13c,uVar6), puVar3 != (undefined1 *)0x0)) {
      ets_timer_disarm(&DAT_ram_0040dfb4,uVar6);
      FUN_ram_00405854(2,uVar6);
    }
    if (((DAT_ram_0040df74 & 0xe00) != 0) &&
       (iVar4 = (DAT_ram_0040df74 & 0xe00) - 0xe00, iVar4 != 0)) {
      FUN_ram_004065e8(iVar4,DAT_ram_0040df74);
    }
    iVar4 = _DAT_ram_3ff20c00;
    uVar1 = DAT_ram_0040df50;
    memw();
    iVar7 = _DAT_ram_3ff20c00 - DAT_ram_0040df4c;
    printf("pm close %d %d %u/%u\n",DAT_ram_0040df74 >> 9 & 7,(uint)DAT_ram_0040df7a,
           DAT_ram_0040df50,iVar7,_DAT_ram_3ff20c00);
    uVar5 = DAT_ram_0040df74;
    DAT_ram_0040df90 = 3000;
    DAT_ram_0040df94 = 9000;
    DAT_ram_0040df70 = 0;
    DAT_ram_0040df84 = 0;
    DAT_ram_0040df5c = 0;
    DAT_ram_0040df54 = 0;
    DAT_ram_0040df58 = 0;
    DAT_ram_0040df64 = 0;
    uVar6 = (uint)((ushort)(DAT_ram_0040df74 >> 0x10) & 0xff00) << 0x10;
    DAT_ram_0040df74 = DAT_ram_0040df74 & 0xfe3e | uVar6;
    uVar2 = DAT_ram_0040df74;
    if ((uVar5 & 0xe00) != 0) {
      uVar5 = uVar5 & 0xf03e;
      DAT_ram_0040df74 = uVar6 | uVar5;
      ppProcessWaitQ(uVar5,0xfffff1ff,uVar2,uVar1,iVar7,iVar4);
    }
    uVar6 = DAT_ram_0040df74 & 0xffff;
    DAT_ram_0040df74 = DAT_ram_0040df74 & 0xffffdfff;
    (**(code **)(_g_osi_funcs_p + 0x30))
              (*(code **)(_g_osi_funcs_p + 0x30),uVar6,uVar2,uVar1,iVar7,iVar4);
  }
  return;
}



void FUN_ram_004068bc(void)

{
  int in_a2;
  
  pm_rf_is_closed();
  if (in_a2 == 0) {
    pm_send_nullfunc(1,1);
    DAT_ram_0040df74._0_2_ = (ushort)DAT_ram_0040df74 & 0xf1ff | 0x200;
  }
  else {
    printf("rf close,nulldata_send fail");
  }
  return;
}



void pm_is_waked(void)

{
  return;
}



void FUN_ram_00406c64(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  printf("sul %d %d\n",DAT_ram_0040df74 >> 9 & 7,(uint)DAT_ram_0040df7d);
  uVar1 = DAT_ram_0040df74;
  DAT_ram_0040df74 = DAT_ram_0040df74 & 0xffff7fff;
  uVar4 = DAT_ram_0040df74;
  if (((DAT_ram_0040df74 >> 0xd & 1) != 0) && (uVar2 = (uint)DAT_ram_0040df7a, uVar2 == 0)) {
    uVar3 = (uint)DAT_ram_0040df7d;
    if (uVar3 == 1) {
      DAT_ram_0040df7d = DAT_ram_0040df7a;
      uVar4 = uVar3;
      if ((uVar1 & 0xe00) != 0x200) {
        ets_printf("%s %u\n",&DAT_ram_0040b90c,0x899);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
    else {
      if (uVar3 != 2) {
        pm_is_waked(0,uVar3,DAT_ram_0040df74);
        if (uVar2 == 0) {
          return;
        }
        pp_disable_idle_timer(uVar2,uVar3,uVar4);
        pp_enable_idle_timer(uVar2,uVar3,uVar4);
        return;
      }
      DAT_ram_0040df7d = DAT_ram_0040df7a;
      if ((uVar1 & 0xe00) != 0xc00) {
        ets_printf("%s %u\n",&DAT_ram_0040b90c,0x8a0);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      uVar3 = uVar2;
      uVar4 = 1;
    }
    DAT_ram_0040df7d = DAT_ram_0040df7a;
    pm_send_nullfunc(uVar3,uVar4,uVar1 & 0xe00);
  }
  return;
}



void pm_is_open(void)

{
  return;
}



void pm_scan_lock(void)

{
  uint uVar1;
  uint uVar2;
  
  printf("sl\n");
  uVar2 = (uint)(ushort)DAT_ram_0040df74;
  uVar1 = uVar2 | 0xffff8000;
  DAT_ram_0040df74._0_2_ = (ushort)uVar1;
  pp_disable_idle_timer(&DAT_ram_0040df44,uVar1,uVar2);
  return;
}



void pm_try_scan_unlock(void)

{
  FUN_ram_00406c64();
  return;
}



void pm_force_scan_unlock(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_ram_0040ba38;
  printf("usl\n");
  FUN_ram_00406c64(puVar1);
  return;
}



void pm_scan_unlocked(void)

{
  return;
}



void pm_allow_tx(void)

{
  uint uVar1;
  
  uVar1 = DAT_ram_0040df74 & 0xe00;
  if ((uVar1 != 0xe00) && (uVar1 != 0 && uVar1 != 0xe00)) {
    return;
  }
  return;
}



void pm_assoc_parse(void)

{
  int in_a2;
  
  if (*(short *)(in_a2 + 2) == 0) {
    DAT_ram_0040df8e = *(undefined2 *)(in_a2 + 4);
    return;
  }
  return;
}



void pm_set_addr(void)

{
  undefined in_a2;
  void *unaff_a3;
  
  DAT_ram_0040df86 = in_a2;
  memcpy(&DAT_ram_0040df87,unaff_a3,6);
  return;
}



void pm_sleep_for(void)

{
  void *in_a2;
  
  if ((DAT_ram_0040df74 >> 0xd & 1) != 0) {
    memcmp(in_a2,&DAT_ram_0040df87,6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pm_post(void)

{
  byte bVar1;
  int in_a2;
  code *pcVar2;
  char *__format;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int *local_30 [7];
  
  if (DAT_ram_0040df79 != '\0') {
    pcVar2 = *(code **)(_g_osi_funcs_p + 4);
    (*pcVar2)(pcVar2);
    bVar1 = (&DAT_ram_0040e064)[in_a2];
    local_30[0] = (int *)(uint)bVar1;
    if (local_30[0] == (int *)0x0) {
      (&DAT_ram_0040e064)[in_a2] = 1;
      pcVar5 = *(code **)(_g_osi_funcs_p + 8);
      (*pcVar5)(pcVar2,pcVar5,1);
      pcVar2 = *(code **)(_g_osi_funcs_p + 4);
      (*pcVar2)(pcVar2,pcVar5,1);
      uVar6 = (uint)DAT_ram_0040df1c;
      uVar7 = uVar6 + 1 & 0xff;
      if (uVar7 < 5) {
        local_30[0] = (int *)(&DAT_ram_0040df20 + (uint)DAT_ram_0040df1d * 8);
        uVar6 = DAT_ram_0040df1d + 1 & 0xff;
        DAT_ram_0040df1c = (byte)uVar7;
        DAT_ram_0040df1d = bVar1;
        if (uVar6 < 4) {
          DAT_ram_0040df1d = (byte)uVar6;
        }
      }
      pcVar5 = *(code **)(_g_osi_funcs_p + 8);
      (*pcVar5)(pcVar2,pcVar5,uVar6,uVar7);
      __format = "PMQ_NUL\n";
      uVar3 = uVar6;
      if (local_30[0] != (int *)0x0) {
        pcVar5 = *(code **)(_g_osi_funcs_p + 0x6c);
        pcVar2 = *(code **)(_g_osi_funcs_p + 0x28);
        *local_30[0] = in_a2;
        iVar4 = DAT_ram_0040df40;
        uVar3 = 10;
        (*pcVar2)(10,pcVar2,uVar6,uVar7);
        uVar7 = 1;
        (*pcVar5)(iVar4,local_30,uVar3,1);
        pcVar5 = (code *)0x0;
        if (iVar4 != 0) {
          return;
        }
        __format = "PMQ_FL";
      }
      printf(__format,pcVar5,uVar3,uVar7);
    }
    else {
      (**(code **)(_g_osi_funcs_p + 8))(pcVar2,*(code **)(_g_osi_funcs_p + 8));
    }
  }
  return;
}



void pm_get_idle_wait_time(void)

{
  rc_get_sta_trc(DAT_ram_0040df86);
  return;
}



// WARNING: Removing unreachable block (ram,0x00407004)
// WARNING: Removing unreachable block (ram,0x00406fec)
// WARNING: Removing unreachable block (ram,0x00406ff4)
// WARNING: Removing unreachable block (ram,0x00406ff7)
// WARNING: Removing unreachable block (ram,0x00406fff)
// WARNING: Removing unreachable block (ram,0x00407002)
// WARNING: Removing unreachable block (ram,0x0040700a)
// WARNING: Removing unreachable block (ram,0x0040700c)
// WARNING: Removing unreachable block (ram,0x00407015)
// WARNING: Removing unreachable block (ram,0x00407044)
// WARNING: Removing unreachable block (ram,0x0040703c)
// WARNING: Removing unreachable block (ram,0x0040704d)
// WARNING: Removing unreachable block (ram,0x0040708d)
// WARNING: Removing unreachable block (ram,0x0040707c)
// WARNING: Removing unreachable block (ram,0x00407082)
// WARNING: Removing unreachable block (ram,0x00407090)
// WARNING: Removing unreachable block (ram,0x004070b3)
// WARNING: Removing unreachable block (ram,0x004070bc)
// WARNING: Removing unreachable block (ram,0x004070c7)
// WARNING: Removing unreachable block (ram,0x004070b6)
// WARNING: Removing unreachable block (ram,0x004070d5)
// WARNING: Removing unreachable block (ram,0x004070f5)
// WARNING: Removing unreachable block (ram,0x00407102)
// WARNING: Removing unreachable block (ram,0x0040710b)
// WARNING: Removing unreachable block (ram,0x00407118)
// WARNING: Removing unreachable block (ram,0x00407122)
// WARNING: Removing unreachable block (ram,0x00407125)
// WARNING: Removing unreachable block (ram,0x00407154)
// WARNING: Removing unreachable block (ram,0x00407181)
// WARNING: Removing unreachable block (ram,0x00407162)
// WARNING: Removing unreachable block (ram,0x0040716f)
// WARNING: Removing unreachable block (ram,0x00407137)
// WARNING: Removing unreachable block (ram,0x00407145)
// WARNING: Removing unreachable block (ram,0x00407184)
// WARNING: Removing unreachable block (ram,0x00407190)
// WARNING: Removing unreachable block (ram,0x004071b4)
// WARNING: Removing unreachable block (ram,0x00407192)
// WARNING: Removing unreachable block (ram,0x004071a2)
// WARNING: Removing unreachable block (ram,0x004071a8)
// WARNING: Removing unreachable block (ram,0x004071bb)
// WARNING: Removing unreachable block (ram,0x004071ec)
// WARNING: Removing unreachable block (ram,0x004071f4)
// WARNING: Removing unreachable block (ram,0x004071f7)
// WARNING: Removing unreachable block (ram,0x004071c3)
// WARNING: Removing unreachable block (ram,0x004071d1)
// WARNING: Removing unreachable block (ram,0x004071d4)
// WARNING: Removing unreachable block (ram,0x004071d7)
// WARNING: Removing unreachable block (ram,0x004071da)
// WARNING: Removing unreachable block (ram,0x004071dd)
// WARNING: Removing unreachable block (ram,0x004071e3)
// WARNING: Removing unreachable block (ram,0x00407205)
// WARNING: Removing unreachable block (ram,0x00407218)
// WARNING: Removing unreachable block (ram,0x0040721e)
// WARNING: Removing unreachable block (ram,0x00407221)
// WARNING: Removing unreachable block (ram,0x004071fd)
// WARNING: Removing unreachable block (ram,0x00407207)
// WARNING: Removing unreachable block (ram,0x00407212)
// WARNING: Removing unreachable block (ram,0x004071c6)
// WARNING: Removing unreachable block (ram,0x00407238)
// WARNING: Removing unreachable block (ram,0x0040723a)
// WARNING: Removing unreachable block (ram,0x0040723d)
// WARNING: Removing unreachable block (ram,0x00407243)
// WARNING: Removing unreachable block (ram,0x004071c9)
// WARNING: Removing unreachable block (ram,0x004071cc)
// WARNING: Removing unreachable block (ram,0x00407246)
// WARNING: Removing unreachable block (ram,0x00407248)
// WARNING: Removing unreachable block (ram,0x00407224)
// WARNING: Removing unreachable block (ram,0x00407226)
// WARNING: Removing unreachable block (ram,0x00407235)
// WARNING: Removing unreachable block (ram,0x004071ee)

void pm_onBcnRx(void)

{
  int unaff_a3;
  int unaff_a4;
  
  if (0xb < unaff_a4 - unaff_a3) {
    DAT_ram_0040df70 = 0;
    ets_printf("%s %u\n",&DAT_ram_0040b90c,0x45e,unaff_a3 + 0xc);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_00407270(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint unaff_a4;
  undefined4 unaff_a5;
  undefined4 unaff_a6;
  uint unaff_a7;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte in_CCOUNT;
  byte in_CCOMPARE0;
  
  if (DAT_ram_0040d13d == '\x01') {
    if (DAT_ram_0040e0ae < 2) {
      rsr(in_CCOUNT);
      uVar4 = *(uint *)(uint)in_CCOUNT;
      rsr(in_CCOMPARE0);
      uVar5 = *(uint *)(uint)in_CCOMPARE0;
      if (uVar5 <= uVar4) {
        printf("ferr6:%u,%u\n",uVar4,uVar5);
        unaff_a4 = uVar5;
      }
      CCOMPARE_AddVal = uVar4 + 4000000;
      _xt_set_xt_ccompare_val(&CCOMPARE_AddVal,CCOMPARE_AddVal,unaff_a4);
      pm_wakeup_init(2,0,unaff_a4);
      rsr(in_CCOUNT);
      uVar6 = *(uint *)(uint)in_CCOUNT;
      uVar1 = 0;
      if (uVar6 <= uVar4) {
        printf("ferr4:%u,%u\n",uVar4,uVar6);
        uVar1 = uVar4;
        unaff_a4 = uVar6;
      }
      CCOMPARE_AddVal = (uVar5 - uVar4) + uVar6;
      _xt_set_xt_ccompare_val(&CCOMPARE_AddVal,uVar1,unaff_a4);
      DAT_ram_0040e0ae = 2;
    }
    else {
      pm_wakeup_init(2,1);
    }
    DAT_ram_0040e0ac = 0;
    rsr(in_CCOUNT);
    uVar4 = *(uint *)(uint)in_CCOUNT;
    rsr(in_CCOMPARE0);
    uVar5 = *(uint *)(uint)in_CCOMPARE0;
    if (uVar5 <= uVar4) {
      printf("ferr5:%u,%u\n",uVar4,uVar5);
      unaff_a4 = uVar5;
    }
    memw();
    __umodsi3((_DAT_ram_3ff20c00 + WdevTimOffSet) - DAT_ram_0040e0a4,10000,unaff_a4);
    uVar4 = DAT_ram_0040e0a8 + uVar4;
    if (uVar5 <= uVar4) {
      uVar1 = (uint)DAT_ram_0040e0ac;
      while( true ) {
        unaff_a7 = uVar1 + 1 & 0xffff;
        unaff_a5 = 800000;
        if (uVar4 - uVar5 < 0xc3501) break;
        uVar4 = uVar4 - 800000;
        uVar1 = unaff_a7;
      }
      DAT_ram_0040e0ac = (ushort)uVar1;
      rsr(in_CCOUNT);
      unaff_a6 = 400000;
      CCOMPARE_AddVal = (uVar5 + 800000 + *(int *)(uint)in_CCOUNT) - uVar4;
      uVar4 = *(int *)(uint)in_CCOUNT + 400000;
      if (CCOMPARE_AddVal < uVar4) {
        CCOMPARE_AddVal = CCOMPARE_AddVal + 800000;
        uVar4 = uVar1 + 1;
        DAT_ram_0040e0ac = (ushort)uVar4;
      }
      _xt_set_xt_ccompare_val(&CCOMPARE_AddVal,CCOMPARE_AddVal,uVar4,800000,400000,unaff_a7);
      DAT_ram_0040e0ac = DAT_ram_0040e0ac + 1;
    }
    rsr(in_CCOUNT);
    rsr(in_CCOMPARE0);
    unaff_a4 = *(uint *)(uint)in_CCOMPARE0;
    if (unaff_a4 < *(int *)(uint)in_CCOUNT + 400000U) {
      DAT_ram_0040e0ac = DAT_ram_0040e0ac + 1;
      CCOMPARE_AddVal = *(int *)(uint)in_CCOUNT + 800000;
      _xt_set_xt_ccompare_val(CCOMPARE_AddVal,&CCOMPARE_AddVal,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
    }
    memw();
    iVar2 = (_DAT_ram_3ff20c00 + WdevTimOffSet) - DAT_ram_0040e0a4;
    __udivsi3(iVar2,10000,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
    uVar5 = (uint)DAT_ram_0040e0ac;
    uVar4 = iVar2 + uVar5 & 0xffff;
    DAT_ram_0040e0ac = (ushort)uVar4;
    vTaskStepTick(uVar4,uVar5,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
    uVar4 = WDEV_INTEREST_EVENT;
    if (NMIIrqIsOn == '\0') {
      memw();
      _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
      vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
      uVar5 = uVar4;
    }
    uVar3 = 0;
    clockgate_watchdog(0,uVar5,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
    system_soft_wdt_restart(uVar3,uVar5,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
    uVar4 = _DAT_ram_3ff00014;
    if (DAT_ram_0040e0af == '\x01') {
      memw();
      _DAT_ram_3ff00014 = _DAT_ram_3ff00014 | 1;
      memw();
      ets_update_cpu_frequency(0xa0,_DAT_ram_3ff00014,uVar4,unaff_a5,unaff_a6,unaff_a7);
      unaff_a4 = uVar4;
    }
  }
  else {
    if (DAT_ram_0040d13d == '\x02') {
      clockgate_watchdog(1,2);
      pm_wakeup_init(8,0);
      clockgate_watchdog(0,0);
    }
  }
  if (pend_flag_periodic_cal == '\x01') {
    pend_flag_periodic_cal = '\0';
    periodic_cal_top(0,0,unaff_a4,unaff_a5,unaff_a6,unaff_a7);
  }
  if (pend_flag_noise_check == '\x01') {
    pend_flag_noise_check = '\0';
    noise_check_loop(1,1,0,unaff_a5,unaff_a6,unaff_a7);
  }
  return;
}



void FUN_ram_00407450(void)

{
  uint uVar1;
  uint uVar2;
  
  FUN_ram_00407270();
  if ((DAT_ram_0040e080 >> 0xd & 1) == 0) {
    uVar2 = DAT_ram_0040e080 & 0xffff;
    uVar1 = DAT_ram_0040e080 & 0xf1ff;
  }
  else {
    uVar2 = 0x600;
    uVar1 = DAT_ram_0040e080 & 0xf1ff | 0x600;
  }
  DAT_ram_0040e080 = DAT_ram_0040e080 & 0xffff0000 | uVar1;
  ppProcessWaitQ(&DAT_ram_0040e070,uVar1,uVar2);
  return;
}



void fpm_set_type_from_upper(void)

{
  byte in_a2;
  undefined4 uVar1;
  uint unaff_a3;
  
  if (in_a2 == 0) {
    DAT_ram_0040e0b0 = in_a2;
    printf("force slp disable");
  }
  else {
    printf("force slp enable");
    if ((byte)(in_a2 - 1) < 2) {
      if (DAT_ram_0040e0b0 != in_a2) {
        uVar1 = 3000;
        if (in_a2 != 1) {
          uVar1 = 100;
        }
        reset_noise_timer(uVar1);
        DAT_ram_0040e0b0 = in_a2;
      }
      unaff_a3 = (uint)DAT_ram_0040e0b0;
      printf(",type: %d",unaff_a3);
    }
  }
  printf("\n",unaff_a3);
  return;
}



void fpm_get_slp_type(void)

{
  return;
}



void fpm_rf_is_closed(void)

{
  return;
}



void fpm_is_open(void)

{
  return;
}



void fpm_allow_tx(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void esp_wifi_fpm_close(void)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  if ((DAT_ram_0040e080 >> 0xd & 1) != 0) {
    (**(code **)(_g_osi_funcs_p + 0x2c))(*(code **)(_g_osi_funcs_p + 0x2c));
    freertos_set_idle_cb(0,0);
    uVar2 = (uint)DAT_ram_0040d13d;
    if ((uVar2 == 2) && (fpm_rf_is_closed(2,0), uVar2 != 0)) {
      puVar3 = &DAT_ram_0040e088;
      os_timer_disarm(&DAT_ram_0040e088,0);
      FUN_ram_00407450(puVar3,0);
    }
    printf("fpm close %d \n",DAT_ram_0040e080 >> 9 & 7);
    uVar2 = DAT_ram_0040e080;
    DAT_ram_0040e080 = DAT_ram_0040e080 & 0xffffde3f;
    uVar1 = DAT_ram_0040e080;
    DAT_ram_0040e078 = 0;
    uVar4 = 0xe00;
    if ((uVar2 & 0xe00) != 0) {
      uVar4 = 0xfffff1ff;
      DAT_ram_0040e080 = uVar2 & 0xffffd03f;
    }
    (**(code **)(_g_osi_funcs_p + 0x30))(*(code **)(_g_osi_funcs_p + 0x30),uVar4,uVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void fpm_open(void)

{
  uint uVar1;
  uint uVar2;
  
  if ((DAT_ram_0040e080 >> 0xd & 1) == 0) {
    uVar1 = DAT_ram_0040e080;
    pm_is_open(DAT_ram_0040e080);
    if (uVar1 != 0) {
      pm_shutdown(uVar1);
    }
    (**(code **)(_g_osi_funcs_p + 0x2c))(*(code **)(_g_osi_funcs_p + 0x2c));
    DAT_ram_0040e080 = DAT_ram_0040e080 | 0x2000;
    freertos_set_idle_cb(0,0);
    uVar2 = DAT_ram_0040e080 >> 9 & 7;
    printf("fpm open,type:%d %d\n",(uint)DAT_ram_0040e0b0,uVar2);
    uVar1 = DAT_ram_0040e080;
    if ((DAT_ram_0040e080 & 0xe00) == 0) {
      uVar1 = 0x600;
      DAT_ram_0040e080 = DAT_ram_0040e080 & 0xfffff1ff | 0x600;
    }
    (**(code **)(_g_osi_funcs_p + 0x30))(*(code **)(_g_osi_funcs_p + 0x30),uVar1,uVar2);
  }
  return;
}



void fpm_attach(void)

{
  DAT_ram_0040e080._0_2_ = (ushort)DAT_ram_0040e080 & 0xfffd | 0xd;
  DAT_ram_0040e0ae = 2;
  os_timer_setfn(&DAT_ram_0040e088,&LAB_ram_00407498,0);
  DAT_ram_0040e080._0_2_ = (ushort)DAT_ram_0040e080 & 0xdfff;
  DAT_ram_0040e080._2_1_ = 1;
  DAT_ram_0040e0af = 0;
  DAT_ram_0040e0b0 = 2;
  return;
}



void fpm_set_wakeup_cb(void)

{
  undefined4 in_a2;
  
  DAT_ram_0040e06c = in_a2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void esp_wifi_fpm_do_wakeup(void)

{
  undefined *puVar1;
  uint unaff_a3;
  uint unaff_a4;
  
  (**(code **)(_g_osi_funcs_p + 0x2c))(*(code **)(_g_osi_funcs_p + 0x2c));
  if (((((DAT_ram_0040e080 >> 0xd & 1) != 0) &&
       (unaff_a3 = DAT_ram_0040e080, pm_is_open(DAT_ram_0040e080), unaff_a3 == 0)) &&
      (DAT_ram_0040d13d == '\x02')) && (unaff_a4 = DAT_ram_0040e080 & 0xe00, unaff_a4 == 0x400)) {
    freertos_set_idle_cb(0,0,0x400);
    puVar1 = &DAT_ram_0040e088;
    os_timer_disarm(&DAT_ram_0040e088,0,0x400);
    FUN_ram_00407450(puVar1,0,0x400);
  }
  (**(code **)(_g_osi_funcs_p + 0x30))(*(code **)(_g_osi_funcs_p + 0x30),unaff_a3,unaff_a4);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void esp_wifi_fpm_do_sleep(void)

{
  undefined4 in_a2;
  uint uVar1;
  
  (**(code **)(_g_osi_funcs_p + 0x2c))(*(code **)(_g_osi_funcs_p + 0x2c));
  uVar1 = (uint)*_g_wifi_nvs;
  if (uVar1 != 0) {
    ets_printf("%s %u\n",&DAT_ram_0040b924,0x346);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  pm_is_open(0);
  if (uVar1 == 0) {
    if ((((DAT_ram_0040e080 >> 0xd & 1) != 0) && ((DAT_ram_0040e080 & 0xe00) == 0x600)) &&
       (DAT_ram_0040e0b0 != '\0')) {
      memw();
      DAT_ram_0040e078 = _DAT_ram_3ff20c00;
      DAT_ram_0040e084 = in_a2;
      freertos_set_idle_cb(&LAB_ram_00407504,0,0x600);
      DAT_ram_0040e080 = DAT_ram_0040e080 & 0xfffff1ff | 0x200;
      (**(code **)(_g_osi_funcs_p + 0x30))(*(code **)(_g_osi_funcs_p + 0x30),0x200,0x600);
    }
    return;
  }
  ets_printf("%s %u\n",&DAT_ram_0040b924,0x347);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void wifi_fpm_auto_sleep_set_in_null_mode(void)

{
  char in_a2;
  char *__format;
  undefined4 unaff_a3;
  
  printf("nul mode, fpm auto sleep set:");
  DAT_ram_0040e0b1 = in_a2 != '\0';
  if ((bool)DAT_ram_0040e0b1) {
    unaff_a3 = 1;
    __format = "enalbe\n";
  }
  else {
    __format = "disalbe\n";
  }
  printf(__format,unaff_a3);
  return;
}



void get_fpm_auto_sleep_flag(void)

{
  return;
}



void DefFreqCalTimerCB(void)

{
  CanDoFreqCal = 1;
  return;
}



void pp_tx_idle_timeout(void)

{
  if (((byte)g_wifi_nvs & 1) == 0) {
    pm_post((byte)g_wifi_nvs & 1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_00407d98(void)

{
  char cVar1;
  int iVar2;
  int in_a2;
  int iVar3;
  void *pvVar4;
  int unaff_a3;
  int unaff_a4;
  int unaff_a5;
  uint __n;
  char *pcVar5;
  
  if (0xb < unaff_a4 - unaff_a3) {
    iVar3 = 0;
    for (pcVar5 = (char *)(unaff_a3 + 0xc); iVar2 = _g_wifi_nvs, 1 < unaff_a4 - (int)pcVar5;
        pcVar5 = pcVar5 + (byte)pcVar5[1] + 2) {
      __n = (uint)(byte)pcVar5[1];
      if (unaff_a4 - (int)pcVar5 <= (int)(__n + 1)) {
        return;
      }
      cVar1 = *pcVar5;
      if (cVar1 == '\x03') {
        if (unaff_a5 == 1) {
          chm_get_current_channel(iVar3,3,__n + 1);
          if (pcVar5[2] != *(char *)(iVar3 + 6)) {
            return;
          }
          goto LAB_ram_00407e1c;
        }
      }
      else {
        if (cVar1 == -0x23) {
          if (unaff_a5 == 1) {
            if (2 < __n) {
              memcmp(pcVar5 + 2,&DAT_ram_0040b928,3);
              return;
            }
            goto LAB_ram_00407e1c;
          }
        }
        else {
          if ((cVar1 == '\0') && (unaff_a5 == 2)) {
            if (*(char *)(_g_wifi_nvs + 0x92) != '\0') {
              pvVar4 = (void *)(_g_wifi_nvs + 0x93);
              memcmp(pvVar4,(void *)(in_a2 + 0x10),6);
              if (pvVar4 != (void *)0x0) {
                return;
              }
            }
            if (*(uint *)(iVar2 + 4) != __n) {
              return;
            }
            pvVar4 = (void *)(iVar2 + 8);
            memcmp(pvVar4,pcVar5 + 2,__n);
            if (pvVar4 != (void *)0x0) {
              return;
            }
LAB_ram_00407e1c:
            iVar3 = 1;
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void PPWdtReset(void)

{
  if (wdt_ini_flag == '\x01') {
    memw();
    _DAT_ram_60000914 = 0x73;
    wDev_MacTim1Arm(2000000,0x73);
  }
  return;
}



void pp_soft_wdt_init(void)

{
  wDev_MacTim1SetFunc(&LAB_ram_00401ef0);
  wDev_MacTim1Arm(2000000);
  wdt_ini_flag = 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pp_soft_wdt_feed(void)

{
  if (wdt_ini_flag == '\x01') {
    pp_soft_wdt_count = 0;
    memw();
    _DAT_ram_60000914 = 0x73;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void system_soft_wdt_stop(void)

{
  if (wdt_ini_flag == '\x01') {
    memw();
    _DAT_ram_60000914 = 0x73;
    pp_soft_wdt_count = 0;
    wDev_MacTim1SetFunc(0,0);
    wDev_MacTim1Arm(70000000,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void system_soft_wdt_restart(void)

{
  if (wdt_ini_flag == '\x01') {
    pp_soft_wdt_count = 0;
    memw();
    _DAT_ram_60000914 = 0x73;
    wDev_MacTim1SetFunc(&LAB_ram_00401ef0,0x73);
    wDev_MacTim1Arm(2000000,0x73);
  }
  return;
}



void RxNodeNum(void)

{
  return;
}



void TxNodeNum(void)

{
  int iVar1;
  
  iVar1 = wDevCtrl._40_4_;
  if (wDevCtrl[5] == '\0') {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    }
  }
  return;
}



void pp_disable_noise_timer(void)

{
  os_timer_disarm(&DAT_ram_0040e42c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pp_enable_noise_timer(void)

{
  bool bVar1;
  ushort uVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  code *pcVar8;
  char *pcVar9;
  undefined2 *unaff_a4;
  uint uVar10;
  uint uVar11;
  
  puVar3 = &DAT_ram_0040e42c;
  os_timer_disarm(&DAT_ram_0040e42c);
  pm_rf_is_closed(puVar3);
  if ((puVar3 == (undefined *)0x0) && (fpm_rf_is_closed(0), puVar3 == (undefined *)0x0)) {
    pcVar4 = (char *)0x1;
    noise_check_loop(1,1);
  }
  else {
    pcVar4 = &pend_flag_noise_check;
    pend_flag_noise_check = 1;
  }
  RxNodeNum(pcVar4,1);
  pcVar5 = pcVar4;
  TxNodeNum(pcVar4,1);
  bVar1 = true;
  if ((pcVar5 < (char *)0x2) || (bVar1 = false, pcVar4 < (char *)0x2)) {
    unaff_a4 = &NoiseTimerInterval;
    uVar10 = DAT_ram_0040e0de + 1 & 0xff;
    pcVar9 = (char *)(uint)NoiseTimerInterval;
    DAT_ram_0040e0de = (byte)uVar10;
    pcVar6 = (char *)0x3e8;
    __divsi3(1000,pcVar9,&NoiseTimerInterval);
    if ((int)pcVar6 <= (int)uVar10) {
      pcVar6 = (char *)0x0;
      DAT_ram_0040e0de = 0;
      if (pcVar4 < (char *)0x3) {
        pcVar6 = "LmacRxBlk:%d\n";
        printf("LmacRxBlk:%d\n",pcVar4,&NoiseTimerInterval);
        pcVar9 = pcVar4;
      }
      if (bVar1) {
        pcVar6 = "LmacTxBlk:%d\n";
        printf("LmacTxBlk:%d\n",pcVar5,&NoiseTimerInterval);
        pcVar9 = pcVar5;
      }
    }
  }
  else {
    DAT_ram_0040e0de = 0;
    pcVar6 = pcVar5;
    pcVar9 = (char *)0x1;
  }
  read_hw_noisefloor(pcVar6,pcVar9,unaff_a4);
  uVar2 = NoiseTimerInterval;
  DAT_ram_0040d14c = (undefined)((int)(pcVar6 + 2) >> 2);
  uVar11 = DAT_ram_0040e0e0 + 1;
  uVar10 = DAT_ram_0040d148;
  DAT_ram_0040e0e0 = uVar11;
  __udivsi3(DAT_ram_0040d148,NoiseTimerInterval,&NoiseTimerInterval);
  if (uVar10 <= uVar11) {
    iVar7 = 0;
    DAT_ram_0040e0e0 = 0;
    pm_rf_is_closed(0,uVar2,&NoiseTimerInterval);
    if ((iVar7 == 0) && (fpm_rf_is_closed(0,uVar2,&NoiseTimerInterval), iVar7 == 0)) {
      pcVar8 = *(code **)(_g_osi_funcs_p + 4);
      (*pcVar8)(pcVar8,uVar2,&NoiseTimerInterval);
      periodic_cal_top(0,uVar2,pcVar8);
      (**(code **)(_g_osi_funcs_p + 8))(pcVar8,*(code **)(_g_osi_funcs_p + 8),pcVar8);
    }
    else {
      pend_flag_periodic_cal = 1;
    }
  }
  os_timer_arm(&DAT_ram_0040e42c,NoiseTimerInterval,0);
  return;
}



void pp_noise_test(void)

{
  pp_enable_noise_timer();
  return;
}



void reset_noise_timer(void)

{
  undefined2 in_a2;
  
  DAT_ram_0040e0e0 = 0;
  DAT_ram_0040e0de = 0;
  os_timer_disarm(&DAT_ram_0040e42c);
  NoiseTimerInterval = in_a2;
  os_timer_arm(&DAT_ram_0040e42c,in_a2,0);
  return;
}



void pp_disable_idle_timer(void)

{
  if (DAT_ram_0040e0dd != '\0') {
    DAT_ram_0040e0dd = '\0';
  }
  ets_timer_disarm(&DAT_ram_0040e448,DAT_ram_0040e0dd);
  return;
}



void pp_enable_idle_timer(void)

{
  DAT_ram_0040e0dd = 1;
  ets_timer_arm(&DAT_ram_0040e448,sleep_start_wait_time,0);
  return;
}



void pp_try_enable_idle_timer(void)

{
  if ((DAT_ram_0040e0dd == '\0') || (idle_timer_reopen_flag != '\0')) {
    idle_timer_reopen_flag = '\0';
    pp_enable_idle_timer(&idle_timer_reopen_flag,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ppProcessRxPktHdr(void)

{
  code *pcVar1;
  undefined4 *in_a2;
  char *pcVar2;
  
  pcVar1 = _promiscuous_cb;
  if (_promiscuous_cb != (code *)0x0) {
    pcVar2 = (char *)in_a2[1];
    *pcVar2 = *pcVar2 + -0x60;
    (*pcVar1)(pcVar2,*in_a2,pcVar1);
  }
  (**(code **)(_g_osi_funcs_p + 0xa4))(in_a2[1],*(code **)(_g_osi_funcs_p + 0xa4),pcVar1);
  (**(code **)(_g_osi_funcs_p + 0xa4))();
  return;
}



void ppRegisterTxCallback(void)

{
  undefined4 in_a2;
  uint unaff_a3;
  uint uVar1;
  
  uVar1 = 1 << 0x20 - (' ' - ((byte)(unaff_a3 & 0xff) & 0x1f));
  if ((uVar1 & DAT_ram_0040e3e4) == 0) {
    DAT_ram_0040e3e4 = uVar1 | DAT_ram_0040e3e4;
    *(undefined4 *)(&DAT_ram_0040e3e8 + (unaff_a3 & 0xff) * 4) = in_a2;
  }
  return;
}



void ppUnregisterTxCallback(void)

{
  uint in_a2;
  uint uVar1;
  
  uVar1 = 1 << 0x20 - (' ' - ((byte)(in_a2 & 0xff) & 0x1f));
  if ((uVar1 & DAT_ram_0040e3e4) != 0) {
    DAT_ram_0040e3e4 = (uVar1 ^ 0xffffffff) & DAT_ram_0040e3e4;
    (&DAT_ram_0040e2b8)[(in_a2 & 0xff) + 0x4c] = 0;
  }
  return;
}



void ppRecycleRxPkt(void)

{
  int *in_a2;
  int iVar1;
  int iVar2;
  short sVar3;
  
  iVar1 = *in_a2;
  *(int *)(iVar1 + 4) = in_a2[3];
  if ((*(uint *)in_a2[8] >> 4 & 1) == 0) {
    sVar3 = *(short *)(in_a2 + 2);
    iVar2 = iVar1;
    iVar1 = in_a2[1];
  }
  else {
    lldesc_num2link(iVar1,*(short *)(in_a2 + 2) + -1);
    *(undefined4 *)(iVar1 + 8) = 0;
    iVar2 = *in_a2;
    sVar3 = *(short *)(in_a2 + 2) + -1;
  }
  wDev_AppendRxBlocks(iVar2,iVar1,sVar3);
  esf_buf_recycle();
  return;
}



void freq_change_sta_scan_force_enable(void)

{
  return;
}



void freq_changle_sta_scan_do_cb(void)

{
  uint in_a2;
  uint uVar1;
  int **ppiVar2;
  
  ppiVar2 = freq_change_sta_scan._16_4_;
  if (in_a2 == 0) {
    uVar1 = in_a2;
    if ((freq_change_sta_scan._0_2_ == 0) &&
       (uVar1 = (uint)freq_change_sta_scan[9], freq_change_sta_scan[9] != 0)) {
      return;
    }
    in_a2 = uVar1;
    if (freq_change_sta_scan._16_4_ != (int **)0x404720) goto LAB_ram_00408302;
  }
  else {
    if (freq_change_sta_scan._16_4_ != (int **)0x404720) goto LAB_ram_00408302;
    uVar1 = 0;
  }
  scan_hidden_ssid(uVar1,in_a2,0x404720);
  ppiVar2 = (int **)*freq_change_sta_scan._16_4_;
LAB_ram_00408302:
  (*freq_change_sta_scan._12_4_)(ppiVar2,in_a2,freq_change_sta_scan._12_4_);
  return;
}



void freq_change_check_scan_start(void)

{
  undefined4 in_a2;
  undefined4 unaff_a3;
  
  freq_change_sta_scan._0_2_ = 0;
  freq_change_sta_scan._2_2_ = 0;
  freq_change_sta_scan._4_2_ = 0;
  freq_change_sta_scan[8] = 1;
  freq_change_sta_scan._12_4_ = in_a2;
  freq_change_sta_scan._16_4_ = unaff_a3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void freq_change_check_scan_done(void)

{
  short sVar1;
  int in_a2;
  int iVar2;
  int iVar3;
  code cVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = in_a2;
  chm_get_current_channel();
  sVar1 = freq_change_sta_scan._0_2_;
  freq_change_sta_scan[8] = 0;
  if ((in_a2 == 0) && (DAT_ram_0000f0f7 != '\x06')) {
    if (*_g_wifi_nvs == '\x03') {
      if (pm_wait4wakeup == (code)0x0) {
LAB_ram_00408397:
        if (freq_change_sta_scan._0_2_ == 0) {
          iVar5 = freq_change_sta_scan._6_2_ + 1;
          iVar3 = iVar5 >> 0x10;
          freq_change_sta_scan._6_2_ = (ushort)((uint)iVar5 >> 0x10);
          cVar4 = SUB41((uint)iVar5 >> 0x10,0);
          TestStaFreqCalValOK = (code)0x0;
          if (iVar3 == 1) {
            test_freq_val_force_flag = cVar4;
            chip_v6_set_chan_offset(*(undefined *)(iVar2 + 6),0,1,iVar2);
            _TestStaFreqCalValDev = sVar1;
            freq_change_sta_scan[9] = cVar4;
          }
          else {
            if (iVar3 != 2) {
              freq_change_sta_scan._6_2_ = freq_change_sta_scan._0_2_;
              freq_change_sta_scan[9] = TestStaFreqCalValOK;
              chip_v6_set_chan_offset
                        (*(undefined *)(iVar2 + 6),(int)_TestStaFreqCalValInput,iVar3,iVar2);
              _TestStaFreqCalValDev = _TestStaFreqCalValInput;
              TestStaFreqCalValOK = (code)0x1;
              return;
            }
            test_freq_val_force_flag = cVar4;
            chip_v6_set_chan_offset(*(undefined *)(iVar2 + 6),0xffffff38,2,iVar2);
            _TestStaFreqCalValDev = -200;
            freq_change_sta_scan[9] = (code)0x1;
          }
          TestStaFreqCalValOK = freq_change_sta_scan[9];
          scan_start(0x10f,3,freq_change_sta_scan._12_4_,freq_change_sta_scan._16_4_);
          return;
        }
        freq_change_sta_scan[9] = (code)0x0;
        freq_change_sta_scan._6_2_ = 0;
        if (test_freq_val_force_flag == (code)0x0) {
          iVar5 = freq_change_sta_scan._2_2_ * 3;
          if (iVar5 < 0) {
            iVar5 = iVar5 + 3;
          }
          iVar5 = iVar5 >> 2;
          iVar3 = (int)TestStaFreqCalValFilter;
          iVar6 = iVar3 + 3;
          if (iVar3 < 0) {
            iVar3 = iVar6;
          }
          iVar3 = iVar5 + (iVar3 >> 2);
          TestStaFreqCalValFilter = (short)((uint)iVar3 >> 0x10);
          iVar3 = (iVar3 >> 0x10) - (int)_TestStaFreqCalValDev;
          if (iVar3 < 0x29) {
            if (-0x29 < iVar3) {
              freq_change_sta_scan._6_2_ = 0;
              freq_change_sta_scan[8] = 0;
              freq_change_sta_scan[9] = (code)0x0;
              return;
            }
            _TestStaFreqCalValInput = _TestStaFreqCalValInput + -0x28;
          }
          else {
            _TestStaFreqCalValInput = _TestStaFreqCalValInput + 0x28;
          }
        }
        else {
          test_freq_val_force_flag = (code)0x0;
          iVar5 = freq_change_sta_scan._2_2_ * 3;
          if (iVar5 < 0) {
            iVar5 = iVar5 + 3;
          }
          iVar3 = (int)TestStaFreqCalValFilter;
          iVar6 = iVar3 + 3;
          if (iVar3 < 0) {
            iVar3 = iVar6;
          }
          iVar5 = (iVar5 >> 2) + (iVar3 >> 2);
          iVar3 = iVar5 >> 0x10;
          TestStaFreqCalValFilter = (short)((uint)iVar5 >> 0x10);
          iVar5 = 0x50;
          if ((iVar3 - _TestStaFreqCalValDev) + 0x28U < 0x51) {
            test_freq_val_force_flag = (code)0x0;
            freq_change_sta_scan._6_2_ = 0;
            freq_change_sta_scan[8] = 0;
            freq_change_sta_scan[9] = (code)0x0;
            return;
          }
          __divsi3(iVar3,0x28,0x50,iVar2,iVar6);
          _TestStaFreqCalValInput = 0;
        }
        if (_TestStaFreqCalValInput < -0x140) {
          _TestStaFreqCalValInput = -0x140;
        }
        if (0 < _TestStaFreqCalValInput) {
          _TestStaFreqCalValInput = 0;
        }
        TestStaFreqCalValOK = (code)0x0;
        printf("sta scan trace %d\n",(int)_TestStaFreqCalValInput,iVar5,iVar2,iVar6);
        chip_v6_set_chan_offset
                  (*(undefined *)(iVar2 + 6),(int)_TestStaFreqCalValInput,iVar5,iVar2,iVar6);
        memw();
        memw();
        _TestStaFreqCalValDev = _TestStaFreqCalValInput;
        TestStaFreqCalValOK = (code)0x1;
        _DAT_ram_60001078 = (int)_TestStaFreqCalValInput | _DAT_ram_60001078 & 0xffff;
        return;
      }
    }
    else {
      if (*_g_wifi_nvs == '\x01') goto LAB_ram_00408397;
    }
  }
  freq_change_sta_scan[9] = (code)0x0;
  freq_change_sta_scan._6_2_ = 0;
  TestStaFreqCalValOK = (code)0x0;
  chip_v6_set_chan_offset(*(undefined *)(iVar2 + 6),(int)_TestStaFreqCalValInput);
  _TestStaFreqCalValDev = _TestStaFreqCalValInput;
  TestStaFreqCalValOK = (code)0x1;
  return;
}



void freq_change_check_scan_work(void)

{
  int in_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (freq_change_sta_scan[8] != '\0') {
    uVar4 = (uint)freq_change_sta_scan._4_2_;
    uVar3 = (uint)freq_change_sta_scan._0_2_;
    iVar1 = (in_a2 >> 0x10) + uVar4;
    iVar2 = iVar1 >> 0x10;
    freq_change_sta_scan._0_2_ = (ushort)(uVar3 + 1 >> 0x10);
    freq_change_sta_scan._4_2_ = (ushort)((uint)iVar1 >> 0x10);
    __divsi3(iVar2,(int)(uVar3 + 1) >> 0x10,uVar4);
    freq_change_sta_scan._2_2_ = (undefined2)iVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_004085f4(void)

{
  byte bVar1;
  byte bVar2;
  int in_a2;
  int iVar3;
  int iVar4;
  uint *unaff_a3;
  uint uVar5;
  int unaff_a4;
  uint uVar6;
  uint unaff_a6;
  uint unaff_a7;
  undefined2 *puVar7;
  
  bVar2 = freq_change_sta_scan[8];
  if (unaff_a7 == 0x50) {
    if (ap_freq_force_to_scan != (code)0x0) {
LAB_ram_00408628:
      uVar5 = *_g_wifi_nvs & 0xfffffffd;
      if (uVar5 == 1) {
        unaff_a6 = 0;
        if (DAT_ram_0000f0f7 == '\x01') {
          unaff_a6 = uVar5;
        }
        if (unaff_a6 == 0) {
          if (DAT_ram_0000f0f7 == '\x06') {
            unaff_a6 = uVar5;
          }
          if ((unaff_a6 == 0) && (*_g_wifi_nvs != 1)) goto LAB_ram_0040865a;
        }
      }
      else {
LAB_ram_0040865a:
        if (((*unaff_a3 >> 0x1d & 1) != 0) || (unaff_a7 == 0x50)) {
          FUN_ram_00407d98();
          if (unaff_a4 != 1) {
            return;
          }
          if (in_a2 == 0x7fff) {
            return;
          }
          PktsNumInOneChk = PktsNumInOneChk + 1;
          iVar4 = (int)(in_a2 + (uint)AllFreqOffsetInOneChk) >> 0x10;
          AllFreqOffsetInOneChk = (ushort)(in_a2 + (uint)AllFreqOffsetInOneChk >> 0x10);
          __divsi3(iVar4,PktsNumInOneChk,&AllFreqOffsetInOneChk,1,unaff_a6);
          AvgFreqOffsetInOneChk = (short)iVar4;
          return;
        }
      }
    }
  }
  else {
    if ((unaff_a7 != 0x80) || (freq_change_sta_scan[8] == 0)) goto LAB_ram_00408628;
  }
  if (in_a2 == 0x7fff) {
    return;
  }
  if (freq_change_sta_scan[8] != 0) {
    FUN_ram_00407d98();
    if (unaff_a4 != 1) {
      return;
    }
    freq_change_check_scan_work();
    return;
  }
  FUN_ram_00407d98();
  if (unaff_a4 != 1) {
    return;
  }
  chm_get_current_channel(1);
  uVar5 = (uint)pktnum_sta_freqcal;
  iVar3 = (int)(in_a2 + (uint)all_freqoffset_sta_freqcal) >> 0x10;
  pktnum_sta_freqcal = (ushort)(uVar5 + 1 >> 0x10);
  all_freqoffset_sta_freqcal = (ushort)(in_a2 + (uint)all_freqoffset_sta_freqcal >> 0x10);
  puVar7 = &all_freqoffset_sta_freqcal;
  __divsi3(iVar3,(int)(uVar5 + 1) >> 0x10,&all_freqoffset_sta_freqcal,2,unaff_a6);
  bVar1 = test_freq_val_first;
  iVar4 = iVar3 >> 0x10;
  uVar5 = (uint)CanDoFreqCal;
  avg_freqoffset_sta_freqcal = (undefined2)((uint)iVar3 >> 0x10);
  if (uVar5 == 0) {
    return;
  }
  if (test_freq_val_first == 0) {
    unaff_a7 = (uint)test_freq_val_force_flag;
    if (unaff_a7 == 0) {
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
      }
      uVar6 = SEXT24(TestStaFreqCalValFilter);
      uVar5 = uVar6 + 3;
      if ((int)uVar6 < 0) {
        uVar6 = uVar5;
      }
      iVar4 = (iVar4 >> 2) + ((int)uVar6 >> 2);
      TestStaFreqCalValFilter = (short)((uint)iVar4 >> 0x10);
      iVar4 = (iVar4 >> 0x10) - (int)_TestStaFreqCalValDev;
      if (iVar4 < 0x29) {
        if (-0x29 < iVar4) goto LAB_ram_00408838;
        _TestStaFreqCalValInput = _TestStaFreqCalValInput + -0x28;
      }
      else {
        _TestStaFreqCalValInput = _TestStaFreqCalValInput + 0x28;
      }
    }
    else {
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
      }
      uVar6 = SEXT24(TestStaFreqCalValFilter);
      test_freq_val_force_flag = test_freq_val_first;
      uVar5 = uVar6 + 3;
      if ((int)uVar6 < 0) {
        uVar6 = uVar5;
      }
      iVar4 = (iVar4 >> 2) + ((int)uVar6 >> 2);
      iVar3 = iVar4 >> 0x10;
      TestStaFreqCalValFilter = (short)((uint)iVar4 >> 0x10);
      if ((iVar3 - _TestStaFreqCalValDev) + 0x28U < 0x51) goto LAB_ram_00408838;
      __divsi3(iVar3,0x28,0x50,uVar5,0,unaff_a7,puVar7);
      _TestStaFreqCalValInput = 0;
    }
    if (_TestStaFreqCalValInput < -0x140) {
      _TestStaFreqCalValInput = -0x140;
    }
    if (0 < _TestStaFreqCalValInput) {
      _TestStaFreqCalValInput = 0;
    }
    TestStaFreqCalValOK = (code)0x0;
    printf("sta trace %d\n",(int)_TestStaFreqCalValInput,TestStaFreqCalValInput,uVar5,0,unaff_a7);
    chip_v6_set_chan_offset
              (*(undefined *)(unaff_a4 + 6),(int)_TestStaFreqCalValInput,TestStaFreqCalValInput,
               uVar5,0,unaff_a7);
    _TestStaFreqCalValDev = _TestStaFreqCalValInput;
    TestStaFreqCalValOK = (code)0x1;
    memw();
    _DAT_ram_60001078 = (int)_TestStaFreqCalValInput | _DAT_ram_60001078 & 0xffff;
    memw();
  }
  else {
    test_freq_val_first = bVar2;
    TestStaFreqCalValFilter = avg_freqoffset_sta_freqcal;
  }
LAB_ram_00408838:
  CanDoFreqCal = 0;
  all_freqoffset_sta_freqcal = 0;
  avg_freqoffset_sta_freqcal = 0;
  pktnum_sta_freqcal = 0;
  os_timer_disarm(DefFreqCalTimer,&all_freqoffset_sta_freqcal,&avg_freqoffset_sta_freqcal,uVar5,
                  bVar1,unaff_a7);
  os_timer_setfn(DefFreqCalTimer,DefFreqCalTimerCB,0,uVar5,bVar1,unaff_a7);
  os_timer_arm(DefFreqCalTimer,1000,0,uVar5,bVar1,unaff_a7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ppGetTxQFirstAvail_Locked(void)

{
  byte in_a2;
  
  if ((in_a2 < 8) && (DAT_ram_0040e2d3 == '\0')) {
    if (NMIIrqIsOn == '\0') {
      vPortEnterCritical(&NMIIrqIsOn,&DAT_ram_0040e2ac);
      memw();
      memw();
      _DAT_ram_3ff20c18 = 0x8000000;
    }
    if (NMIIrqIsOn == '\0') {
      memw();
      _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
      vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void pp_attach(void)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  code *pcVar6;
  
  puVar4 = &DAT_ram_0040e2c4;
  do {
    *puVar4 = 0;
    puVar4[1] = puVar4;
    *(undefined *)((int)puVar4 + 0xf) = 0;
    puVar4 = puVar4 + 8;
  } while (puVar4 != &DAT_ram_0040e3c4);
  DAT_ram_0040e2d0 = 7;
  DAT_ram_0040e2f0 = 7;
  DAT_ram_0040e2c0 = 2;
  DAT_ram_0040e2c1 = 3;
  DAT_ram_0040e2c2 = 5;
  DAT_ram_0040e2c3 = 6;
  DAT_ram_0040e3d0 = &DAT_ram_0040e3cc;
  DAT_ram_0040e3c8 = &DAT_ram_0040e3c4;
  DAT_ram_0040e3d8 = &DAT_ram_0040e3d4;
  DAT_ram_0040e2d3 = 1;
  DAT_ram_0040e2f3 = 1;
  DAT_ram_0040e2ac = 0;
  DAT_ram_0040e3e0 = &DAT_ram_0040e3dc;
  DAT_ram_0040e2b0 = 0;
  DAT_ram_0040e2b4 = 0;
  DAT_ram_0040e2b8 = 0;
  DAT_ram_0040e2bc = 0;
  DAT_ram_0040e3c4 = 0;
  DAT_ram_0040e3cc = 0;
  DAT_ram_0040e3d4 = 0;
  DAT_ram_0040e3dc = 0;
  memw();
  _DAT_ram_600011f8 = 0xa07;
  esf_buf_setup(&DAT_ram_600011f8,0xa07,1,0,&DAT_ram_0040e3c4);
  pcVar5 = *(code **)(_g_osi_funcs_p + 100);
  uVar1 = 0x2d;
  (*pcVar5)(0x2d,4,pcVar5,0,&DAT_ram_0040e3c4);
  pcVar2 = *(code **)(_g_osi_funcs_p + 0x24);
  pcVar6 = *(code **)(_g_osi_funcs_p + 0xc);
  DAT_ram_0040e414 = uVar1;
  (*pcVar2)(pcVar2,_g_osi_funcs_p,pcVar5,0,&DAT_ram_0040e3c4);
  pcVar2 = pcVar2 + -2;
  (*pcVar6)(ppTask,&DAT_ram_0040b930,0x800,0,pcVar2);
  (**(code **)(_g_osi_funcs_p + 0x24))
            (*(code **)(_g_osi_funcs_p + 0x24),&DAT_ram_0040b930,0x800,0,pcVar2);
  ets_timer_setfn(&DAT_ram_0040e448,pp_tx_idle_timeout,0,0,pcVar2);
  if ((byte)esp_upload_event == 0) {
    DAT_ram_0040d148 = 600000;
  }
  else {
    DAT_ram_0040d148 = (uint)(byte)esp_upload_event * 10000;
  }
  puVar3 = &DAT_ram_0040e42c;
  os_timer_setfn(&DAT_ram_0040e42c,pp_noise_test,0,0,pcVar2);
  pp_enable_noise_timer(puVar3,pp_noise_test,0,0,pcVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_00408a40(void)

{
  int in_a2;
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  uint unaff_a3;
  int *piVar5;
  undefined1 *unaff_a4;
  int iVar6;
  uint uVar7;
  uint unaff_a5;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar8 = (uint)DAT_ram_0040e0d1;
  uVar10 = 0xffffffff;
  do {
    fpm_allow_tx(in_a2,unaff_a3,unaff_a4,unaff_a5);
    if (in_a2 == 0) {
      esp_wifi_fpm_do_wakeup(0,unaff_a3,unaff_a4,unaff_a5);
    }
    uVar7 = uVar8;
    pm_allow_tx(uVar8,unaff_a3,unaff_a4,unaff_a5);
    if (uVar7 != 0) {
      if (NMIIrqIsOn == 0) {
        vPortEnterCritical(uVar7,unaff_a3,unaff_a4,unaff_a5);
        unaff_a3 = 0x8000000;
        memw();
        memw();
        _DAT_ram_3ff20c18 = 0x8000000;
      }
      uVar7 = DAT_ram_0040e2ac;
      if (NMIIrqIsOn == 0) {
        memw();
        _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
        vPortExitCritical(&DAT_ram_3ff20c18,unaff_a3,WDEV_INTEREST_EVENT,unaff_a5);
      }
      if ((uVar7 | 3) != 0xff) {
        iVar1 = uVar8 + 0x22;
        iVar9 = (&DAT_ram_0040e2b4)[iVar1 * 2];
        if (iVar9 != 0) {
          (&DAT_ram_0040e2b4)[iVar1 * 2] = 0;
          (&DAT_ram_0040e2b8)[iVar1 * 2] = &DAT_ram_0040e2b4 + iVar1 * 2;
          do {
            iVar6 = *(int *)(iVar9 + 0x1c);
            *(undefined4 *)(iVar9 + 0x1c) = 0;
            piVar5 = (int *)(iVar9 + 0x1c);
            if (*(int *)(iVar9 + 0x18) == 0) {
LAB_ram_00408b50:
              unaff_a5 = **(uint **)(iVar9 + 0x20);
              puVar4 = (undefined *)(unaff_a5 & 0xffffffc3);
              **(uint **)(iVar9 + 0x20) = (uint)puVar4;
              uVar10 = (uint)NMIIrqIsOn;
              if (uVar10 == 0) {
                vPortEnterCritical(puVar4,0,0,unaff_a5);
                puVar4 = &DAT_ram_3ff20c18;
                memw();
                uVar10 = 0x8000000;
                memw();
                _DAT_ram_3ff20c18 = 0x8000000;
              }
              vPortEnterCritical(puVar4,uVar10,0,unaff_a5);
              *(undefined4 *)(iVar9 + 0x1c) = 0;
              *DAT_ram_0040e2c8 = iVar9;
              DAT_ram_0040e2c8 = piVar5;
              vPortExitCritical(&DAT_ram_0040e2ac,&DAT_ram_0040e2ac,piVar5,unaff_a5);
              if (NMIIrqIsOn == 0) {
                memw();
                _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
                vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,piVar5,unaff_a5);
              }
              pp_post(*(uint *)(*(int *)(iVar9 + 0x20) + 4) >> 0x14 & 7,0,piVar5,unaff_a5);
            }
            else {
              if (NMIIrqIsOn == 0) {
                vPortEnterCritical(*(int *)(iVar9 + 0x18),0,iVar6,unaff_a5);
                memw();
                memw();
                _DAT_ram_3ff20c18 = 0x8000000;
              }
              uVar10 = (*(uint **)(iVar9 + 0x20))[1];
              uVar2 = **(uint **)(iVar9 + 0x20) >> 1 & 1;
              uVar7 = uVar10 & 0xf;
              unaff_a5 = uVar10 >> 0x14 & 7;
              FUN_ram_004018e0(uVar2,*(undefined *)(*(int *)(iVar9 + 0x18) + 0x76),uVar7,unaff_a5);
              uVar10 = WDEV_INTEREST_EVENT;
              puVar4 = (undefined *)(uint)NMIIrqIsOn;
              if (puVar4 == (undefined *)0x0) {
                puVar4 = &DAT_ram_3ff20c18;
                memw();
                _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
                vPortExitCritical(uVar2,&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,unaff_a5);
                uVar7 = uVar10;
              }
              if (uVar2 != 8) goto LAB_ram_00408b50;
              vPortEnterCritical(8,puVar4,uVar7,unaff_a5);
              *(undefined4 *)(iVar9 + 0x1c) = 0;
              piVar3 = (int *)(&DAT_ram_0040e2b8)[iVar1 * 2];
              *piVar3 = iVar9;
              (&DAT_ram_0040e2b8)[iVar1 * 2] = piVar5;
              vPortExitCritical(piVar3,puVar4,piVar5,unaff_a5);
            }
            iVar9 = iVar6;
            uVar10 = uVar8;
          } while (iVar6 != 0);
        }
      }
    }
    uVar8 = uVar8 + 1 & 0xff;
    unaff_a4 = &DAT_ram_0040e0d1;
    in_a2 = 0;
    if (uVar8 == 2) {
      uVar8 = 0;
    }
    unaff_a3 = (uint)DAT_ram_0040e0d1;
    if (unaff_a3 == uVar8) {
      if ((uVar10 != 0xffffffff) &&
         (uVar10 = uVar10 + 1 & 0xff, DAT_ram_0040e0d1 = (byte)uVar10, uVar10 == 2)) {
        DAT_ram_0040e0d1 = 0;
      }
      return;
    }
  } while( true );
}



void ppProcessWaitQ(void)

{
  FUN_ram_00408a40();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ppCheckTxIdle(void)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  char in_a2;
  int iVar8;
  undefined4 unaff_a3;
  uint uVar9;
  uint uVar10;
  short sVar11;
  uint unaff_a4;
  undefined4 *unaff_a5;
  uint unaff_a6;
  int iVar12;
  
  if ((in_a2 != '\0') && (NMIIrqIsOn == '\0')) {
    vPortEnterCritical(&NMIIrqIsOn);
    unaff_a3 = 0x8000000;
    memw();
    memw();
    _DAT_ram_3ff20c18 = 0x8000000;
  }
  iVar12 = 0;
  do {
    iVar8 = iVar12;
    lmacIsIdle(iVar12,unaff_a3);
    if (iVar8 == 0) goto LAB_ram_00408cf0;
    iVar12 = iVar12 + 1;
  } while (iVar12 != 4);
  do {
    uVar7 = DAT_ram_0040e2b8;
    uVar10 = -DAT_ram_0040e2ac & DAT_ram_0040e2ac;
    sVar11 = (short)(uVar10 >> 0x10);
    bVar1 = sVar11 == 0;
    sVar11 = (ushort)bVar1 * (short)uVar10 + (ushort)!bVar1 * sVar11;
    cVar2 = (char)((ushort)sVar11 >> 8);
    bVar3 = cVar2 == '\0';
    bVar4 = bVar3 * (char)sVar11 + !bVar3 * cVar2;
    bVar5 = bVar4 >> 4 == 0;
    bVar4 = bVar5 * (bVar4 & 0xf) + !bVar5 * (bVar4 >> 4);
    bVar6 = (bVar4 >> 2 & 3) == 0;
    uVar10 = 0x1f - (byte)((uVar10 == 0) * ' ' +
                          (uVar10 != 0) *
                          (bVar1 << 4 | bVar3 << 3 | bVar5 << 2 | bVar6 << 1 |
                          bVar6 * ((bVar4 >> 1 & 1) == 0) + !bVar6 * ((bVar4 >> 3 & 1) == 0)));
    if ((((int)uVar10 < 0) ||
        (unaff_a5 = &DAT_ram_0040e2ac, unaff_a4 = DAT_ram_0040e2c4, DAT_ram_0040e2c4 != 0)) ||
       (unaff_a4 = DAT_ram_0040e2b8, DAT_ram_0040e2b8 != 0)) {
LAB_ram_00408cf0:
      if ((in_a2 != '\0') && (NMIIrqIsOn == '\0')) {
        memw();
        _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
        vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,unaff_a4,unaff_a5,unaff_a6);
      }
      return;
    }
    unaff_a5 = (undefined4 *)(uint)DAT_ram_0040e2d0;
    unaff_a6 = DAT_ram_0040e2b8;
    if (unaff_a5 != (undefined4 *)0x3) {
      unaff_a6 = 1;
    }
    if ((unaff_a6 & 0xff) == 0) {
LAB_ram_00408cba:
      uVar9 = 2;
    }
    else {
      uVar9 = DAT_ram_0040e2b8;
      if (unaff_a5 != (undefined4 *)0x0) {
        uVar9 = 1;
      }
      if ((uVar9 & 0xff) == 0) goto LAB_ram_00408cba;
      uVar9 = 3;
      if (((undefined4 *)0x2 < unaff_a5) && (uVar9 = 1, (undefined4 *)0x5 < unaff_a5)) {
        uVar9 = DAT_ram_0040e2b8;
      }
    }
    FUN_ram_00401fa0(uVar10 & 0xff,uVar9,0,unaff_a5,unaff_a6);
    unaff_a4 = uVar7;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x00408f78)
// WARNING: Removing unreachable block (ram,0x004090a4)
// WARNING: Removing unreachable block (ram,0x00409152)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ppTask(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  short sVar13;
  int iVar9;
  int **ppiVar10;
  undefined *puVar11;
  code *pcVar12;
  uint uVar14;
  int **ppiVar15;
  int **ppiVar16;
  int **ppiVar17;
  int **ppiVar18;
  int **ppiVar19;
  int **ppiVar20;
  int **unaff_a6;
  int **unaff_a7;
  int **ppiVar21;
  int **ppiVar22;
  int **ppiVar23;
  char *pcVar24;
  int *piVar25;
  byte *pbVar26;
  int *piVar27;
  undefined auStack112 [32];
  uint *apuStack80 [4];
  int **ppiStack64;
  int **ppiStack60;
  int **ppiStack56;
  int **ppiStack52;
  int **ppiStack48;
  int **ppiStack44;
  int **ppiStack40;
  
LAB_ram_00408d74:
  do {
    ppiVar18 = *(int ***)(_g_osi_funcs_p + 0x74);
    ppiVar17 = (int **)0xffffffff;
    iVar9 = DAT_ram_0040e414;
    (*(code *)ppiVar18)(DAT_ram_0040e414,apuStack80,0xffffffff,ppiVar18,unaff_a6,unaff_a7);
  } while (iVar9 == 0);
  if (NMIIrqIsOn == 0) {
    vPortEnterCritical(iVar9,apuStack80,0xffffffff,ppiVar18,unaff_a6,unaff_a7);
    memw();
    memw();
    _DAT_ram_3ff20c18 = (int **)0x8000000;
  }
  pcVar24 = &DAT_ram_0040e2a8;
  if (DAT_ram_0040e2a8 == '\x01') {
    uVar14 = (uint)DAT_ram_0040e424;
    DAT_ram_0040e424 = (byte)(uVar14 - 1);
    esp_get_free_heap_size(&DAT_ram_0040e418,uVar14 - 1,0xffffffff,ppiVar18,unaff_a6,unaff_a7);
    memset(auStack112,0,0x20);
    ppiVar17 = (int **)&DAT_ram_00000020;
    system_rtc_mem_write(0,auStack112,0x20,ppiVar18,unaff_a6,unaff_a7);
    if (dbg_stop_sw_wdt == '\0') {
      pp_soft_wdt_count = dbg_stop_sw_wdt;
    }
    if (dbg_stop_hw_wdt == '\0') {
      memw();
      _DAT_ram_60000914 = 0x73;
    }
    DAT_ram_0040e2a8 = '\0';
  }
  if (NMIIrqIsOn == 0) {
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
  }
  uVar14 = *apuStack80[0];
  if (uVar14 == 10) {
    if (NMIIrqIsOn == 0) {
      vPortEnterCritical(10,apuStack80[0],ppiVar17,ppiVar18,unaff_a6,unaff_a7);
      memw();
      memw();
      _DAT_ram_3ff20c18 = (int **)0x8000000;
    }
    ppiVar16 = (int **)((byte)(&DAT_ram_0040e418)[*apuStack80[0]] - 1);
    (&DAT_ram_0040e418)[*apuStack80[0]] = (byte)ppiVar16;
    ppiVar22 = WDEV_INTEREST_EVENT;
    puVar11 = (undefined *)(uint)NMIIrqIsOn;
    if (puVar11 == (undefined *)0x0) {
      puVar11 = &DAT_ram_3ff20c18;
      memw();
      _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
      vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
      ppiVar16 = ppiVar22;
    }
    pm_enable_gpio_wakeup(puVar11,ppiVar16,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
  }
  else {
    ppiVar17 = (int **)0xa;
    if (uVar14 < 0xb) {
      if (uVar14 == 4) {
        if (NMIIrqIsOn == 0) {
          vPortEnterCritical(4,apuStack80[0],10,ppiVar18,unaff_a6,unaff_a7);
          memw();
          memw();
          _DAT_ram_3ff20c18 = (int **)0x8000000;
        }
        ppiVar16 = (int **)((byte)(&DAT_ram_0040e418)[*apuStack80[0]] - 1);
        (&DAT_ram_0040e418)[*apuStack80[0]] = (byte)ppiVar16;
        ppiVar22 = WDEV_INTEREST_EVENT;
        if (NMIIrqIsOn == 0) {
          memw();
          _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
          vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,10,ppiVar18,unaff_a6,unaff_a7);
          ppiVar16 = ppiVar22;
        }
        bVar1 = false;
        ppiVar22 = (int **)0x0;
LAB_ram_0040901c:
        do {
          if (NMIIrqIsOn == 0) {
            vPortEnterCritical(&NMIIrqIsOn,ppiVar16,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
            ppiVar16 = (int **)&DAT_ram_3ff20c18;
            ppiVar17 = (int **)0x8000000;
            memw();
            memw();
            _DAT_ram_3ff20c18 = (int **)0x8000000;
          }
          iVar9 = DAT_ram_0040e3d4;
          if (DAT_ram_0040e3d4 != 0) {
            ppiStack52 = (int **)&DAT_ram_0040e2ac;
            vPortEnterCritical(&DAT_ram_0040e2ac,ppiVar16,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
            ppiVar16 = (int **)ppiStack52[0x4a][7];
            ppiStack52[0x4a] = (int *)ppiVar16;
            if (ppiVar16 == (int **)0x0) {
              ppiVar16 = (int **)&DAT_ram_0040e3d4;
              ppiStack52[0x4b] = &DAT_ram_0040e3d4;
            }
            vPortExitCritical(ppiStack52,ppiVar16,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
            *(undefined4 *)(iVar9 + 0x1c) = 0;
          }
          ppiVar19 = WDEV_INTEREST_EVENT;
          ppiVar18 = (int **)&NMIIrqIsOn;
          puVar11 = (undefined *)(uint)NMIIrqIsOn;
          if (puVar11 == (undefined *)0x0) {
            puVar11 = &DAT_ram_3ff20c18;
            memw();
            _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
            vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,ppiVar17,&NMIIrqIsOn,unaff_a6,
                              unaff_a7);
            ppiVar16 = ppiVar19;
          }
          if (iVar9 == 0) goto code_r0x0040907b;
          unaff_a6 = (int **)0x1;
          ppiVar18 = *(int ***)(*(int *)(iVar9 + 0x20) + 0x10);
          unaff_a7 = (int **)0xffffffff;
          while( true ) {
            uVar14 = -(int)ppiVar18 & (uint)ppiVar18;
            sVar13 = (short)(uVar14 >> 0x10);
            bVar2 = sVar13 == 0;
            sVar13 = (ushort)bVar2 * (short)uVar14 + (ushort)!bVar2 * sVar13;
            cVar8 = (char)((ushort)sVar13 >> 8);
            bVar3 = cVar8 == '\0';
            bVar4 = bVar3 * (char)sVar13 + !bVar3 * cVar8;
            bVar5 = bVar4 >> 4 == 0;
            bVar4 = bVar5 * (bVar4 & 0xf) + !bVar5 * (bVar4 >> 4);
            bVar6 = (bVar4 >> 2 & 3) == 0;
            uVar14 = (uint)(byte)((uVar14 == 0) * ' ' +
                                 (uVar14 != 0) *
                                 (bVar2 << 4 | bVar3 << 3 | bVar5 << 2 | bVar6 << 1 |
                                 bVar6 * ((bVar4 >> 1 & 1) == 0) + !bVar6 * ((bVar4 >> 3 & 1) == 0))
                                 );
            ppiVar16 = (int **)(0x1f - uVar14);
            if ((int)ppiVar16 < 0) break;
            if ((DAT_ram_0040e3e4 >> ((byte)ppiVar16 & 0x1f) & 1) != 0) {
              ppiStack52 = ppiVar16;
              ppiStack48 = unaff_a6;
              ppiStack44 = unaff_a7;
              ppiStack40 = ppiVar18;
              (*(code *)(&DAT_ram_0040e464)[-uVar14])
                        (iVar9,ppiVar18,ppiVar17,ppiVar16,unaff_a6,unaff_a7);
              ppiVar18 = ppiStack40;
              ppiVar16 = ppiStack52;
              unaff_a6 = ppiStack48;
              unaff_a7 = ppiStack44;
            }
            ppiVar18 = (int **)((uint)ppiVar18 &
                               ((uint)unaff_a7 ^
                               (int)unaff_a6 << 0x20 - (' ' - ((byte)ppiVar16 & 0x1f))));
          }
          if ((**(uint **)(iVar9 + 0x20) >> 6 & (uint)&Elf32_Ehdr_ram_00400000) == 0) {
            unaff_a7 = (int **)&DAT_ram_00000005;
            unaff_a6 = (int **)(((*(uint **)(iVar9 + 0x20))[1] >> 4 & 0xf) + (uint)DAT_ram_0040e0dc
                               & 0xff);
            DAT_ram_0040e0dc = (byte)unaff_a6;
            if (&DAT_ram_00000004 < unaff_a6) {
              DAT_ram_0040e0dc = 0;
              tx_pwctrl_background(1,0,ppiVar17,&DAT_ram_0040e0dc,unaff_a6,5);
            }
          }
          ppiVar16 = *(int ***)(iVar9 + 0x20);
          ppiVar19 = (int **)*ppiVar16;
          ppiVar18 = ppiVar19;
          if ((((uint)ppiVar19 >> 9 & 1) != 0) && (((uint)ppiVar19 >> 1 & 1) == 0)) {
            pbVar26 = (byte *)((int)ppiVar16 + 0xf);
            ppiVar16 = (int **)0x1;
            ppiVar18 = (int **)(*pbVar26 - 1);
            if (ppiVar18 == (int **)0x0) {
              bVar1 = true;
            }
          }
          if (((uint)ppiVar19 >> 0x13 & 1) != 0) {
            ppiVar22 = (int **)0x1;
            goto LAB_ram_00408fd4;
          }
          if (((uint)ppiVar19 >> 0x14 & 1) != 0) {
            ppiVar22 = (int **)&DAT_ram_00000004;
            goto LAB_ram_00408fd4;
          }
          if (((uint)ppiVar19 >> 0x1e & 1) != 0) {
            ppiVar22 = (int **)&DAT_ram_00000006;
            goto LAB_ram_00408fd4;
          }
          if (((uint)ppiVar19 >> 0x15 & 1) != 0) {
            ppiVar22 = (int **)&DAT_ram_00000005;
            goto LAB_ram_00408fd4;
          }
          if (((uint)ppiVar19 >> 0x1b & 1) == 0) {
LAB_ram_00408fd4:
            if (((uint)ppiVar19 >> 0x1d & 1) != 0) {
              *(short *)(iVar9 + 0x12) = *(short *)(iVar9 + 0x12) + -4;
              memw();
              memw();
              unaff_a6 = (int **)**(int ***)(iVar9 + 4);
              ppiVar18 = (int **)0x0;
              memw();
              **(int ***)(iVar9 + 4) = (int *)((uint)unaff_a6 & 0xff000fff);
              ppiVar16 = (int **)(uint)(byte)PendFreeBcnEb;
              if ((int **)(uint)(byte)PendFreeBcnEb == (int **)0x0) goto LAB_ram_0040901c;
              PendFreeBcnEb = (code)0x0;
            }
            esf_buf_recycle(iVar9,ppiVar22,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
            ppiVar16 = ppiVar22;
          }
        } while( true );
      }
      if (uVar14 < 4) {
        if (NMIIrqIsOn == 0) {
          vPortEnterCritical(uVar14,apuStack80[0],10,ppiVar18,unaff_a6,unaff_a7);
          memw();
          memw();
          _DAT_ram_3ff20c18 = (int **)0x8000000;
        }
        ppiVar16 = (int **)((byte)(&DAT_ram_0040e418)[*apuStack80[0]] - 1);
        (&DAT_ram_0040e418)[*apuStack80[0]] = (byte)ppiVar16;
        ppiVar22 = WDEV_INTEREST_EVENT;
        if (NMIIrqIsOn == 0) {
          memw();
          _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
          vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,10,ppiVar18,unaff_a6,unaff_a7);
          ppiVar16 = ppiVar22;
        }
        ppProcessTxQ(*(undefined *)apuStack80[0],ppiVar16,10,ppiVar18,unaff_a6,unaff_a7);
      }
      else {
        if (uVar14 == 8) {
          if (NMIIrqIsOn == 0) {
            vPortEnterCritical(8,apuStack80[0],10,ppiVar18,unaff_a6,unaff_a7);
            memw();
            memw();
            _DAT_ram_3ff20c18 = (int **)0x8000000;
          }
          ppiVar16 = (int **)((byte)(&DAT_ram_0040e418)[*apuStack80[0]] - 1);
          (&DAT_ram_0040e418)[*apuStack80[0]] = (byte)ppiVar16;
          ppiVar22 = WDEV_INTEREST_EVENT;
          puVar11 = (undefined *)(uint)NMIIrqIsOn;
          if (puVar11 == (undefined *)0x0) {
            puVar11 = &DAT_ram_3ff20c18;
            memw();
            _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
            vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,10,ppiVar18,unaff_a6,unaff_a7);
            ppiVar16 = ppiVar22;
          }
          FUN_ram_00408a40(puVar11,ppiVar16,10,ppiVar18,unaff_a6,unaff_a7);
        }
        else {
          ppiVar17 = (int **)&DAT_ram_00000008;
          if (uVar14 < 9) {
            if (uVar14 == 5) {
              if (NMIIrqIsOn == 0) {
                vPortEnterCritical(5,apuStack80[0],8,ppiVar18,unaff_a6,unaff_a7);
                memw();
                memw();
                _DAT_ram_3ff20c18 = (int **)0x8000000;
              }
              ppiVar19 = (int **)((byte)(&DAT_ram_0040e418)[*apuStack80[0]] - 1);
              (&DAT_ram_0040e418)[*apuStack80[0]] = (byte)ppiVar19;
              ppiVar22 = WDEV_INTEREST_EVENT;
              ppiVar16 = (int **)(uint)NMIIrqIsOn;
              if (ppiVar16 == (int **)0x0) {
                ppiVar16 = (int **)&DAT_ram_3ff20c18;
                memw();
                _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
                vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,8,ppiVar18,unaff_a6,unaff_a7
                                 );
                ppiVar19 = ppiVar22;
              }
LAB_ram_004098c8:
              if (NMIIrqIsOn == 0) {
                vPortEnterCritical(ppiVar16,ppiVar19,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
                ppiVar16 = (int **)&DAT_ram_3ff20c18;
                ppiVar19 = (int **)0x8000000;
                memw();
                memw();
                _DAT_ram_3ff20c18 = (int **)0x8000000;
              }
              ppiVar22 = DAT_ram_0040e3dc;
              if (DAT_ram_0040e3dc != (int **)0x0) {
                vPortEnterCritical(ppiVar16,ppiVar19,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
                DAT_ram_0040e3dc = (int **)((int *)DAT_ram_0040e3dc)[7];
                ppiVar16 = DAT_ram_0040e3dc;
                if (DAT_ram_0040e3dc == (int **)0x0) {
                  ppiVar16 = (int **)&DAT_ram_0040e3dc;
                  DAT_ram_0040e3e0 = &DAT_ram_0040e3dc;
                }
                vPortExitCritical(ppiVar16,ppiVar19,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
                ppiVar22[7] = (int *)0x0;
              }
              if (NMIIrqIsOn == 0) {
                memw();
                _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
                vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,ppiVar17,ppiVar18,unaff_a6,
                                  unaff_a7);
              }
              if (ppiVar22 != (int **)0x0) {
                ppiVar23 = (int **)ppiVar22[3];
                ppiVar16 = ppiVar23 + 3;
                *(int ***)((int)*ppiVar22 + 4) = ppiVar16;
                ppiStack64 = (int **)(*(byte *)(ppiVar23 + 3) & 0xfffffff0);
                ppiStack56 = (int **)(*(byte *)(ppiVar23 + 3) & 0xc);
                iVar9 = (int)DAT_ram_0040d14c;
                ppiStack60 = ppiVar16;
                if (0 < iVar9) {
                  read_hw_noisefloor(iVar9,ppiStack56,ppiVar17,ppiVar18,ppiVar16,unaff_a7);
                  DAT_ram_0040d14c = (char)(iVar9 + 2 >> 2);
                }
                ppiVar10 = ppiStack56;
                piVar27 = *ppiVar23;
                piVar25 = (int *)0x2;
                if (((uint)piVar27 & 0x50000000) == 0) {
                  if (((uint)piVar27 & 0xa0000000) != 0) {
                    piVar25 = (int *)0x1;
                  }
                }
                else {
                  if (((uint)piVar27 & 0xa0000000) == 0) {
                    piVar25 = (int *)0x0;
                  }
                }
                iVar9 = 0x404770;
                if (ppiStack56 == (int **)&DAT_ram_00000008) {
                  pp_disable_idle_timer(0x404770,0,8,ppiVar18,ppiVar16,unaff_a7);
                  pm_is_waked(iVar9,0,8,ppiVar18,ppiVar16,unaff_a7);
                  if ((iVar9 != 0) &&
                     (pm_scan_unlocked(iVar9,0,8,ppiVar18,ppiVar16,unaff_a7), iVar9 != 0)) {
                    pp_enable_idle_timer(iVar9,0,8,ppiVar18,ppiVar16,unaff_a7);
                  }
LAB_ram_0040920d:
                  if (piVar25 != (int *)0x2) {
                    ppiVar19 = (int **)((int)ppiVar23 + 0x16);
                    piVar27 = piVar25;
                    rc_get_trc(piVar25,ppiVar19,ppiVar10,ppiVar18,ppiVar16,unaff_a7);
                    ppiVar22[6] = piVar27;
                    rcUpdateRxDone(piVar27,ppiVar23,ppiVar10,ppiVar18,ppiVar16,unaff_a7);
                    *(char *)ppiVar23 = *(char *)ppiVar23 + '\x03';
                    piVar27 = piVar25;
                    ic_is_pure_sta(piVar25,ppiVar23,ppiVar10,ppiVar18,ppiVar16,unaff_a7);
                    ppiVar17 = ppiVar23;
                    if ((piVar27 != (int *)0x0) &&
                       (ppiVar18 = ppiStack56, ppiStack56 == (int **)0x0)) {
                      ppiVar21 = ppiStack60;
                      FUN_ram_00401808(ppiStack60,ppiVar23,ppiVar10,0,ppiVar16,unaff_a7);
                      ppiVar16 = ppiStack64;
                      ppiVar18 = (int **)0xc000;
                      ppiVar10 = (int **)((uint)*ppiVar23 >> 0x10 & 0xfff);
                      if (((uint)*ppiVar23 & 0xc000) != 0) {
                        ppiVar10 = (int **)((uint)ppiVar23[1] >> 8 & 0xffff);
                      }
                      if ((ppiStack64 == (int **)&DAT_ram_00000010) ||
                         (ppiVar17 = (int **)0x30, ppiStack64 == (int **)0x30)) {
                        ppiVar20 = ppiVar23 + 9;
                        ppiVar10 = (int **)((uint)((int)ppiVar10 + (-4 - (int)ppiVar21)) & 0xffff);
                        ppiVar17 = (int **)((int)ppiVar20 + (int)ppiVar10);
                        pm_assoc_parse(ppiVar20,ppiVar17,ppiVar10,0xc000,ppiStack64,unaff_a7);
                        if (ppiVar20 != (int **)0x0) {
                          pm_set_addr(piVar25,ppiVar19,ppiVar10,0xc000,ppiVar16,unaff_a7);
                          ppiVar17 = ppiVar19;
                        }
                      }
                    }
                    if ((*(byte *)((int)ppiVar23 + 0xd) >> 6 & 1) != 0) {
                      if ((*(byte *)(ppiVar23 + 4) & 1) == 0) {
                        ic_get_ptk_alg(piVar25,ppiVar17,ppiVar10,ppiVar18,ppiVar16,unaff_a7);
                      }
                      else {
                        ic_get_gtk_alg(piVar25,ppiVar17,ppiVar10,ppiVar18,ppiVar16,unaff_a7);
                      }
                    }
                  }
                  if (DAT_ram_0040e0d4 != (int **)0x0) {
                    memw();
                    if (0x7d000 < (uint)(_DAT_ram_3ff20c00 - DAT_ram_0040e0d4[8][1])) {
                      ppRecycleRxPkt(DAT_ram_0040e0d4,_DAT_ram_3ff20c00 - DAT_ram_0040e0d4[8][1],
                                     0x7d000,ppiVar18,ppiVar16,unaff_a7);
                      DAT_ram_0040e0d4 = (int **)0x0;
                      DAT_ram_0040e0d8 = 0;
                    }
                  }
                  unaff_a6 = *(int ***)((int)*ppiVar22 + 4);
                  ppiStack64 = (int **)(uint)*(ushort *)((int)unaff_a6 + 0x16);
                  bVar4 = *(byte *)((int)unaff_a6 + 1);
                  ppiStack60 = (int **)(bVar4 >> 2 & 1);
                  bVar1 = (*(ushort *)((int)unaff_a6 + 0x16) & 0xf) != 0;
                  ppiVar17 = ppiStack64;
                  if ((bVar1) ||
                     (ppiVar17 = ppiStack60, uVar7 = DAT_ram_0040e0d8, (bVar4 >> 2 & 1) != 0)) {
                    ppiStack40 = (int **)ppiVar22[3];
                    ppiStack52 = (int **)(uint)bVar4;
                    ppiStack48 = unaff_a6;
                    FUN_ram_00401808(unaff_a6,ppiStack40,(int **)(uint)bVar4,ppiVar17,unaff_a6,
                                     unaff_a7);
                    ppiVar17 = ppiStack52;
                    ppiVar20 = (int **)((uint)unaff_a6 & 0xffff);
                    if (((uint)ppiStack52 >> 6 & 1) == 0) {
                      ppiVar16 = (int **)*ppiStack40;
                      ppiVar17 = (int **)0xc000;
                      uVar14 = (uint)ppiVar16 >> 0x10 & 0xfff;
                      if (((uint)ppiVar16 & 0xc000) != 0) {
                        uVar14 = (uint)ppiStack40[1] >> 8 & 0xffff;
                      }
                      ppiVar21 = (int **)((uVar14 - (int)ppiVar20) - 4 & 0xffff);
                    }
                    else {
                      if ((*(byte *)((int)ppiStack48 + ((uint)unaff_a6 & 0xffff) + 3) >> 5 & 1) == 0
                         ) {
                        ppiVar16 = (int **)*ppiStack40;
                        ppiVar17 = (int **)((uint)(ppiVar20 + 1) & 0xffff);
                        uVar14 = (uint)ppiVar16 >> 0x10 & 0xfff;
                        if (((uint)ppiVar16 & 0xc000) != 0) {
                          uVar14 = (uint)ppiStack40[1] >> 8 & 0xffff;
                        }
                        ppiVar21 = (int **)((uVar14 - (int)ppiVar20) - 0xc & 0xffff);
                        ppiVar20 = ppiVar17;
                      }
                      else {
                        piVar25 = ppiVar22[6];
                        if (piVar25 != (int *)0x0) {
                          piVar25 = (int *)(uint)*(byte *)((int)piVar25 + 0x77);
                        }
                        ppiStack52 = ppiVar20;
                        ic_get_ptk_alg(piVar25,ppiStack40,ppiVar17,ppiVar20,ppiStack48,unaff_a7);
                        ppiVar17 = (int **)*ppiStack40;
                        if (piVar25 == (int *)0x2) {
                          ppiVar16 = (int **)((uint)ppiVar17 >> 0x10 & 0xfff);
                          if (((uint)ppiVar17 & 0xc000) != 0) {
                            ppiVar16 = (int **)((uint)ppiStack40[1] >> 8 & 0xffff);
                          }
                          puVar11 = (undefined *)((int)ppiVar16 + (-0x10 - (int)ppiStack52));
                        }
                        else {
                          ppiVar16 = (int **)((uint)ppiVar17 >> 0x10 & 0xfff);
                          if (((uint)ppiVar17 & 0xc000) != 0) {
                            ppiVar16 = (int **)((uint)ppiStack40[1] >> 8 & 0xffff);
                          }
                          puVar11 = (undefined *)((int)ppiVar16 + (-0x14 - (int)ppiStack52));
                        }
                        ppiVar21 = (int **)((uint)puVar11 & 0xffff);
                        ppiVar20 = (int **)((uint)(ppiStack52 + 2) & 0xffff);
                      }
                    }
                    unaff_a6 = ppiStack48;
                    if (DAT_ram_0040e0d4 == (int **)0x0) {
                      ppiVar19 = ppiStack40;
                      if (bVar1) goto LAB_ram_004098e2;
                      DAT_ram_0040e0d4 = ppiVar22;
                      DAT_ram_0040e0d8 = (ushort)(int **)((int)ppiVar20 + (int)ppiVar21);
                      ppiVar18 = (int **)((int)ppiVar20 + (int)ppiVar21);
                      unaff_a7 = ppiVar21;
                    }
                    else {
                      pbVar26 = (byte *)(*DAT_ram_0040e0d4)[1];
                      ppiVar19 = (int **)&DAT_ram_00000010;
                      if ((*(byte *)ppiStack48 & 0x8c) == 0x88) {
                        if ((*(byte *)((int)ppiStack48 + 1) & 3) == 3) {
                          bVar4 = *(byte *)((int)ppiStack48 + 0x1e);
                        }
                        else {
                          bVar4 = *(byte *)(ppiStack48 + 6);
                        }
                        ppiVar19 = (int **)(bVar4 & 0xf);
                      }
                      ppiVar17 = (int **)0x88;
                      ppiVar18 = (int **)&DAT_ram_00000010;
                      if ((*pbVar26 & 0x8c) == 0x88) {
                        if ((pbVar26[1] & 3) == 3) {
                          bVar4 = pbVar26[0x1e];
                        }
                        else {
                          bVar4 = pbVar26[0x18];
                        }
                        ppiVar18 = (int **)(bVar4 & 0xf);
                      }
                      if (ppiVar19 != ppiVar18) goto LAB_ram_004098e2;
                      ppiVar10 = ppiStack48 + 1;
                      ppiVar17 = (int **)&DAT_ram_0000000c;
                      ppiStack40 = DAT_ram_0040e0d4;
                      ppiStack52 = ppiVar20;
                      ppiStack44 = ppiVar21;
                      memcmp(ppiVar10,pbVar26 + 4,0xc);
                      unaff_a7 = ppiStack44;
                      unaff_a6 = ppiStack48;
                      ppiVar18 = ppiStack52;
                      ppiVar16 = ppiStack64;
                      ppiVar19 = (int **)(pbVar26 + 4);
                      ppiVar20 = ppiStack52;
                      ppiVar21 = ppiStack44;
                      if (ppiVar10 != (int **)0x0) goto LAB_ram_004098e2;
                      ppiVar17 = (int **)((uint)*(ushort *)(pbVar26 + 0x16) ^ (uint)ppiStack64);
                      ppiVar19 = (int **)0xfffffff0;
                      if (((uint)ppiVar17 & 0xfffffff0) == 0) {
                        ppiVar10 = (int **)(*(ushort *)(pbVar26 + 0x16) + 1);
                        if (ppiStack64 != ppiVar10) {
                          ppiVar19 = ppiStack64;
                          unaff_a6 = ppiStack64;
                          if ((int)ppiVar10 < (int)ppiStack64) {
                            ppRecycleRxPkt(ppiVar22,ppiStack64,ppiVar17,ppiStack52,ppiStack64,
                                           ppiStack44);
                            ppiVar19 = ppiVar16;
                            unaff_a6 = ppiVar16;
                            goto LAB_ram_004094fe;
                          }
                          goto LAB_ram_004098e2;
                        }
                        ppiVar19 = (int **)0x633;
                        ppiVar16 = (int **)((uint)DAT_ram_0040e0d8 + (int)ppiStack44);
                        if (ppiVar16 < (int **)0x634) {
                          ppiStack40 = (int **)ppiStack40[3];
                          puVar11 = (undefined *)((int)ppiStack48 + (int)ppiStack52);
                          ppiStack52 = ppiVar16;
                          memcpy(pbVar26 + DAT_ram_0040e0d8,puVar11,(size_t)ppiStack44);
                          ppiVar17 = (int **)0xff0000ff;
                          DAT_ram_0040e0d8 = (ushort)ppiStack52;
                          ppiStack40[1] = (int *)((uint)ppiStack40[1] & 0xff0000ff);
                          ppiVar19 = (int **)0xf000ffff;
                          unaff_a7 = (int **)((uint)((int)ppiStack44 +
                                                    ((uint)*ppiStack40 >> 0x10 & 0xfff)) & 0xfff);
                          *ppiStack40 = (int *)((uint)*ppiStack40 & 0xf000ffff | (uint)unaff_a7);
                          *(short *)(pbVar26 + 0x16) = (short)ppiStack64;
                          ppiVar18 = ppiStack64;
                        }
                        ppRecycleRxPkt(ppiVar22,ppiVar19,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
                        ppiVar16 = ppiVar22;
                        unaff_a6 = ppiStack60;
                        if (ppiStack60 == (int **)0x0) {
                          ppiVar17 = (int **)(uint)pbVar26[1];
                          *(ushort *)(pbVar26 + 0x16) = (ushort)ppiStack64 & 0xfff0;
                          ppiVar22 = DAT_ram_0040e0d4;
                          ppiVar16 = (int **)((uint)ppiVar17 & 0xfffffffb);
                          pbVar26[1] = (byte)ppiVar16;
                          DAT_ram_0040e0d4 = ppiStack60;
                          DAT_ram_0040e0d8 = 0;
                          ppiVar19 = ppiVar22;
                          ppiVar18 = ppiStack64;
                          uVar7 = 0;
                          if (ppiVar22 != (int **)0x0) goto LAB_ram_00409515;
                        }
                      }
                      else {
                        if (bVar1) {
                          ppRecycleRxPkt(ppiVar22,0xfffffff0,ppiVar17,ppiStack52,ppiStack48,
                                         ppiStack44);
LAB_ram_004094fe:
                          if (DAT_ram_0040e0d4 != (int **)0x0) {
                            ppRecycleRxPkt(DAT_ram_0040e0d4,ppiVar19,ppiVar17,ppiVar18,unaff_a6,
                                           unaff_a7);
                          }
                          DAT_ram_0040e0d4 = (int **)0x0;
                          DAT_ram_0040e0d8 = 0;
                          ppiVar16 = (int **)0x0;
                        }
                        else {
                          ppiVar16 = ppiStack40;
                          ppRecycleRxPkt(ppiStack40,0xfffffff0,ppiVar17,ppiStack52,ppiStack48,
                                         ppiStack44);
                          DAT_ram_0040e0d4 = ppiVar22;
                          ppiVar18 = (int **)((int)ppiStack52 + (int)ppiStack44);
                          DAT_ram_0040e0d8 = (ushort)ppiVar18;
                          unaff_a7 = ppiStack44;
                        }
                      }
                    }
                    goto LAB_ram_004098c8;
                  }
LAB_ram_00409515:
                  DAT_ram_0040e0d8 = uVar7;
                  ppiVar18 = (int **)(uint)*(byte *)(ppiVar23 + 2);
                  piVar25 = *ppiVar23;
                  ppiVar21 = unaff_a7;
                  ppiVar20 = ppiVar18;
                  if (ppiVar18 == (int **)0xf5) {
                    ppiVar17 = (int **)0x1;
                    ppiStack40 = ppiVar22;
                    pp_michael_mic_failure
                              ((uint)piVar25 >> 0xc & 1 ^ 1,ppiVar22,1,0xf5,unaff_a6,unaff_a7);
                    ppiVar22 = ppiStack40;
                    ppiVar19 = ppiStack40;
                    goto LAB_ram_004098e2;
                  }
                  ppiVar19 = ppiVar22;
                  if ((((uint)piVar25 & 0x50000000) == 0) || ((int)piVar25 < 0)) {
                    unaff_a6 = (int **)0x404770;
                    ppiVar17 = (int **)0xa0000000;
                    if ((((uint)piVar25 & 0xa0000000) != 0) && (TmpSTAAPCloseAP != (code)0x1)) {
                      ppiVar18 = (int **)0x0;
                      ppiVar16 = (int **)&SUB_ram_f9f0c112;
                      ppiVar17 = (int **)(int)*(char *)ppiVar22[3];
                      hostap_input(&SUB_ram_f9f0c112,ppiVar22,ppiVar17,0,0x404770,unaff_a7);
                      goto LAB_ram_004098c8;
                    }
                  }
                  else {
                    ppiVar17 = (int **)0x50000000;
                    if (ppiVar18 == (int **)0x0) {
                      ppiVar16 = (int **)0xf00d;
                      ppiVar17 = (int **)(int)*(char *)ppiVar22[3];
                      sta_input(0xf00d,ppiVar22,ppiVar17,0,unaff_a6,unaff_a7);
                      goto LAB_ram_004098c8;
                    }
                  }
                }
                else {
                  ppiVar18 = ppiStack56;
                  if (ppiStack56 != (int **)0x0) goto LAB_ram_0040920d;
                  ppiStack40 = (int **)0x0;
                  ppiVar19 = ppiStack60;
                  FUN_ram_00401808(ppiStack60,0,0,0,ppiVar16,unaff_a7);
                  ppiVar17 = ppiStack60;
                  ppiVar21 = ppiStack64;
                  ppiVar18 = (int **)0xc000;
                  ppiVar10 = (int **)((uint)piVar27 >> 0x10 & 0xfff);
                  if (((uint)piVar27 & 0xc000) != 0) {
                    ppiVar10 = (int **)((uint)ppiVar23[1] >> 8 & 0xffff);
                  }
                  ppiVar20 = ppiVar23 + 9;
                  unaff_a6 = (int **)((int)ppiVar20 +
                                     ((uint)((int)ppiVar10 + (-4 - ((uint)ppiVar19 & 0xffff))) &
                                     0xffff));
                  ppiVar16 = ppiStack64;
                  ppiVar19 = ppiVar23;
                  if (ppiStack64 != (int **)0x80) {
                    ppiVar10 = ppiStack64;
                    if ((ppiStack64 == (int **)0x50) && (ppiStack40 != (int **)0x0)) {
                      iVar9 = (int)*(short *)(ppiVar22 + 5);
                      FUN_ram_004085f4(iVar9,ppiVar23,ppiStack60,ppiVar20,unaff_a6,0x50);
                      ppiVar10 = ppiVar17;
                      ppiVar18 = ppiVar20;
                      ppiVar16 = unaff_a6;
                      unaff_a7 = ppiVar21;
                      if (iVar9 == 1) goto LAB_ram_004098e2;
                    }
                    goto LAB_ram_0040920d;
                  }
                  bVar1 = ppiStack40 == (int **)0x0;
                  ppiVar15 = ppiStack40;
                  ppiStack40 = unaff_a6;
                  if (bVar1) {
LAB_ram_004091d0:
                    puVar11 = (undefined *)((int)ppiVar23 + 0x16);
                    pm_sleep_for(puVar11,ppiVar15,ppiVar10,ppiVar18,ppiVar16,unaff_a7);
                    ppiVar17 = ppiStack40;
                    if (puVar11 != (undefined *)0x0) {
                      pm_onBcnRx(ppiVar22,ppiVar20,ppiStack40,ppiVar18,ppiVar16,unaff_a7);
                      ppiVar10 = ppiVar17;
                    }
                    goto LAB_ram_0040920d;
                  }
                  iVar9 = (int)*(short *)(ppiVar22 + 5);
                  FUN_ram_004085f4(iVar9,ppiVar23,ppiStack60,ppiVar20,unaff_a6,0x80);
                  ppiVar15 = ppiVar23;
                  ppiVar10 = ppiVar17;
                  ppiVar18 = ppiVar20;
                  ppiVar16 = unaff_a6;
                  unaff_a7 = ppiVar21;
                  if (iVar9 != 1) goto LAB_ram_004091d0;
                }
LAB_ram_004098e2:
                ppRecycleRxPkt(ppiVar22,ppiVar19,ppiVar17,ppiVar20,unaff_a6,ppiVar21);
                ppiVar16 = ppiVar22;
                ppiVar18 = ppiVar20;
                unaff_a7 = ppiVar21;
                goto LAB_ram_004098c8;
              }
            }
          }
          else {
            ppProcessRxPktHdr(apuStack80[0][1],apuStack80[0],8,ppiVar18,unaff_a6,unaff_a7);
          }
        }
      }
    }
    else {
      if (uVar14 == 0xe) {
        if (NMIIrqIsOn == 0) {
          vPortEnterCritical(0xe,0xe,10,ppiVar18,unaff_a6,unaff_a7);
          memw();
          memw();
          _DAT_ram_3ff20c18 = (int **)0x8000000;
        }
        ppiVar16 = (int **)((byte)(&DAT_ram_0040e418)[*apuStack80[0]] - 1);
        (&DAT_ram_0040e418)[*apuStack80[0]] = (byte)ppiVar16;
        ppiVar22 = WDEV_INTEREST_EVENT;
        puVar11 = (undefined *)(uint)NMIIrqIsOn;
        if (puVar11 == (undefined *)0x0) {
          puVar11 = &DAT_ram_3ff20c18;
          memw();
          _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
          vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,10,ppiVar18,unaff_a6,unaff_a7);
          ppiVar16 = ppiVar22;
        }
        lmacProcessTxTimeout(puVar11,ppiVar16,10,ppiVar18,unaff_a6,unaff_a7);
      }
      else {
        if (uVar14 < 0xf) {
          if (uVar14 == 0xc) {
            if (NMIIrqIsOn == 0) {
              vPortEnterCritical(0xc,0xe,10,ppiVar18,unaff_a6,unaff_a7);
              memw();
              memw();
              _DAT_ram_3ff20c18 = (int **)0x8000000;
            }
            if (DAT_ram_0040e2a8 == '\x01') {
              DAT_ram_0040e424 = DAT_ram_0040e424 - 1;
              memset(auStack112,0,0x20);
              ppiVar17 = (int **)&DAT_ram_00000020;
              system_rtc_mem_write(0,auStack112,0x20,ppiVar18,unaff_a6,unaff_a7);
              if (dbg_stop_sw_wdt == '\0') {
                pp_soft_wdt_count = dbg_stop_sw_wdt;
              }
              if (dbg_stop_hw_wdt == '\0') {
                memw();
                _DAT_ram_60000914 = 0x73;
              }
              cVar8 = '\0';
LAB_ram_00409762:
              *pcVar24 = cVar8;
            }
            if (NMIIrqIsOn == 0) {
              memw();
              _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
              vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,ppiVar17,ppiVar18,unaff_a6,
                                unaff_a7);
            }
          }
          else {
            ppiVar22 = (int **)&DAT_ram_0000000c;
            if (uVar14 < 0xd) {
              if (NMIIrqIsOn == 0) {
                vPortEnterCritical(uVar14,0xc,10,ppiVar18,unaff_a6,unaff_a7);
                memw();
                memw();
                _DAT_ram_3ff20c18 = (int **)0x8000000;
              }
              pcVar24 = &DAT_ram_0040e418 + *apuStack80[0];
              cVar8 = *pcVar24 + -1;
              goto LAB_ram_00409762;
            }
            if (NMIIrqIsOn == 0) {
              vPortEnterCritical(uVar14,0xc,10,ppiVar18,unaff_a6,unaff_a7);
              ppiVar22 = (int **)0x8000000;
              memw();
              memw();
              _DAT_ram_3ff20c18 = (int **)0x8000000;
            }
            (&DAT_ram_0040e418)[*apuStack80[0]] = (&DAT_ram_0040e418)[*apuStack80[0]] + -1;
            ppiVar16 = WDEV_INTEREST_EVENT;
            if (NMIIrqIsOn == 0) {
              memw();
              _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
              vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,10,ppiVar18,unaff_a6,unaff_a7)
              ;
              ppiVar22 = ppiVar16;
            }
            if (_DAT_ram_10c11235 != (code *)0x0) {
              (*_DAT_ram_10c11235)(_DAT_ram_10c11235,ppiVar22,10,ppiVar18,unaff_a6,unaff_a7);
            }
          }
        }
        else {
          if (uVar14 == 0x10) {
            if (NMIIrqIsOn == 0) {
              vPortEnterCritical(0x10,0xe,10,ppiVar18,unaff_a6,unaff_a7);
              memw();
              memw();
              _DAT_ram_3ff20c18 = (int **)0x8000000;
            }
            ppiVar16 = (int **)((byte)(&DAT_ram_0040e418)[*apuStack80[0]] - 1);
            (&DAT_ram_0040e418)[*apuStack80[0]] = (byte)ppiVar16;
            ppiVar22 = WDEV_INTEREST_EVENT;
            puVar11 = (undefined *)(uint)NMIIrqIsOn;
            if (puVar11 == (undefined *)0x0) {
              puVar11 = &DAT_ram_3ff20c18;
              memw();
              _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
              vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,10,ppiVar18,unaff_a6,unaff_a7)
              ;
              ppiVar16 = ppiVar22;
            }
            wDev_SnifferRxHT40_data(puVar11,ppiVar16,10,ppiVar18,unaff_a6,unaff_a7);
          }
          else {
            if (uVar14 < 0x10) {
              if (NMIIrqIsOn == 0) {
                vPortEnterCritical(uVar14,0xe,10,ppiVar18,unaff_a6,unaff_a7);
                memw();
                memw();
                _DAT_ram_3ff20c18 = (int **)0x8000000;
              }
              ppiVar16 = (int **)((byte)(&DAT_ram_0040e418)[*apuStack80[0]] - 1);
              (&DAT_ram_0040e418)[*apuStack80[0]] = (byte)ppiVar16;
              ppiVar22 = WDEV_INTEREST_EVENT;
              puVar11 = (undefined *)(uint)NMIIrqIsOn;
              if (puVar11 == (undefined *)0x0) {
                puVar11 = &DAT_ram_3ff20c18;
                memw();
                _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
                vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,10,ppiVar18,unaff_a6,
                                  unaff_a7);
                ppiVar16 = ppiVar22;
              }
              wdev_recv_sniffer_data(puVar11,ppiVar16,10,ppiVar18,unaff_a6,unaff_a7);
            }
            else {
              if (uVar14 == 0x11) {
                if (NMIIrqIsOn == 0) {
                  vPortEnterCritical(0x11,0x11,10,ppiVar18,unaff_a6,unaff_a7);
                  memw();
                  memw();
                  _DAT_ram_3ff20c18 = (int **)0x8000000;
                }
                ppiVar16 = (int **)((byte)(&DAT_ram_0040e418)[*apuStack80[0]] - 1);
                (&DAT_ram_0040e418)[*apuStack80[0]] = (byte)ppiVar16;
                ppiVar22 = WDEV_INTEREST_EVENT;
                puVar11 = (undefined *)(uint)NMIIrqIsOn;
                if (puVar11 == (undefined *)0x0) {
                  puVar11 = &DAT_ram_3ff20c18;
                  memw();
                  _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
                  vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,10,ppiVar18,unaff_a6,
                                    unaff_a7);
                  ppiVar16 = ppiVar22;
                }
                wDev_SnifferRxLDPC(puVar11,ppiVar16,10,ppiVar18,unaff_a6,unaff_a7);
              }
            }
          }
        }
      }
    }
  }
  goto LAB_ram_004098a4;
code_r0x0040907b:
  if (bVar1) {
    pm_incr_active_cnt(puVar11,ppiVar16,ppiVar17,&NMIIrqIsOn,unaff_a6,unaff_a7);
  }
  pp_disable_idle_timer(puVar11,ppiVar16,ppiVar17,&NMIIrqIsOn,unaff_a6,unaff_a7);
  iVar9 = 1;
  ppCheckTxIdle(1,ppiVar16,ppiVar17,&NMIIrqIsOn,unaff_a6,unaff_a7);
  if (((iVar9 == 0) && (pm_is_waked(0,ppiVar16,ppiVar17,&NMIIrqIsOn,unaff_a6,unaff_a7), iVar9 != 0))
     && (pm_scan_unlocked(iVar9,ppiVar16,ppiVar17,&NMIIrqIsOn,unaff_a6,unaff_a7), iVar9 != 0)) {
    pp_enable_idle_timer(iVar9,ppiVar16,ppiVar17,&NMIIrqIsOn,unaff_a6,unaff_a7);
  }
LAB_ram_004098a4:
  pcVar12 = _DAT_ram_f9f0c116;
  (*_DAT_ram_f9f0c116)(_DAT_ram_f9f0c116,g_osi_funcs_p,ppiVar17,ppiVar18,unaff_a6,unaff_a7);
  DAT_ram_0040e13c = DAT_ram_0040e13c + -1;
  (*_DAT_ram_f9f0c11a)(pcVar12,_DAT_ram_f9f0c11a,g_osi_funcs_p,ppiVar18,unaff_a6,unaff_a7);
  goto LAB_ram_00408d74;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void ppTxPkt(void)

{
  byte bVar1;
  uint **in_a2;
  uint *puVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint **ppuVar7;
  uint *puVar8;
  uint uVar9;
  uint **ppuVar10;
  undefined4 uVar11;
  uint unaff_a5;
  uint *puVar12;
  
  puVar2 = in_a2[8];
  uVar5 = puVar2[1] & 0xf;
  if ((uVar5 == 3) || (uVar5 == 0)) {
    uVar6 = 2;
  }
  else {
    uVar6 = 3;
    unaff_a5 = uVar5;
    if ((2 < uVar5) && (uVar6 = 1, 5 < uVar5)) {
      uVar6 = 0;
    }
  }
  if (uVar6 != (puVar2[1] >> 0x14 & 7)) {
    ets_printf("%s %u\n",&DAT_ram_0040b92c,0x2f6,unaff_a5);
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  puVar8 = in_a2[3];
  if ((*(byte *)(puVar8 + 1) & 1) != 0) {
    *puVar2 = *puVar2 | 0x80;
  }
  bVar1 = *(byte *)puVar8;
  uVar5 = *puVar2;
  if ((bVar1 & 0xc) == 8) {
    *puVar2 = uVar5 & 0x3f;
    if ((bVar1 & 0x70) == 0x40) {
LAB_ram_004099e0:
      *puVar2 = uVar5 & 0x3f;
    }
  }
  else {
    if ((bVar1 & 0xc) == 0) {
      if ((bVar1 & 0xf0) == 0x80) {
        if ((uVar5 >> 0x1d & 1) != 0) {
          DAT_ram_0040e410 = DAT_ram_0040e410 + 1;
        }
      }
      else {
        if (((bVar1 & 0xf0) == 0x40) && ((uVar5 >> 7 & 1) == 0)) goto LAB_ram_004099e0;
      }
    }
  }
  uVar5 = *puVar2 >> 6 & 0x40000;
  if (uVar5 != 0) {
    *(char *)((*in_a2)[1] + 3) = (char)(*(ushort *)((int)puVar8 + 0x16) >> 4);
  }
  puVar8 = in_a2[6];
  uVar6 = puVar2[3] >> 8 & 0xf;
  uVar9 = 4;
  if (uVar6 - 1 < 3) {
    uVar9 = (uint)(byte)(&DAT_ram_0040b933)[uVar6];
  }
  ppuVar7 = (uint **)in_a2[1];
  memw();
  uVar6 = uVar9 + *(ushort *)((int)in_a2 + 0x12) & 0xffff;
  *(short *)((int)in_a2 + 0x12) = (short)uVar6;
  memw();
  puVar12 = *ppuVar7;
  memw();
  *ppuVar7 = (uint *)((uint)puVar12 & 0xff000fff);
  if (uVar5 == 0) {
    memw();
    puVar2 = *ppuVar7;
    puVar8 = (uint *)((uint)puVar2 | 0x40000000);
    memw();
    *ppuVar7 = puVar8;
  }
  else {
    if (puVar8 == (uint *)0x0) {
      if (NMIIrqIsOn == 0) {
        vPortEnterCritical(&NMIIrqIsOn,0,(uint *)((uint)puVar12 & 0xff000fff),uVar6,uVar5);
        memw();
        memw();
        _DAT_ram_3ff20c18 = (uint *)0x8000000;
      }
      in_a2[0xc] = (uint *)0x0;
      ppDiscardMPDU();
      if (NMIIrqIsOn != 0) {
        return;
      }
      memw();
      _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
      vPortExitCritical(1,&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,uVar6,uVar5);
      return;
    }
    puVar8 = *in_a2;
    memw();
    uVar5 = *puVar8;
    memw();
    *puVar8 = uVar5 | 0x20000000;
    if (((puVar2[3] & 0xf00) != 0) && ((puVar2[3] & 0xf00) != 0x300)) {
      ets_printf("%s %u\n",&DAT_ram_0040b92c,0xdb5,uVar6,uVar5);
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    puVar8 = (uint *)puVar8[1];
    uVar5 = uVar6 - 4 & 0xfff;
    *puVar8 = *puVar8 & 0xfffff000 | uVar5;
    uVar5 = uVar5 + 3;
    ppuVar7 = (uint **)(*puVar8 & 0xfff80fff);
    uVar6 = 0xffcfffff;
    puVar2 = (uint *)(*puVar8 & 0xffc80fff);
    *puVar8 = (uint)puVar2;
  }
  if (NMIIrqIsOn == 0) {
    vPortEnterCritical(puVar8,ppuVar7,puVar2,uVar6,uVar5);
    memw();
    memw();
    _DAT_ram_3ff20c18 = (uint *)0x8000000;
  }
  rcGetSched(in_a2[6],in_a2[8],puVar2,uVar6,uVar5);
  if (NMIIrqIsOn == 0) {
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,puVar2,uVar6,uVar5);
  }
  ppCalFrameTimes();
  uVar9 = _DAT_ram_3ff20c00;
  puVar12 = in_a2[3];
  memw();
  puVar8 = in_a2[8];
  puVar8[5] = _DAT_ram_3ff20c00;
  FUN_ram_00408a40(puVar8,uVar9,puVar2,uVar6,uVar5);
  bVar1 = *(byte *)puVar12;
  iVar3 = 0xc;
  fpm_allow_tx(0xc,uVar9,puVar2,uVar6,uVar5);
  if (iVar3 == 0) {
    esp_wifi_fpm_do_wakeup(0,uVar9,puVar2,uVar6,uVar5);
  }
  ppuVar10 = in_a2 + 7;
  puVar2 = in_a2[6];
  uVar9 = *in_a2[8];
  ppuVar7 = ppuVar10;
  if (puVar2 == (uint *)0x0) {
    if ((uVar9 >> 9 & 1) != 0) {
      uVar9 = uVar9 >> 1 & 1;
      goto LAB_ram_00409b93;
    }
    uVar9 = uVar9 >> 1 & 1;
    pm_allow_tx(uVar9,0,ppuVar10,uVar6,uVar5);
    puVar2 = in_a2[8];
    if (((uVar9 != 0) || (puVar2[4] == 0x20)) || (puVar2[4] == 0x40)) {
      uVar6 = 0xffffffc3;
      *puVar2 = *puVar2 & 0xffffffc3;
      uVar11 = 7;
      puVar8 = (uint *)(puVar2[1] & 0xff8ffff0 | 7);
      puVar2[1] = (uint)puVar8;
      goto LAB_ram_00409d2b;
    }
  }
  else {
    uVar9 = uVar9 >> 1 & 1;
    if ((bVar1 & 0xc) == 0) {
LAB_ram_00409b93:
      pm_allow_tx(uVar9,puVar2,ppuVar10,uVar6,uVar5);
      if (uVar9 != 0) {
        puVar8 = in_a2[8];
        uVar6 = 0xffffffc3;
        *puVar8 = *puVar8 & 0xffffffc3;
        uVar11 = 7;
        puVar2 = (uint *)(puVar8[1] & 0xff8ffff0 | 7);
        puVar8[1] = (uint)puVar2;
LAB_ram_00409d2b:
        if (NMIIrqIsOn == 0) {
          vPortEnterCritical(puVar8,puVar2,uVar11,uVar6,uVar5);
          puVar8 = (uint *)&DAT_ram_3ff20c18;
          puVar2 = (uint *)0x8000000;
          memw();
          memw();
          _DAT_ram_3ff20c18 = (uint *)0x8000000;
        }
        vPortEnterCritical(puVar8,puVar2,uVar11,uVar6,uVar5);
        in_a2[7] = (uint *)0x0;
        *DAT_ram_0040e2c8 = (uint *)in_a2;
        DAT_ram_0040e2c8 = ppuVar10;
        vPortExitCritical(ppuVar10,puVar2,uVar11,uVar6,uVar5);
        puVar2 = in_a2[6];
        if (puVar2 != (uint *)0x0) {
          puVar2 = (uint *)(uint)*(byte *)((int)puVar2 + 0x76);
          uVar5 = in_a2[8][1];
          uVar9 = *in_a2[8];
          uVar6 = uVar5 & 0xf;
          uVar5 = uVar5 >> 0x14 & 7;
          FUN_ram_004018a4(uVar9 >> 2 & 0xf,uVar9 >> 1 & 1,puVar2,uVar6,uVar5);
        }
        if (NMIIrqIsOn == 0) {
          memw();
          _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
          vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,puVar2,uVar6,uVar5);
        }
        pp_post(in_a2[8][1] >> 0x14 & 7,0,puVar2,uVar6,uVar5);
        return;
      }
    }
    else {
      pm_allow_tx(uVar9,puVar2,ppuVar10,uVar6,uVar5);
      if ((uVar9 != 0) || (uVar9 = *in_a2[8], (uVar9 >> 0x13 & 1) == 0)) {
        if (NMIIrqIsOn == 0) {
          vPortEnterCritical(uVar9,puVar2,ppuVar10,uVar6,uVar5);
          memw();
          memw();
          _DAT_ram_3ff20c18 = (uint *)0x8000000;
        }
        uVar6 = in_a2[8][1];
        bVar1 = *(byte *)((int)in_a2[6] + 0x76);
        uVar9 = *in_a2[8] >> 1 & 1;
        ppuVar7 = (uint **)(uVar6 & 0xf);
        uVar6 = uVar6 >> 0x14 & 7;
        FUN_ram_004018e0(uVar9,(uint *)(uint)bVar1,ppuVar7,uVar6,uVar5);
        puVar8 = WDEV_INTEREST_EVENT;
        puVar4 = (undefined *)(uint)NMIIrqIsOn;
        puVar2 = (uint *)(uint)bVar1;
        if (puVar4 == (undefined *)0x0) {
          puVar4 = &DAT_ram_3ff20c18;
          memw();
          _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
          vPortExitCritical(&DAT_ram_3ff20c18,WDEV_INTEREST_EVENT,ppuVar7,uVar6,uVar5);
          puVar2 = puVar8;
        }
        if (uVar9 == 8) goto LAB_ram_00409d34;
        uVar9 = *in_a2[8] >> 1 & 1;
        pm_allow_tx(uVar9,puVar2,ppuVar7,uVar6,uVar5);
        if (uVar9 != 0) {
          puVar8 = in_a2[8];
          puVar2 = (uint *)0x0;
          uVar11 = 0xffffffc3;
          *puVar8 = *puVar8 & 0xffffffc3;
          goto LAB_ram_00409d2b;
        }
      }
    }
  }
  puVar4 = (undefined *)0x1;
  pm_post(1,puVar2,ppuVar7,uVar6,uVar5);
LAB_ram_00409d34:
  vPortEnterCritical(puVar4,puVar2,ppuVar7,uVar6,uVar5);
  uVar9 = *in_a2[8];
  in_a2[7] = (uint *)0x0;
  *(uint ***)(&DAT_ram_0040e2b8)[((uVar9 >> 1 & 1) + 0x22) * 2] = in_a2;
  iVar3 = (*in_a2[8] >> 1 & 1) + 0x22;
  (&DAT_ram_0040e2b8)[iVar3 * 2] = ppuVar10;
  vPortExitCritical(iVar3,puVar2,ppuVar10,uVar6,uVar5);
  return;
}



void RC_SetBasicRate(void)

{
  byte bVar1;
  uint in_a2;
  char unaff_a3;
  
  if ((in_a2 & 0x15f) == 0x15f) {
    DAT_ram_0040e464 = 0x40000;
    DAT_ram_0040e468 = 0;
    DAT_ram_0040e469 = 0;
    DAT_ram_0040e46a = 0;
    DAT_ram_0040e484 = 0x40000;
    DAT_ram_0040e48a = 0;
    DAT_ram_0040e492 = 1;
    DAT_ram_0040e470 = 1;
    DAT_ram_0040e471 = 1;
    DAT_ram_0040e472 = 1;
    DAT_ram_0040e494 = 0xba2e;
    DAT_ram_0040e474 = 0xba2e;
    DAT_ram_0040e48c = 0x20000;
    DAT_ram_0040e46c = 0x20000;
    DAT_ram_0040e49a = 2;
    DAT_ram_0040e478 = 2;
    DAT_ram_0040e479 = 2;
    DAT_ram_0040e47a = 2;
    DAT_ram_0040e49c = 0x5d17;
    DAT_ram_0040e4a0 = 7;
    DAT_ram_0040e4a1 = 7;
    DAT_ram_0040e4a2 = 3;
    DAT_ram_0040e47c = 0x5d17;
    DAT_ram_0040e488 = 4;
    DAT_ram_0040e489 = 4;
    DAT_ram_0040e490 = 5;
    DAT_ram_0040e491 = 5;
    DAT_ram_0040e498 = 6;
    DAT_ram_0040e499 = 6;
    DAT_ram_0040e480 = 3;
    DAT_ram_0040e481 = 3;
    DAT_ram_0040e482 = 3;
    DAT_ram_0040e4bc = 0xaaaa;
    DAT_ram_0040e4dc = 0x71c7;
    DAT_ram_0040e4b4 = 0x5555;
    DAT_ram_0040e4cc = 0x1c71;
    DAT_ram_0040e4d4 = 0x38e3;
    DAT_ram_0040e4ac = 0x2aaa;
    DAT_ram_0040e4c1 = 0xb;
    DAT_ram_0040e4e0 = 0xb;
    DAT_ram_0040e4e1 = 0xb;
    DAT_ram_0040e4b8 = 10;
    DAT_ram_0040e4b9 = 10;
    DAT_ram_0040e4d8 = 10;
    DAT_ram_0040e4d9 = 10;
    DAT_ram_0040e4c2 = 4;
    DAT_ram_0040e4e2 = 4;
    DAT_ram_0040e4ba = 5;
    DAT_ram_0040e4da = 5;
    DAT_ram_0040e4b1 = 9;
    DAT_ram_0040e4b2 = 6;
    DAT_ram_0040e4d0 = 9;
    DAT_ram_0040e4d1 = 9;
    DAT_ram_0040e4d2 = 6;
    DAT_ram_0040e4a4 = 0x1555;
    DAT_ram_0040e4aa = 7;
    DAT_ram_0040e4ca = 7;
    DAT_ram_0040e4e4 = 0x9d89;
    DAT_ram_0040e4c4 = 0x12f6;
    DAT_ram_0040e4ec = 0x4ec4;
    DAT_ram_0040e4e8 = 0xb;
    DAT_ram_0040e4f4 = 0x3483;
    DAT_ram_0040e4e9 = 0xb;
    DAT_ram_0040e4fc = 0x2762;
    DAT_ram_0040e4f0 = 10;
    DAT_ram_0040e504 = 0x1a41;
    DAT_ram_0040e4f1 = 10;
    DAT_ram_0040e4f8 = 10;
    DAT_ram_0040e4f9 = 10;
    DAT_ram_0040e4a9 = 9;
    DAT_ram_0040e4c9 = 9;
    DAT_ram_0040e4ea = 4;
    DAT_ram_0040e4f2 = 5;
    DAT_ram_0040e4fa = 5;
    DAT_ram_0040e500 = 9;
    DAT_ram_0040e501 = 9;
    DAT_ram_0040e502 = 6;
    DAT_ram_0040e508 = 9;
    DAT_ram_0040e509 = 9;
    DAT_ram_0040e50a = 6;
    DAT_ram_0040e50c = 0x13b1;
    DAT_ram_0040e528 = 0xb;
    DAT_ram_0040e529 = 0xb;
    DAT_ram_0040e530 = 10;
    DAT_ram_0040e531 = 10;
    DAT_ram_0040e538 = 10;
    DAT_ram_0040e539 = 10;
    DAT_ram_0040e514 = 0x1181;
    DAT_ram_0040e52c = 0x46e4;
    DAT_ram_0040e53c = 0x2372;
    DAT_ram_0040e510 = 9;
    DAT_ram_0040e511 = 9;
    DAT_ram_0040e512 = 6;
    DAT_ram_0040e518 = 9;
    DAT_ram_0040e519 = 9;
    DAT_ram_0040e51a = 6;
    DAT_ram_0040e51c = 0xfc0;
    DAT_ram_0040e520 = 9;
    DAT_ram_0040e521 = 9;
    DAT_ram_0040e522 = 6;
    DAT_ram_0040e524 = 0x8dc8;
    DAT_ram_0040e52a = 4;
    DAT_ram_0040e532 = 5;
    DAT_ram_0040e534 = 0x2f42;
    DAT_ram_0040e53a = 5;
    DAT_ram_0040e540 = 9;
    DAT_ram_0040e541 = 9;
    DAT_ram_0040e542 = 6;
    DAT_ram_0040e544 = 0x17a1;
    DAT_ram_0040e548 = 9;
    DAT_ram_0040e54c = 0x11b9;
    DAT_ram_0040e549 = 9;
    DAT_ram_0040e54a = 6;
    DAT_ram_0040e550 = 9;
    DAT_ram_0040e551 = 9;
    DAT_ram_0040e552 = 6;
    DAT_ram_0040e554 = 0xfc0;
    DAT_ram_0040e558 = 9;
    DAT_ram_0040e559 = 9;
    DAT_ram_0040e55a = 6;
    DAT_ram_0040e55c = 0xe2d;
    DAT_ram_0040e560 = 9;
    DAT_ram_0040e561 = 9;
    DAT_ram_0040e562 = 6;
  }
  else {
    bVar1 = 0;
    if (unaff_a3 == '\x01') {
      bVar1 = 4;
    }
    DAT_ram_0040e4b8 = bVar1 | 1;
    DAT_ram_0040e4d0 = bVar1 | 3;
    DAT_ram_0040e4d8 = DAT_ram_0040e4d0;
    DAT_ram_0040e4e0 = DAT_ram_0040e4b8;
  }
  DAT_ram_0040e4a8 = DAT_ram_0040e4d0;
  DAT_ram_0040e4b0 = DAT_ram_0040e4d0;
  DAT_ram_0040e4c0 = DAT_ram_0040e4e0;
  DAT_ram_0040e4c8 = DAT_ram_0040e4d0;
  return;
}



void FUN_ram_0040a00c(void)

{
  int in_a2;
  uint unaff_a3;
  uint uVar1;
  
  for (uVar1 = 0; uVar1 != unaff_a3; uVar1 = uVar1 + 1 & 0xff) {
    *(char *)(in_a2 + 10) = (char)uVar1;
    in_a2 = in_a2 + 0xc;
  }
  return;
}



void phytype2mode(void)

{
  return;
}



void rc_set_rate_limit_id(void)

{
  byte in_a2;
  uint unaff_a3;
  uint uVar1;
  undefined *puVar2;
  byte unaff_a4;
  undefined uVar3;
  byte unaff_a5;
  byte bVar4;
  
  uVar1 = unaff_a3 & 0xff;
  if (uVar1 < 2) {
    if (in_a2 != 2) {
      if (in_a2 < 3) {
        if (in_a2 != 0) {
          if (in_a2 != 1) {
            return;
          }
          if ((unaff_a4 != 0xff) || (unaff_a5 != 0xff)) {
            if (unaff_a5 < unaff_a4) {
              return;
            }
            uVar1 = uVar1 + 2;
            if (10 < unaff_a5) {
              return;
            }
            goto LAB_ram_0040a15c;
          }
          puVar2 = &DAT_ram_0040d36c + (uVar1 + 2) * 2;
          *puVar2 = 0;
          uVar3 = 10;
          goto LAB_ram_0040a14c;
        }
        bVar4 = 1;
        if (unaff_a4 != 0xff) {
          bVar4 = in_a2;
        }
        if (bVar4 != 0) {
          bVar4 = 1;
          if (unaff_a5 != 0xff) {
            bVar4 = in_a2;
          }
          if (bVar4 != 0) {
            puVar2 = &DAT_ram_0040d36c + uVar1 * 2;
            *puVar2 = 0;
            uVar3 = 3;
            goto LAB_ram_0040a14c;
          }
        }
        if (unaff_a5 < unaff_a4) {
          return;
        }
        if (3 < unaff_a5) {
          return;
        }
      }
      else {
        if (in_a2 == 3) {
          if ((unaff_a4 == 0xff) && (unaff_a5 == 0xff)) {
            puVar2 = &DAT_ram_0040d36c + (uVar1 + 6) * 2;
            *puVar2 = 0;
            uVar3 = 7;
LAB_ram_0040a14c:
            puVar2[1] = uVar3;
            return;
          }
          if (unaff_a5 < unaff_a4) {
            return;
          }
          uVar1 = uVar1 + 6;
          if (7 < unaff_a5) {
            return;
          }
        }
        else {
          if (in_a2 != 4) {
            return;
          }
          if ((unaff_a4 == 0xff) && (unaff_a5 == 0xff)) {
            puVar2 = &DAT_ram_0040d36c + (uVar1 + 8) * 2;
            *puVar2 = 0;
            uVar3 = 8;
            goto LAB_ram_0040a14c;
          }
          if (unaff_a5 < unaff_a4) {
            return;
          }
          if (8 < unaff_a5) {
            return;
          }
          uVar1 = uVar1 + 8;
        }
      }
LAB_ram_0040a15c:
      (&DAT_ram_0040d36c)[uVar1 * 2] = unaff_a4;
      (&DAT_ram_0040d36d)[uVar1 * 2] = unaff_a5;
      return;
    }
    if ((unaff_a4 == 0xff) && (unaff_a5 == 0xff)) {
      puVar2 = &DAT_ram_0040d36c + (uVar1 + 4) * 2;
      *puVar2 = 0;
      uVar3 = 0xb;
      goto LAB_ram_0040a14c;
    }
    if ((unaff_a4 <= unaff_a5) && (uVar1 = uVar1 + 4, unaff_a5 < 0xc)) goto LAB_ram_0040a15c;
  }
  return;
}



void rcUpdatePhyMode(void)

{
  undefined *in_a2;
  undefined *puVar1;
  char unaff_a3;
  int iVar2;
  uint uVar3;
  char unaff_a4;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = *(int *)(in_a2 + 0x5c);
  in_a2[0x15] = unaff_a3;
  if (iVar2 == 0) {
    phytype2mode(0,0);
    iVar2 = (iVar2 * 2 + (uint)(byte)in_a2[0x77]) * 2;
    uVar4 = (uint)(byte)(&DAT_ram_0040d36c)[iVar2];
    if ((uVar4 < 4) && (uVar4 = (uint)(byte)(&DAT_ram_0040d36d)[iVar2], 2 < uVar4)) {
      uVar4 = 3;
    }
    *(undefined **)(in_a2 + 0x68) = &DAT_ram_0040d150;
    *(undefined **)(in_a2 + 0x60) = &DAT_ram_0040d150 + uVar4 * 0xc;
    in_a2[4] = 0;
    in_a2[5] = 3;
    in_a2[0x78] = 3;
    *(undefined **)(in_a2 + 0x6c) = &LAB_ram_004024d8;
    puVar1 = &DAT_ram_0040d174;
  }
  else {
    if (iVar2 == 1) {
      puVar5 = &DAT_ram_0040d1e0;
      uVar4 = 10;
      if (unaff_a4 != '\0') {
        puVar5 = &DAT_ram_0040d180;
      }
      in_a2[4] = 0;
      if (unaff_a4 != '\0') {
        uVar4 = 7;
      }
      in_a2[0x78] = 7;
      *(undefined **)(in_a2 + 0x68) = puVar5;
      in_a2[5] = (char)uVar4;
      *(undefined **)(in_a2 + 0x6c) = &LAB_ram_004024bc;
      if (((('\v' < unaff_a3) && (uVar4 = 5, '\x10' < unaff_a3)) && (uVar4 = 3, '\x15' < unaff_a3))
         && (uVar4 = 2, '\x1d' < unaff_a3)) {
        uVar4 = 0;
      }
      iVar2 = 1;
      phytype2mode(1,unaff_a4,&LAB_ram_004024bc);
      iVar2 = (iVar2 * 2 + (uint)(byte)in_a2[0x77]) * 2;
      uVar3 = (uint)(byte)(&DAT_ram_0040d36c)[iVar2];
      if (((byte)(&DAT_ram_0040d36c)[iVar2] <= uVar4) &&
         (uVar3 = uVar4, (byte)(&DAT_ram_0040d36d)[iVar2] < uVar4)) {
        uVar3 = (uint)(byte)(&DAT_ram_0040d36d)[iVar2];
      }
      puVar1 = &DAT_ram_0040d234;
      *(undefined **)(in_a2 + 0x60) = puVar5 + uVar3 * 0xc;
      if (unaff_a4 != '\0') {
        puVar1 = &DAT_ram_0040d1d4;
      }
    }
    else {
      in_a2[4] = 0;
      *(undefined **)(in_a2 + 0x68) = &DAT_ram_0040d150;
      in_a2[5] = 3;
      puVar1 = &DAT_ram_0040d174;
      in_a2[0x78] = 3;
      *(undefined **)(in_a2 + 0x60) = &DAT_ram_0040d174;
      *(undefined **)(in_a2 + 0x6c) = &LAB_ram_004024d8;
    }
  }
  *(undefined **)(in_a2 + 100) = puVar1;
  in_a2[0x79] = unaff_a4;
  *(undefined *)(*(int *)(in_a2 + 0x60) + 0xb) = 0;
  *(undefined4 *)(in_a2 + 0x58) = 500000;
  *(undefined4 *)(in_a2 + 0x28) = 0;
  *(undefined4 *)(in_a2 + 0x24) = 0;
  *(undefined4 *)(in_a2 + 0x38) = 0;
  in_a2[0x16] = 0;
  in_a2[0x17] = 0;
  in_a2[6] = 0;
  *in_a2 = 0x7f;
  in_a2[1] = 0x7f;
  in_a2[2] = 0x7f;
  in_a2[3] = 0x7f;
  return;
}



void rcAttach(void)

{
  DAT_ram_0040e56a = 0;
  DAT_ram_0040e568 = 0;
  DAT_ram_0040e569 = 0;
  FUN_ram_0040a00c(&DAT_ram_0040d2d0,0xc);
  FUN_ram_0040a00c(&DAT_ram_0040d264,9);
  FUN_ram_0040a00c(&DAT_ram_0040d1e0,0xb);
  FUN_ram_0040a00c(&DAT_ram_0040d180,8);
  FUN_ram_0040a00c(&DAT_ram_0040d150,4);
  return;
}



void rcGetTrc(void)

{
  return;
}



void trc_onDisconnect(void)

{
  return;
}



void trc_onScanStart(void)

{
  int in_a2;
  
  if (in_a2 != 0) {
    *(byte *)(in_a2 + 0x14) = *(byte *)(in_a2 + 0x14) | 5;
  }
  return;
}



void trc_onScanDone(void)

{
  int in_a2;
  
  if (in_a2 != 0) {
    *(byte *)(in_a2 + 0x14) = *(byte *)(in_a2 + 0x14) & 0xfa;
  }
  return;
}



void rc_enable_trc(void)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint in_a2;
  undefined *__s1;
  undefined1 *unaff_a3;
  undefined1 *puVar5;
  uint unaff_a4;
  undefined2 unaff_a5;
  uint uVar6;
  uint uVar7;
  undefined1 *__src;
  
  bVar4 = DAT_ram_0040e56a;
  uVar6 = unaff_a4 & 0xff;
  uVar7 = in_a2 & 0xff;
  iVar1 = uVar6 * -4;
  bVar2 = (byte)uVar6;
  __src = unaff_a3;
  if ((DAT_ram_0040e56a >> (bVar2 & 0x1f) & 1) == 0) {
LAB_ram_0040a3de:
    bVar3 = (byte)(1 << 0x20 - (' ' - (bVar2 & 0x1f)));
    DAT_ram_0040e56a = bVar3 | bVar4;
    (&DAT_ram_0040e568)[uVar7] = bVar3 | (&DAT_ram_0040e568)[uVar7];
    memset(&DAT_ram_0040e56c + iVar1,0,0x7c);
    (&DAT_ram_0040e58c)[uVar6 * -2] = unaff_a5;
    (&DAT_ram_0040e5e3)[iVar1] = (char)uVar7;
    (&DAT_ram_0040e5e2)[iVar1] = bVar2;
    memcpy(&DAT_ram_0040e586 + iVar1,__src,6);
    printf("add %d\n",uVar6,6,-uVar6);
  }
  else {
    puVar5 = &DAT_ram_0040e568;
    if (((byte)(&DAT_ram_0040e568)[uVar7] >> (bVar2 & 0x1f) & 1) != 0) {
      __s1 = &DAT_ram_0040e586 + iVar1;
      unaff_a4 = 6;
      memcmp(__s1,unaff_a3,6);
      puVar5 = unaff_a3;
      if (__s1 == (undefined *)0x0) goto LAB_ram_0040a3de;
    }
    printf("add mismatch\n",puVar5,unaff_a4,-uVar6);
  }
  return;
}



void rc_get_mask(void)

{
  return;
}



void rc_disable_trc(void)

{
  byte bVar1;
  uint in_a2;
  uint uVar2;
  uint unaff_a4;
  uint uVar3;
  uint uVar4;
  
  uVar2 = unaff_a4 & 0xff;
  bVar1 = (&DAT_ram_0040e568)[in_a2 & 0xff];
  if ((bVar1 >> ((byte)uVar2 & 0x1f) & 1) == 0) {
    printf("rm mis\n",uVar2,&DAT_ram_0040e568,(uint)bVar1);
  }
  else {
    uVar3 = (uint)(0xfffffffefffffffe >> 0x20 - ((byte)uVar2 & 0x1f)) & 0xff;
    (&DAT_ram_0040e568)[in_a2 & 0xff] = (byte)uVar3 & bVar1;
    uVar4 = (uint)DAT_ram_0040e56a;
    uVar3 = uVar3 & uVar4;
    DAT_ram_0040e56a = (byte)uVar3;
    printf("rm %d\n",uVar2,uVar3,uVar4);
  }
  return;
}



void rc_disable_trc_by_interface(void)

{
  uint in_a2;
  
  DAT_ram_0040e56a = (&DAT_ram_0040e568)[in_a2 & 0xff] ^ DAT_ram_0040e56a;
  (&DAT_ram_0040e568)[in_a2 & 0xff] = 0;
  return;
}



void rc_get_sta_trc(void)

{
  uint in_a2;
  
  bit_popcount((&DAT_ram_0040e568)[in_a2 & 0xff]);
  return;
}



void rc_get_trc(void)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint in_a2;
  undefined *puVar4;
  void *unaff_a3;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = (uint)(byte)(&DAT_ram_0040e568)[in_a2 & 0xff];
  while( true ) {
    uVar5 = -uVar7 & uVar7;
    bVar1 = (byte)uVar5;
    bVar2 = bVar1 >> 4 == 0;
    bVar1 = bVar2 * (bVar1 & 0xf) + !bVar2 * (bVar1 >> 4);
    bVar3 = (bVar1 >> 2 & 3) == 0;
    iVar6 = 0x1f - (uint)(byte)((uVar5 == 0) * ' ' +
                               (uVar5 != 0) *
                               (bVar2 << 2 | 0x18U | bVar3 << 1 |
                               bVar3 * ((bVar1 >> 1 & 1) == 0) + !bVar3 * ((bVar1 >> 3 & 1) == 0)));
    if (iVar6 < 0) {
      return;
    }
    puVar4 = &DAT_ram_0040e586;
    memcmp(&DAT_ram_0040e586,unaff_a3,6);
    if (puVar4 == (undefined *)0x0) break;
    uVar7 = uVar7 & (1 << 0x20 - (' ' - ((byte)iVar6 & 0x1f)) ^ 0xffffffffU);
  }
  return;
}



void rc_get_trc_by_index(void)

{
  return;
}



void rc_only_sta_trc(void)

{
  bit_popcount(DAT_ram_0040e56a);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_ram_0040a630(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  
  lldesc_build_chain(&DAT_ram_00411720,0x48,&DAT_ram_0040f188,0x2598,0x644,1,0x41194c,0x411950);
  wDevCtrl._0_2_ = 6;
  for (puVar2 = wDevCtrl._8_4_; puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
    memw();
    memw();
    memw();
    *puVar2 = *puVar2 & 0xfffff000 | (*puVar2 & 0xfff) - 4 & 0xfff;
    memw();
    memw();
    memw();
    *puVar2 = *puVar2 & 0xff000fff;
    puVar1 = (undefined4 *)puVar2[1];
    *puVar1 = 0xdeadbeef;
    memw();
    *(undefined4 *)((int)puVar1 + (*puVar2 & 0xfff)) = 0xdeadbeef;
  }
  lldesc_build_chain(&DAT_ram_0040e9f8,0x3c,&DAT_ram_0040e9e4,0x14,4,0,0x41196c,0x411970);
  memw();
  wDevCtrl._28_4_ = 0x411968;
  wDevCtrl._2_2_ = 0;
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  wDevCtrl._24_4_ = wDevCtrl._24_4_ & 0x9ffff000 | 0x80000004;
  memw();
  wDevCtrl._32_4_ = puVar2;
  lldesc_build_chain(&DAT_ram_0040f134,0x54,&DAT_ram_0040ea34,0x700,0x100,1,0x411974,0x411978);
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
  wDevCtrl[4] = 7;
  wDevCtrl[5] = 0;
  _DAT_ram_3ff20000 = _DAT_ram_3ff20000 & 0xdfffff00;
  _DAT_ram_3ff20008 = wDevCtrl._8_4_;
  _DAT_ram_3ff2000c = 0x411970;
  _DAT_ram_3ff20010 = puVar2;
  _DAT_ram_3ff2007c = &DAT_ram_00411720;
  _DAT_ram_3ff20080 = &DAT_ram_00411720;
  _DAT_ram_3ff20084 = &DAT_ram_0040f134;
  _DAT_ram_3ff20088 = &DAT_ram_0040f134;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_Option_Init(void)

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
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_3ff20c14 = _DAT_ram_3ff20c14 & 0xfffff000 | 0xc00000f0;
  _DAT_ram_3ff20c68 = (_DAT_ram_3ff20c68 >> 0x10) + 0x12 & 0xff | _DAT_ram_3ff20c68 & 0xff00ffff;
  _DAT_ram_3ff20c6c = _DAT_ram_3ff20c6c & 0xffff0000 | 0x1616;
  _DAT_ram_3ff20c88 = _DAT_ram_3ff20c88 & 0xffdfbff7 | 0x8084a000;
  _DAT_ram_3ff20c90 = _DAT_ram_3ff20c90 | 8;
  _DAT_ram_3ff20c94 = _DAT_ram_3ff20c94 | 3;
  _DAT_ram_3ff20e08 = _DAT_ram_3ff20e08 & 0xffffff0f;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_Enable_Beacon_Tsf(void)

{
  memw();
  memw();
  _DAT_ram_3ff21058 = _DAT_ram_3ff21058 | 0xc4000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_Disable_Beacon_Tsf(void)

{
  memw();
  memw();
  _DAT_ram_3ff21058 = _DAT_ram_3ff21058 & 0x3bffffff;
  return;
}



void wDev_Set_Beacon_Int(void)

{
  undefined4 in_a2;
  
  DAT_ram_0040d384 = in_a2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_Reset_TBTT(void)

{
  undefined4 in_a2;
  
  wDev_Disable_Beacon_Tsf();
  PPWdtReset(in_a2);
  DAT_ram_0040e9dc = 0;
  memw();
  _DAT_ram_3ff2105c = 0;
  memw();
  _DAT_ram_3ff21060 = 0;
  wDev_Enable_Beacon_Tsf(0,&DAT_ram_3ff21060);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_Get_Next_TBTT(void)

{
  do {
    DAT_ram_0040e9dc = DAT_ram_0040d384 + DAT_ram_0040e9dc;
    memw();
  } while (DAT_ram_0040d384 < (uint)(DAT_ram_0040e9dc - _DAT_ram_3ff21048));
  __udivsi3(DAT_ram_0040e9dc - _DAT_ram_3ff21048,1000,&DAT_ram_0040e9dc,_DAT_ram_3ff21048,
            &DAT_ram_3ff21048);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_MacTim1SetFunc(void)

{
  undefined4 in_a2;
  
  memw();
  memw();
  DAT_ram_0040e9d8 = in_a2;
  _DAT_ram_3ff21058 = _DAT_ram_3ff21058 | 0x80000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDevForceAck6M(void)

{
  char in_a2;
  
  if (in_a2 == '\0') {
    _DAT_ram_3ff2040c = 0x70c07;
  }
  else {
    _DAT_ram_3ff2040c = 0x70b00;
  }
  memw();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_SetMacAddress(void)

{
  char in_a2;
  uint *puVar1;
  byte *unaff_a3;
  uint uVar2;
  
  uVar2 = (uint)(unaff_a3[2] | *unaff_a3) | (uint)unaff_a3[3] << 0x18;
  if (in_a2 == '\0') {
    memw();
    _DAT_ram_3ff20c4c = (uint)unaff_a3[4];
    memw();
    memw();
    _DAT_ram_3ff20c58 = 0xffffffff;
    puVar1 = (uint *)&DAT_ram_3ff20c5c;
    _DAT_ram_3ff20c48 = uVar2;
  }
  else {
    memw();
    _DAT_ram_3ff20c54 = (uint)unaff_a3[4];
    memw();
    memw();
    _DAT_ram_3ff20c60 = 0xffffffff;
    puVar1 = (uint *)&DAT_ram_3ff20c64;
    _DAT_ram_3ff20c50 = uVar2;
  }
  memw();
  *puVar1 = 0xffff;
  memw();
  memw();
  *puVar1 = *puVar1 | 0x10000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_SetBssid(void)

{
  char in_a2;
  uint *puVar1;
  byte *unaff_a3;
  undefined4 *puVar2;
  
  if (in_a2 == '\0') {
    puVar1 = (uint *)&DAT_ram_3ff20c3c;
    memw();
    _DAT_ram_3ff20c3c = _DAT_ram_3ff20c3c & 0xfffeffff;
    memw();
    _DAT_ram_3ff20c28 = (uint)(unaff_a3[2] | *unaff_a3) | (uint)unaff_a3[3] << 0x18;
    memw();
    _DAT_ram_3ff20c2c = (uint)unaff_a3[4];
    memw();
    puVar2 = (undefined4 *)&DAT_ram_3ff20c38;
  }
  else {
    puVar1 = (uint *)&DAT_ram_3ff20c44;
    memw();
    _DAT_ram_3ff20c44 = _DAT_ram_3ff20c44 & 0xfffeffff;
    memw();
    _DAT_ram_3ff20c30 = (uint)(unaff_a3[2] | *unaff_a3) | (uint)unaff_a3[3] << 0x18;
    memw();
    _DAT_ram_3ff20c34 = (uint)unaff_a3[4];
    memw();
    puVar2 = (undefined4 *)&DAT_ram_3ff20c40;
  }
  memw();
  *puVar2 = 0xffffffff;
  memw();
  *puVar1 = 0xffff;
  memw();
  memw();
  *puVar1 = *puVar1 | 0x10000;
  return;
}



void wDev_ClearBssid(void)

{
  char in_a2;
  uint *puVar1;
  
  if (in_a2 == '\0') {
    puVar1 = (uint *)&DAT_ram_3ff20c3c;
  }
  else {
    puVar1 = (uint *)&DAT_ram_3ff20c44;
  }
  memw();
  memw();
  *puVar1 = *puVar1 & 0xfffeffff;
  return;
}



void wDev_SetRxPolicy(void)

{
  int in_a2;
  undefined unaff_a3;
  code *pcVar1;
  code *unaff_a4;
  
  if (in_a2 == 0) {
    wDev_ClearBssid(unaff_a3);
  }
  else {
    pcVar1 = ethbroadcast;
    if ((in_a2 == 1) || ((in_a2 == 2 && (pcVar1 = unaff_a4, unaff_a4 != (code *)0x0)))) {
      wDev_SetBssid(unaff_a3,pcVar1);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_remove_KeyEntry(void)

{
  byte in_a2;
  
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
  _DAT_ram_3ff2080c = (uint)(0xfffffffefffffffe >> 0x20 - (in_a2 & 0x1f)) & _DAT_ram_3ff2080c;
  uRam3ff21400 = 0;
  uRam3ff21404 = 0;
  uRam3ff21408 = 0;
  uRam3ff2140c = 0;
  uRam3ff21410 = 0;
  uRam3ff21414 = 0;
  uRam3ff21418 = 0;
  uRam3ff2141c = 0;
  uRam3ff21420 = 0;
  uRam3ff21424 = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_Insert_KeyEntry(void)

{
  bool bVar1;
  byte bVar2;
  uint in_a2;
  uint unaff_a3;
  int iVar3;
  uint unaff_a4;
  byte *unaff_a5;
  int iVar4;
  int unaff_a6;
  void *unaff_a7;
  uint uVar5;
  uint uVar6;
  size_t in_stack_00000000;
  
  uVar5 = in_a2 & 0xff;
  uVar6 = unaff_a3 & 0xff;
  iVar3 = (uint)unaff_a5[3] * 0x1000000 + (uint)unaff_a5[2] + (uint)*unaff_a5;
  bVar2 = unaff_a5[4];
  bVar1 = uVar5 == 5;
  if (bVar1) {
    uVar5 = 1;
  }
  if ((unaff_a6 == 2) && (memw(), unaff_a4 == _DAT_ram_3ff2147c >> 0x1e)) {
    wDev_remove_KeyEntry(3,iVar3);
  }
  iVar4 = 7;
  if ((uVar5 != 1) && (iVar4 = 6, 5 < unaff_a6)) {
    iVar4 = 2;
  }
  if ((1 < unaff_a6 && uVar6 < 2) &&
     ((1 << 0x20 - (' ' - ((byte)unaff_a6 & 0x1f)) & *(uint *)(pm_usec2rtc + uVar6 * 4 + 4)) != 0))
  {
    iVar4 = 3;
  }
  memw();
  iRam3ff21404 = (unaff_a3 & 1) * 0x1000000 + unaff_a4 * 0x40000000 + (uint)bVar2 + (uint)bVar1 +
                 (uVar5 & 7) * 0x40000 + iVar4 * 0x200000;
  memw();
  memw();
  uVar5 = 1 << 0x20 - (' ' - ((byte)unaff_a6 & 0x1f));
  _DAT_ram_3ff2080c = uVar5 | _DAT_ram_3ff2080c;
  memw();
  iRam3ff21400 = iVar3;
  if (1 < unaff_a6 && uVar6 < 2) {
    iVar3 = (uVar6 + 0xc) * 4;
    *(uint *)(wDevCtrl + iVar3 + 8) = uVar5 | *(uint *)(wDevCtrl + iVar3 + 8);
  }
  memcpy((void *)0x3ff21408,unaff_a7,in_stack_00000000);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_Initialize(void)

{
  uint uVar1;
  uint uVar2;
  
  memw();
  _DAT_ram_3ff20c18 = 0;
  memw();
  _DAT_ram_3ff20c24 = 0xffffffff;
  wDev_Option_Init(&DAT_ram_3ff20c24,0xffffffff);
  memw();
  _DAT_ram_3ff20800 = 0x30000;
  memw();
  _DAT_ram_3ff20804 = 0x30000;
  wDev_Insert_KeyEntry(3,0,0,ethbroadcast,0,ethbroadcast,6);
  wDev_Insert_KeyEntry(3,1,0,ethbroadcast,1,ethbroadcast,6);
  memw();
  _DAT_ram_3ff20808 = 0;
  FUN_ram_0040a630(&DAT_ram_3ff20808,1,0,ethbroadcast,1,ethbroadcast);
  memw();
  _DAT_ram_3ff20400 = 0x76503210;
  memw();
  _DAT_ram_3ff20404 = 0xbbbbbbbb;
  memw();
  _DAT_ram_3ff20408 = 0xbbbbbbbb;
  memw();
  memw();
  memw();
  uVar1 = _DAT_ram_3ff2006c & 0xffffffef | 0x707;
  memw();
  memw();
  uVar2 = _DAT_ram_3ff2006c & 0xffffefef | 0x707;
  memw();
  _DAT_ram_3ff2006c = uVar2;
  wDev_ClearBssid(0,uVar2,uVar1,ethbroadcast,1,ethbroadcast);
  wDev_ClearBssid(1,uVar2,uVar1,ethbroadcast,1,ethbroadcast);
  memw();
  memw();
  memw();
  memw();
  memw();
  DAT_ram_004118c8 = 1;
  _DAT_ram_3ff20004 = _DAT_ram_3ff20004 & 0x7fffffff;
  _DAT_ram_3ff20178 = _DAT_ram_3ff20178 | 2;
  _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
  return;
}



void wDev_remove_KeyEntry_all_cnx(void)

{
  uint in_a2;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(pm_usec2rtc + (in_a2 & 0xff) * 4 + 4);
  uVar1 = *(uint *)(wDevCtrl + (in_a2 & 0xff) * 4 + 0x38);
  iVar3 = 0;
  do {
    if ((((uVar2 ^ 0xffffffff) & uVar1) >> ((byte)iVar3 & 0x1f) & 1) != 0) {
      wDev_remove_KeyEntry(iVar3,wDevCtrl);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x19);
  return;
}



void wDev_Crypto_Conf(void)

{
  char in_a2;
  uint *puVar1;
  uint unaff_a3;
  
  if (in_a2 == '\0') {
    puVar1 = (uint *)&DAT_ram_3ff20800;
  }
  else {
    puVar1 = (uint *)&DAT_ram_3ff20804;
  }
  memw();
  *puVar1 = 0x30303;
  if ((unaff_a3 & 0xfb) == 1) {
    memw();
    memw();
    *puVar1 = *puVar1 | 0x10000000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDev_Crypto_Disable(void)

{
  uint in_a2;
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(wDevCtrl + (in_a2 & 0xff) * 4 + 0x38);
  if ((in_a2 & 0xff) == 0) {
    puVar1 = (undefined4 *)&DAT_ram_3ff20800;
  }
  else {
    puVar1 = (undefined4 *)&DAT_ram_3ff20804;
  }
  memw();
  *puVar1 = 0x30000;
  memw();
  memw();
  _DAT_ram_3ff2080c = (uVar2 ^ 0xffffffff) & _DAT_ram_3ff2080c;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDevDisableRx(void)

{
  memw();
  memw();
  DAT_ram_004118c8 = 1;
  _DAT_ram_3ff20004 = _DAT_ram_3ff20004 & 0x7fffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wDevEnableRx(void)

{
  memw();
  memw();
  DAT_ram_004118c8 = 0;
  _DAT_ram_3ff20004 = _DAT_ram_3ff20004 | 0x80000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wdev_go_sniffer(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = _DAT_ram_3ff20804;
  wDevCtrl[5] = 1;
  memw();
  _DAT_ram_3ff2000c = wDevCtrl._48_4_;
  memw();
  _DAT_ram_3ff20c88 = _DAT_ram_3ff20c88 | 0x40000;
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_3ff20800 = _DAT_ram_3ff20800 & 0xfffeffff | 0x3000000;
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_3ff20804 = _DAT_ram_3ff20804 & 0xfffeffff | 0x3000000;
  memw();
  memw();
  _DAT_ram_3ff20c58 = 0;
  memw();
  _DAT_ram_3ff20c5c = 0x10000;
  memw();
  _DAT_ram_3ff20c38 = 0;
  memw();
  _DAT_ram_3ff20c3c = 0x10000;
  if (NMIIrqIsOn == '\0') {
    vPortEnterCritical(&NMIIrqIsOn,&DAT_ram_3ff20c3c,&DAT_ram_3ff20c38,uVar1);
    memw();
    memw();
  }
  WDEV_INTEREST_EVENT = WDEV_INTEREST_EVENT | 0xc;
  memw();
  _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
  if (NMIIrqIsOn == '\0') {
    memw();
    vPortExitCritical(WDEV_INTEREST_EVENT,&DAT_ram_3ff20c18,0,uVar1);
  }
  uVar2 = _DAT_ram_60009d44;
  memw();
  _DAT_ram_60009d44 = _DAT_ram_60009d44 & 0xdbffffff;
  memw();
  ets_delay_us(15000,_DAT_ram_60009d44,uVar2,uVar1);
  memw();
  memw();
  _DAT_ram_3ff20c94 = _DAT_ram_3ff20c94 & 0xfffffffe;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wdev_set_sniffer_addr(void)

{
  memw();
  memw();
  memw();
  memw();
  memw();
  _DAT_ram_3ff2006c = _DAT_ram_3ff2006c | 7;
  memw();
  wDev_SetMacAddress(0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wdev_exit_sniffer(void)

{
  uint uVar1;
  
  uVar1 = _DAT_ram_60009d44;
  if (wDevCtrl[5] != '\0') {
    memw();
    _DAT_ram_3ff20c94 = _DAT_ram_3ff20c94 | 1;
    memw();
    memw();
    _DAT_ram_60009d44 = _DAT_ram_60009d44 | 0x24000000;
    memw();
    if (NMIIrqIsOn == '\0') {
      vPortEnterCritical(&NMIIrqIsOn,_DAT_ram_60009d44,uVar1);
      memw();
      memw();
    }
    WDEV_INTEREST_EVENT = WDEV_INTEREST_EVENT & 0xfffffff3;
    memw();
    _DAT_ram_3ff20c18 = WDEV_INTEREST_EVENT;
    if (NMIIrqIsOn == '\0') {
      memw();
      vPortExitCritical(WDEV_INTEREST_EVENT,&DAT_ram_3ff20c18,0);
    }
    memw();
    _DAT_ram_3ff20c58 = 0xffffffff;
    memw();
    _DAT_ram_3ff20c5c = 0x1ffff;
    memw();
    _DAT_ram_3ff20c38 = 0xffffffff;
    memw();
    _DAT_ram_3ff20c3c = 0xffff;
    memw();
    memw();
    memw();
    _DAT_ram_3ff20800 = _DAT_ram_3ff20800 & 0xfcffffff | 0x10000;
    memw();
    memw();
    memw();
    memw();
    _DAT_ram_3ff20804 = _DAT_ram_3ff20804 & 0xfcffffff | 0x10000;
    memw();
    memw();
    _DAT_ram_3ff20c88 = _DAT_ram_3ff20c88 & 0xfffbffff;
    memw();
    memw();
    _DAT_ram_3ff2000c = 0x41195c;
    wDevCtrl[5] = '\0';
  }
  return;
}



void wdev_reg_store(void)

{
  int in_a2;
  int iVar1;
  undefined4 *unaff_a3;
  int unaff_a4;
  
  iVar1 = in_a2 - (int)unaff_a3;
  while (unaff_a4 = unaff_a4 + -1, unaff_a4 != -1) {
    memw();
    *(undefined4 *)((int)unaff_a3 + iVar1) = *unaff_a3;
    unaff_a3 = unaff_a3 + 1;
  }
  return;
}



void wdev_reg_restore(void)

{
  undefined4 *in_a2;
  int unaff_a3;
  int iVar1;
  int unaff_a4;
  
  iVar1 = unaff_a3 - (int)in_a2;
  while (unaff_a4 = unaff_a4 + -1, unaff_a4 != -1) {
    memw();
    *in_a2 = *(undefined4 *)((int)in_a2 + iVar1);
    in_a2 = in_a2 + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wdev_hw_mac_reset(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_50 [8];
  int iStack48;
  int iStack44;
  uint *puStack40;
  
  pcVar4 = *(code **)(_g_osi_funcs_p + 0x94);
  iVar1 = 0x169;
  (*pcVar4)(0x169,2,pcVar4);
  if (iVar1 == 0) {
    printf("malloc error\n",2,pcVar4);
  }
  else {
    wDevDisableRx(iVar1,2,pcVar4);
    wdev_reg_store(iVar1,&DAT_ram_3ff20000,0x77);
    wdev_reg_store(iVar1 + 0x1dc,&DAT_ram_3ff20400,9);
    wdev_reg_store(iVar1 + 0x200,&DAT_ram_3ff20800,0xc);
    wdev_reg_store(iVar1 + 0x230,&DAT_ram_3ff20c00,0x96);
    iStack48 = iVar1 + 0x488;
    wdev_reg_store(iStack48,0x3ff21000,0x47);
    puVar2 = (uint *)&DAT_ram_3ff20158;
    puVar3 = local_50;
    do {
      memw();
      uVar5 = *puVar2;
      puVar2 = puVar2 + -6;
      *puVar3 = uVar5 >> 0x14;
      puVar3 = puVar3 + 1;
    } while (puVar2 != (uint *)0x3ff20098);
    puStack40 = &DAT_ram_00411720;
    iStack44 = 0;
    do {
      memw();
      memw();
      memw();
      memw();
      memw();
      memw();
      printf("i=%d,size: %d, len:%d, offset:%d, sosf:%d, eof:%d, owner:%d, buf:%p, next:%p\n",
             iStack44,*puStack40 & 0xfff,*puStack40 >> 0xc & 0xfff,*puStack40 >> 0x18 & 0x1f,
             *puStack40 >> 0x1d & 1,*puStack40 >> 0x1e & 1,*puStack40 >> 0x1f,puStack40[1],
             puStack40[2]);
      iStack44 = iStack44 + 1;
      puStack40 = puStack40 + 3;
    } while (iStack44 != 6);
    puStack40 = &DAT_ram_0040f134;
    iStack44 = 0;
    do {
      memw();
      memw();
      memw();
      memw();
      memw();
      memw();
      printf("i=%d,AP size: %d, len:%d, offset:%d, sosf:%d, eof:%d, owner:%d, buf:%p, next:%p\n",
             iStack44,*puStack40 & 0xfff,*puStack40 >> 0xc & 0xfff,*puStack40 >> 0x18 & 0x1f,
             *puStack40 >> 0x1d & 1,*puStack40 >> 0x1e & 1,*puStack40 >> 0x1f,puStack40[1],
             puStack40[2]);
      iStack44 = iStack44 + 1;
      puStack40 = puStack40 + 3;
    } while (iStack44 != 7);
    puVar2 = &DAT_ram_0040e9f8;
    iVar8 = 0;
    do {
      memw();
      memw();
      memw();
      memw();
      memw();
      memw();
      uVar5 = *puVar2 >> 0xc & 0xfff;
      uVar6 = *puVar2 >> 0x18 & 0x1f;
      uVar7 = *puVar2 >> 0x1d & 1;
      iStack44 = iVar8;
      puStack40 = puVar2;
      printf("i=%d,TX size: %d, len:%d, offset:%d, sosf:%d, eof:%d, owner:%d, buf:%p, next:%p\n",
             iVar8,*puVar2 & 0xfff,uVar5,uVar6,uVar7,*puVar2 >> 0x1e & 1,*puVar2 >> 0x1f,puVar2[1],
             puVar2[2]);
      iVar8 = iStack44 + 1;
      puVar2 = puStack40 + 3;
    } while (iVar8 != 5);
    memw();
    memw();
    memw();
    _DAT_ram_60000d48 = _DAT_ram_60000d48 & 0xfffffffd;
    memw();
    memw();
    _DAT_ram_3ff20c70 = _DAT_ram_3ff20c70 | 0xf0;
    memw();
    wdev_reg_restore(&DAT_ram_3ff20000,iVar1,0x77,uVar5,uVar6,uVar7);
    wdev_reg_restore(&DAT_ram_3ff20400,iVar1 + 0x1dc,9,uVar5,uVar6,uVar7);
    wdev_reg_restore(&DAT_ram_3ff20800,iVar1 + 0x200,0xc,uVar5,uVar6,uVar7);
    wdev_reg_restore(&DAT_ram_3ff20c00,iVar1 + 0x230,0x96,uVar5,uVar6,uVar7);
    wdev_reg_restore(0x3ff21000,iStack48,0x47,uVar5,uVar6,uVar7);
    puVar2 = (uint *)&DAT_ram_3ff20158;
    puVar3 = local_50;
    do {
      memw();
      uVar7 = *puVar3 & 0xfff;
      uVar6 = uVar7 | *puVar2 & 0xfffff000;
      memw();
      *puVar2 = uVar6;
      uVar5 = _DAT_ram_3ff20c70;
      puVar2 = puVar2 + -6;
      puVar3 = puVar3 + 1;
    } while (puVar2 != (uint *)0x3ff20098);
    memw();
    _DAT_ram_3ff20c78 = 0;
    memw();
    _DAT_ram_3ff20178 = 2;
    memw();
    _DAT_ram_3ff20c70 = _DAT_ram_3ff20c70 & 0xffffff0f;
    memw();
    FUN_ram_0040a630(&DAT_ram_3ff20c70,_DAT_ram_3ff20c70,uVar5,uVar6,uVar7,0xfffff000);
    pcVar4 = *(code **)(_g_osi_funcs_p + 0xa4);
    (*pcVar4)(iVar1,pcVar4,uVar5,uVar6,uVar7,0xfffff000);
    wDevEnableRx(iVar1,pcVar4,uVar5,uVar6,uVar7,0xfffff000);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wdev_print_mac(void)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(_g_osi_funcs_p + 0x94);
  iVar1 = 0x169;
  (*pcVar2)(0x169,2,pcVar2);
  if (iVar1 == 0) {
    printf("malloc error\n",2,pcVar2);
  }
  else {
    wdev_reg_store(iVar1,&DAT_ram_3ff20000,0x77);
    wdev_reg_store(iVar1 + 0x1dc,&DAT_ram_3ff20400,9);
    wdev_reg_store(iVar1 + 0x200,&DAT_ram_3ff20800,0xc);
    wdev_reg_store(iVar1 + 0x230,&DAT_ram_3ff20c00,0x96);
    wdev_reg_store(iVar1 + 0x488,0x3ff21000,0x47);
    (**(code **)(_g_osi_funcs_p + 0xa4))(iVar1,*(code **)(_g_osi_funcs_p + 0xa4),0x47);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void wdev_dbg_reg(void)

{
  memw();
  printf("NOW: %x\n",_DAT_ram_3ff20c00);
  memw();
  printf("WDEVRX_CCK_ERRCNT: %x\n",_DAT_ram_3ff2017c);
  memw();
  printf("WDEVRX_OFDM_ERRCNT: %x\n",_DAT_ram_3ff20180);
  memw();
  printf("WDEVRX_AGC_ERRCNT: %x\n",_DAT_ram_3ff20184);
  memw();
  printf("WDEVRX_SF_CNT: %x\n",_DAT_ram_3ff20188);
  memw();
  printf("WDEVRX_ABORT_CNT: %x\n",_DAT_ram_3ff2018c);
  memw();
  printf("WDEVRX_FCS_ERRCNT: %x\n",_DAT_ram_3ff20190);
  memw();
  printf("WDEVRX_FIFO_OVFCNT: %x\n",_DAT_ram_3ff20194);
  memw();
  printf("WDEVRX_APENTRYBUF_FULLCNT: %x\n",_DAT_ram_3ff20198);
  memw();
  printf("WDEVRX_BUF_FULLCNT: %x\n",_DAT_ram_3ff2019c);
  memw();
  printf("WDEVRX_OTHER_UNICASTCNT: %x\n",_DAT_ram_3ff201a0);
  memw();
  printf("WDEVRX_TKIP_ERRCNT: %x\n",_DAT_ram_3ff201a4);
  memw();
  printf("WDEVRX_SAMEBM_ERRCNT: %x\n",_DAT_ram_3ff201a8);
  memw();
  printf("WDEVRXACK_INT_CNT: %x\n",_DAT_ram_3ff201ac);
  memw();
  printf("WDEVRXRTS_INT_CNT: %x\n",_DAT_ram_3ff201b0);
  memw();
  printf("WDEVRXCTS_INT_CNT: %x\n",_DAT_ram_3ff201b4);
  memw();
  printf("WDEVRXRIFS_INT_CNT: %x\n",_DAT_ram_3ff201b8);
  memw();
  printf("WDEVRXCTS_INT_CNT: %x\n",_DAT_ram_3ff201b4);
  memw();
  printf("WDEVRX_DATASUC_CNT: %x\n",_DAT_ram_3ff201bc);
  memw();
  printf("WDEVRX_END_CNT: %x\n",_DAT_ram_3ff201c0);
  memw();
  printf("WDEVDIAG0: %x\n",_DAT_ram_3ff20e2c);
  memw();
  printf("WDEVDIAG1: %x\n",_DAT_ram_3ff20e30);
  memw();
  printf("WDEVDIAG2: %x\n",_DAT_ram_3ff20e34);
  memw();
  printf("WDEVDIAG3: %x\n",_DAT_ram_3ff20e38);
  memw();
  printf("WDEVDIAG4: %x\n",_DAT_ram_3ff201cc);
  memw();
  printf("WDEVDIAG5: %x\n",_DAT_ram_3ff201d0);
  memw();
  printf("WDEVDIAG6: %x\n",_DAT_ram_3ff201d4);
  memw();
  printf("WDEVDIAG7: %x\n",_DAT_ram_3ff201d8);
  memw();
  printf("WDEVDIAG8: %x\n",_DAT_ram_3ff20410);
  memw();
  printf("WDEVDIAG9: %x\n",_DAT_ram_3ff20414);
  memw();
  printf("WDEVDIAG10: %x\n",_DAT_ram_3ff20418);
  memw();
  printf("WDEVDIAG11: %x\n",_DAT_ram_3ff20e3c);
  return;
}


