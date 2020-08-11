#pragma once

EXTERN_C
{
extern unsigned char badaspec_dat[];
extern unsigned int badaspec_dat_len;
extern unsigned char badbranch_dat[];
extern unsigned int badbranch_dat_len;
extern unsigned char baddate_dat[];
extern unsigned int baddate_dat_len;
extern unsigned char baddn_dat[];
extern unsigned int baddn_dat_len;
extern unsigned char badinv01_dat[];
extern unsigned int badinv01_dat_len;
extern unsigned char badvers_dat[];
extern unsigned int badvers_dat_len;
extern unsigned char bcast_dat[];
extern unsigned int bcast_dat_len;
extern unsigned char bext01_dat[];
extern unsigned int bext01_dat_len;
extern unsigned char bigcode_dat[];
extern unsigned int bigcode_dat_len;
extern unsigned char clerr_dat[];
extern unsigned int clerr_dat_len;
extern unsigned char cparam01_dat[];
extern unsigned int cparam01_dat_len;
extern unsigned char cparam02_dat[];
extern unsigned int cparam02_dat_len;
extern unsigned char dblreq_dat[];
extern unsigned int dblreq_dat_len;
extern unsigned char esc01_dat[];
extern unsigned int esc01_dat_len;
extern unsigned char esc02_dat[];
extern unsigned int esc02_dat_len;
extern unsigned char escnull_dat[];
extern unsigned int escnull_dat_len;
extern unsigned char escruri_dat[];
extern unsigned int escruri_dat_len;
extern unsigned char insuf_dat[];
extern unsigned int insuf_dat_len;
extern unsigned char intmeth_dat[];
extern unsigned int intmeth_dat_len;
extern unsigned char inv2543_dat[];
extern unsigned int inv2543_dat_len;
extern unsigned char invut_dat[];
extern unsigned int invut_dat_len;
extern unsigned char longreq_dat[];
extern unsigned int longreq_dat_len;
extern unsigned char ltgtruri_dat[];
extern unsigned int ltgtruri_dat_len;
extern unsigned char lwsdisp_dat[];
extern unsigned int lwsdisp_dat_len;
extern unsigned char lwsruri_dat[];
extern unsigned int lwsruri_dat_len;
extern unsigned char lwsstart_dat[];
extern unsigned int lwsstart_dat_len;
extern unsigned char mcl01_dat[];
extern unsigned int mcl01_dat_len;
extern unsigned char mismatch01_dat[];
extern unsigned int mismatch01_dat_len;
extern unsigned char mismatch02_dat[];
extern unsigned int mismatch02_dat_len;
extern unsigned char mpart01_dat[];
extern unsigned int mpart01_dat_len;
extern unsigned char multi01_dat[];
extern unsigned int multi01_dat_len;
extern unsigned char ncl_dat[];
extern unsigned int ncl_dat_len;
extern unsigned char noreason_dat[];
extern unsigned int noreason_dat_len;
extern unsigned char novelsc_dat[];
extern unsigned int novelsc_dat_len;
extern unsigned char quotbal_dat[];
extern unsigned int quotbal_dat_len;
extern unsigned char regaut01_dat[];
extern unsigned int regaut01_dat_len;
extern unsigned char regbadct_dat[];
extern unsigned int regbadct_dat_len;
extern unsigned char regescrt_dat[];
extern unsigned int regescrt_dat_len;
extern unsigned char scalar02_dat[];
extern unsigned int scalar02_dat_len;
extern unsigned char scalarlg_dat[];
extern unsigned int scalarlg_dat_len;
extern unsigned char sdp01_dat[];
extern unsigned int sdp01_dat_len;
extern unsigned char semiuri_dat[];
extern unsigned int semiuri_dat_len;
extern unsigned char test_dat[];
extern unsigned int test_dat_len;
extern unsigned char transports_dat[];
extern unsigned int transports_dat_len;
extern unsigned char trws_dat[];
extern unsigned int trws_dat_len;
extern unsigned char unkscm_dat[];
extern unsigned int unkscm_dat_len;
extern unsigned char unksm2_dat[];
extern unsigned int unksm2_dat_len;
extern unsigned char unreason_dat[];
extern unsigned int unreason_dat_len;
extern unsigned char wsinv_dat[];
extern unsigned int wsinv_dat_len;
extern unsigned char zeromf_dat[];
extern unsigned int zeromf_dat_len;

}

///////////////////////////////////////////////


const char* all_tests_name[] = {
    "badaspec",
    "badbranch",
    "baddate",
    "baddn",
    "badinv01",
    "badvers",
    "bcast",
    "bext01",
    "bigcode",
    "clerr",
    "cparam01",
    "cparam02",
    "dblreq",
    "esc01",
    "esc02",
    "escnull",
    "escruri",
    "insuf",
    "intmeth",
    "inv2543",
    "invut",
    "longreq",
    "ltgtruri",
    "lwsdisp",
    "lwsruri",
    "lwsstart",
    "mcl01",
    "mismatch01",
    "mismatch02",
    "mpart01",
    "multi01",
    "ncl",
    "noreason",
    "novelsc",
    "quotbal",
    "regaut01",
    "regbadct",
    "regescrt",
    "scalar02",
    "scalarlg",
    "sdp01",
    "semiuri",
    "test",
    "transports",
    "trws",
    "unkscm",
    "unksm2",
    "unreason",
    "wsinv",
    "zeromf"
};

unsigned char* all_tests_dat[] = {
    badaspec_dat,
    badbranch_dat,
    baddate_dat,
    baddn_dat,
    badinv01_dat,
    badvers_dat,
    bcast_dat,
    bext01_dat,
    bigcode_dat,
    clerr_dat,
    cparam01_dat,
    cparam02_dat,
    dblreq_dat,
    esc01_dat,
    esc02_dat,
    escnull_dat,
    escruri_dat,
    insuf_dat,
    intmeth_dat,
    inv2543_dat,
    invut_dat,
    longreq_dat,
    ltgtruri_dat,
    lwsdisp_dat,
    lwsruri_dat,
    lwsstart_dat,
    mcl01_dat,
    mismatch01_dat,
    mismatch02_dat,
    mpart01_dat,
    multi01_dat,
    ncl_dat,
    noreason_dat,
    novelsc_dat,
    quotbal_dat,
    regaut01_dat,
    regbadct_dat,
    regescrt_dat,
    scalar02_dat,
    scalarlg_dat,
    sdp01_dat,
    semiuri_dat,
    test_dat,
    transports_dat,
    trws_dat,
    unkscm_dat,
    unksm2_dat,
    unreason_dat,
    wsinv_dat,
    zeromf_dat
};

unsigned int all_tests_len[] = {
    badaspec_dat_len,
    badbranch_dat_len,
    baddate_dat_len,
    baddn_dat_len,
    badinv01_dat_len,
    badvers_dat_len,
    bcast_dat_len,
    bext01_dat_len,
    bigcode_dat_len,
    clerr_dat_len,
    cparam01_dat_len,
    cparam02_dat_len,
    dblreq_dat_len,
    esc01_dat_len,
    esc02_dat_len,
    escnull_dat_len,
    escruri_dat_len,
    insuf_dat_len,
    intmeth_dat_len,
    inv2543_dat_len,
    invut_dat_len,
    longreq_dat_len,
    ltgtruri_dat_len,
    lwsdisp_dat_len,
    lwsruri_dat_len,
    lwsstart_dat_len,
    mcl01_dat_len,
    mismatch01_dat_len,
    mismatch02_dat_len,
    mpart01_dat_len,
    multi01_dat_len,
    ncl_dat_len,
    noreason_dat_len,
    novelsc_dat_len,
    quotbal_dat_len,
    regaut01_dat_len,
    regbadct_dat_len,
    regescrt_dat_len,
    scalar02_dat_len,
    scalarlg_dat_len,
    sdp01_dat_len,
    semiuri_dat_len,
    test_dat_len,
    transports_dat_len,
    trws_dat_len,
    unkscm_dat_len,
    unksm2_dat_len,
    unreason_dat_len,
    wsinv_dat_len,
    zeromf_dat_len
};
