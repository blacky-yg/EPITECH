const content1 = document.querySelector(".pano1");
const content2 = document.querySelector(".pano2");

const img = ["asset/pano1.jpg", "asset/pano2.jpg", "asset/pano3.jpeg", "asset/pano4.jpeg"];

const video = ["asset/video1.mp4", "asset/video2.mp4"];

const pano_img = [new PANOLENS.ImagePanorama(img[0]),
		new PANOLENS.ImagePanorama(img[1]), new PANOLENS.ImagePanorama(img[2]),
		new PANOLENS.ImagePanorama(img[3]), new PANOLENS.ImagePanorama(img[4])];

const pano_video = [new PANOLENS.VideoPanorama(video[0]),
					new PANOLENS.VideoPanorama(video[1])];

const viewer1 = new PANOLENS.Viewer({
	container: content1,
	output: 'console',
	autoRotate: true,
	autoRotateSpeed: 0.3
});

const viewer2 = new PANOLENS.Viewer({
	container: content2,
	output: 'console',
	autoRotate: true,
	autoRotateSpeed: 0.3
});

pano_img[0].link(pano_img[1], new THREE.Vector3(-4436.71, -1198.60, -1965.38));
pano_img[1].link(pano_img[0], new THREE.Vector3(4454.68, -10.58, 2254.64));
pano_img[0].link(pano_video[0], new THREE.Vector3(-4869.50, -1100.36, 107.80));
pano_video[0].link(pano_img[0], new THREE.Vector3(-4412.97, 539.47, 2265.19));

pano_img[2].link(pano_img[3], new THREE.Vector3(-3016.63, -1455.39, -3700.21));
pano_img[3].link(pano_img[2], new THREE.Vector3(4901.73, -909.10, 218.74));
pano_img[2].link(pano_video[1], new THREE.Vector3(2092.23, -736.35, -4474.98));
pano_video[1].link(pano_img[2], new THREE.Vector3(3294.23, -340.28, -3740.19));

viewer1.add(pano_img[0], pano_img[1], pano_video[0]);
viewer2.add(pano_img[2], pano_img[3], pano_video[1]);