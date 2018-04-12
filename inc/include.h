#ifndef _INCLUDE_H_
#define _INCLUDE_H_




/***********define in main.c ************/
extern int32_t error_num ;


/***********define in MUSIC_task.c ************/
extern uint8_t *file_buff; 


/***********define in mem.c ************/
extern void readout_file();


/***********define in music.c ************/
extern uint8_t flag_dma_finish;
extern void spi_dma_test();

/***********define in dma2spi.c*********/
extern void spi_dma_prepare(void);
extern int32_t spiflash_write(const void *data);









#endif










