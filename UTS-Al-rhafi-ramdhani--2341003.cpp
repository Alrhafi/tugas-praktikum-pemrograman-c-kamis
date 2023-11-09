#include <stdio.h>
#include <unistd.h>

	// Definisi array untuk level kekeruhan air
int kekeruhan_air[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

	// Fungsi untuk mengatur motor utama berdasarkan level kekeruhan air
void aturMotorUtama(int level) {
    // Implementasikan pengaturan kecepatan motor utama sesuai dengan level kekeruhan air
    printf("\nMotor listrik utama berputar dengan kecepatan sesuai level kekeruhan air %i rpm\n", level);
    
}

	// Fungsi untuk mengatur motor pembuka klep pembuangan air
void buangAirKotor() {
    // Implementasikan pengaturan motor pembuka klep pembuangan air
    printf("\nMotor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis\n");
    printf("tunggu selama 2 menit...\n");
}

	// Fungsi untuk mengatur motor utama saat pengeringan
void pengeringan() {
    // Implementasikan pengaturan motor utama saat pengeringan
    printf("\nMotor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit\n");
    printf("tunggu selama 3 menit...\n");
}

int main() {
    // Tombol Start ditekan
    printf("Tombol Start ditekan\n");
	sleep(2*1);
	
    // Motor pembuka klep pengisian air aktif selama 2 menit sampai air penuh
    printf("\nMotor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh\n");
    printf("tunggu hingga mesin terisi penuh dengan air...\n");
    sleep(2 * 5);

    // Sensor turbidimeter aktif hanya satu kali untuk mendeteksi level kekeruhan air
    int level_kekeruhan = kekeruhan_air[4];
	 
	// Gantilah dengan nilai dari sensor turbidimeter
    printf("\nSensor turbidimeter aktif, Level kekeruhan air: %i...\n", level_kekeruhan);
	sleep(2* 1);
	
    // Motor listrik utama berputar sesuai level kekeruhan air
    aturMotorUtama(level_kekeruhan);

    // Motor listrik utama berhenti pada setiap pertengahan waktu
    printf("\nMotor listrik utama berhenti pada setiap pertengahan waktu...\n");
	sleep(2*5);
	
    // Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air kotor habis
    buangAirKotor();
	sleep(2*5);
	
    // Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    pengeringan();
	sleep(2*10);
	
    // Motor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh
	printf("\nMotor listrik pembuka klep pengisian air aktif selama 2 menit sampai air penuh...\n");
	sleep(2*5);
    
	// Motor listrik utama berputar selama sisa waktu mencuci
	printf("\nMotor listrik utama berputar selama sisa waktu mencuci...\n");
	sleep(3*5);
    
	// Motor listrik pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis
	buangAirKotor();
	sleep(2*5);
    
	// Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit
    pengeringan();
	sleep(2*10);
    return 0;
}
