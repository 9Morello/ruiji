/* Given a https://yande.re/ url,
 * parse the html to get the source image url.
 * If a url to a png exists, that url will be returned.
 * Otherwise, return the jpg url.
 */
char* yandere_get_image_url(char *web_url);
