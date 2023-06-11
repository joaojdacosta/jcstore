#include <jcstore_client.h>
#include <stdlib.h>
#include <stdio.h>

int jcstore_init(int num_server_threads, int buf_size, int num_shards)
{
    printf("TODO - implement me\n");

    return 0;
}

char *jcstore_get(int clientid, int shardId, char *key)
{
    printf("TODO - implement me\n");

    return NULL;
}

char *jcstore_put(int clientid, int shardId, char *key, char *value)
{
    printf("TODO - implement me\n");

    return NULL;
}

char *jcstore_remove(int clientid, int shardId, char *key)
{
    printf("TODO - implement me\n");

    return NULL;
}

KV_t *jcstore_getAllKeys(int clientid, int shardId, int *dim)
{
    printf("TODO - implement me\n");

    return NULL;
}
