import boto3
region = 'us-east-1'
instances = ['i-00eac3044599fe777']
ec2 = boto3.client('ec2', region_name=region)



def lambda_handler(event, context):
    ec2.stop_instances(InstanceIds=instances)
    print('stopped instances: ' + str(instances))


def lambda_handler(event, context):
    ec2.start_instances(InstanceIds=instances)
    print('started  instances: ' + str(instances))