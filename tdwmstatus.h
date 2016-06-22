/*
 * author : Bot
 * version : 2.74-1
 * date : 16/06/2015
 */

#define TIME_FORMAT "%a %d/%m/%Y | %X"
#define OUTPUT_FORMAT "%s \x01 C: %hu%% R: %hu%% H: %hu%% T: %huº B: %hu%%%c V: %hu%% | %s | %s"  
/*  loadavg, cpu, ram, disk_usage/disk_total, temp, batt_cap, batt_stat, kernel, volume, uptime, time */

/* Times */
#define PERIOD 1
#define PERIOD_1 5
#define PERIOD_2 30
#define PERIOD_MAX 60

/* Files */
#define TEMP_FILE	"/sys/class/hwmon/hwmon0/device/temp1_input"
#define TEMP_FILE1	"/sys/class/hwmon/hwmon0/temp1_input"
#define BATTERY_STATUS_FILE	"/sys/class/power_supply/BAT1/status"
#define CAPACITY_FILE	"/sys/class/power_supply/BAT1/capacity"
#define STAT_FILE "/proc/stat"
#define NET_FILE "/proc/net/dev"

/* Functions prototypes*/
static uint_fast16_t get_cpu(void);
static uint_fast16_t get_ram(void);
static uint_fast16_t get_disk(void);
static uint_fast16_t get_volume(void);
static uint_fast16_t get_temp(void);
static uint_fast16_t get_batt_cap(void);
static char get_batt_stat(void);
static char * get_time(void);
static char * get_loadavg(void);
static char * get_uptime(void);
char * smprintf(char *, ...);
static void set_status(Display *, char *);
