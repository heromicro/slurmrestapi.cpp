/**
 * Slurm REST API
 * API to access and control Slurm
 *
 * The version of the OpenAPI document: Slurm-24.05.5&openapi/dbv0.0.39&openapi/slurmctld&openapi/slurmdbd&openapi/v0.0.39
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 7.10.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "slurmrestapi/model/V0_0_40_partition_info_maximums.h"

namespace hm {
namespace slurm {
namespace client {
namespace model {



V0_0_40_partition_info_maximums::V0_0_40_partition_info_maximums()
{
    m_Cpus_per_nodeIsSet = false;
    m_Cpus_per_socketIsSet = false;
    m_Memory_per_cpu = 0L;
    m_Memory_per_cpuIsSet = false;
    m_Partition_memory_per_cpuIsSet = false;
    m_Partition_memory_per_nodeIsSet = false;
    m_NodesIsSet = false;
    m_Shares = 0;
    m_SharesIsSet = false;
    m_OversubscribeIsSet = false;
    m_TimeIsSet = false;
    m_Over_time_limitIsSet = false;
}

V0_0_40_partition_info_maximums::~V0_0_40_partition_info_maximums()
{
}

void V0_0_40_partition_info_maximums::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_40_partition_info_maximums::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Cpus_per_nodeIsSet)
    {
        val[utility::conversions::to_string_t(U("cpus_per_node"))] = ModelBase::toJson(m_Cpus_per_node);
    }
    if(m_Cpus_per_socketIsSet)
    {
        val[utility::conversions::to_string_t(U("cpus_per_socket"))] = ModelBase::toJson(m_Cpus_per_socket);
    }
    if(m_Memory_per_cpuIsSet)
    {
        val[utility::conversions::to_string_t(U("memory_per_cpu"))] = ModelBase::toJson(m_Memory_per_cpu);
    }
    if(m_Partition_memory_per_cpuIsSet)
    {
        val[utility::conversions::to_string_t(U("partition_memory_per_cpu"))] = ModelBase::toJson(m_Partition_memory_per_cpu);
    }
    if(m_Partition_memory_per_nodeIsSet)
    {
        val[utility::conversions::to_string_t(U("partition_memory_per_node"))] = ModelBase::toJson(m_Partition_memory_per_node);
    }
    if(m_NodesIsSet)
    {
        val[utility::conversions::to_string_t(U("nodes"))] = ModelBase::toJson(m_Nodes);
    }
    if(m_SharesIsSet)
    {
        val[utility::conversions::to_string_t(U("shares"))] = ModelBase::toJson(m_Shares);
    }
    if(m_OversubscribeIsSet)
    {
        val[utility::conversions::to_string_t(U("oversubscribe"))] = ModelBase::toJson(m_Oversubscribe);
    }
    if(m_TimeIsSet)
    {
        val[utility::conversions::to_string_t(U("time"))] = ModelBase::toJson(m_Time);
    }
    if(m_Over_time_limitIsSet)
    {
        val[utility::conversions::to_string_t(U("over_time_limit"))] = ModelBase::toJson(m_Over_time_limit);
    }

    return val;
}

bool V0_0_40_partition_info_maximums::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("cpus_per_node"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cpus_per_node")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setCpusPerNode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCpusPerNode);
            setCpusPerNode(refVal_setCpusPerNode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cpus_per_socket"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cpus_per_socket")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setCpusPerSocket;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCpusPerSocket);
            setCpusPerSocket(refVal_setCpusPerSocket);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("memory_per_cpu"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("memory_per_cpu")));
        if(!fieldValue.is_null())
        {
            int64_t refVal_setMemoryPerCpu;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMemoryPerCpu);
            setMemoryPerCpu(refVal_setMemoryPerCpu);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("partition_memory_per_cpu"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("partition_memory_per_cpu")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint64_no_val> refVal_setPartitionMemoryPerCpu;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPartitionMemoryPerCpu);
            setPartitionMemoryPerCpu(refVal_setPartitionMemoryPerCpu);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("partition_memory_per_node"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("partition_memory_per_node")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint64_no_val> refVal_setPartitionMemoryPerNode;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPartitionMemoryPerNode);
            setPartitionMemoryPerNode(refVal_setPartitionMemoryPerNode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("nodes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("nodes")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setNodes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNodes);
            setNodes(refVal_setNodes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("shares"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("shares")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setShares;
            ok &= ModelBase::fromJson(fieldValue, refVal_setShares);
            setShares(refVal_setShares);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("oversubscribe"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("oversubscribe")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_partition_info_maximums_oversubscribe> refVal_setOversubscribe;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOversubscribe);
            setOversubscribe(refVal_setOversubscribe);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("time")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint32_no_val> refVal_setTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTime);
            setTime(refVal_setTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("over_time_limit"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("over_time_limit")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_uint16_no_val> refVal_setOverTimeLimit;
            ok &= ModelBase::fromJson(fieldValue, refVal_setOverTimeLimit);
            setOverTimeLimit(refVal_setOverTimeLimit);
        }
    }
    return ok;
}

void V0_0_40_partition_info_maximums::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_Cpus_per_nodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cpus_per_node")), m_Cpus_per_node));
    }
    if(m_Cpus_per_socketIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cpus_per_socket")), m_Cpus_per_socket));
    }
    if(m_Memory_per_cpuIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("memory_per_cpu")), m_Memory_per_cpu));
    }
    if(m_Partition_memory_per_cpuIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("partition_memory_per_cpu")), m_Partition_memory_per_cpu));
    }
    if(m_Partition_memory_per_nodeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("partition_memory_per_node")), m_Partition_memory_per_node));
    }
    if(m_NodesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("nodes")), m_Nodes));
    }
    if(m_SharesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("shares")), m_Shares));
    }
    if(m_OversubscribeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("oversubscribe")), m_Oversubscribe));
    }
    if(m_TimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("time")), m_Time));
    }
    if(m_Over_time_limitIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("over_time_limit")), m_Over_time_limit));
    }
}

bool V0_0_40_partition_info_maximums::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("cpus_per_node"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setCpusPerNode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cpus_per_node"))), refVal_setCpusPerNode );
        setCpusPerNode(refVal_setCpusPerNode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cpus_per_socket"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setCpusPerSocket;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cpus_per_socket"))), refVal_setCpusPerSocket );
        setCpusPerSocket(refVal_setCpusPerSocket);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("memory_per_cpu"))))
    {
        int64_t refVal_setMemoryPerCpu;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("memory_per_cpu"))), refVal_setMemoryPerCpu );
        setMemoryPerCpu(refVal_setMemoryPerCpu);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("partition_memory_per_cpu"))))
    {
        std::shared_ptr<V0_0_40_uint64_no_val> refVal_setPartitionMemoryPerCpu;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("partition_memory_per_cpu"))), refVal_setPartitionMemoryPerCpu );
        setPartitionMemoryPerCpu(refVal_setPartitionMemoryPerCpu);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("partition_memory_per_node"))))
    {
        std::shared_ptr<V0_0_40_uint64_no_val> refVal_setPartitionMemoryPerNode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("partition_memory_per_node"))), refVal_setPartitionMemoryPerNode );
        setPartitionMemoryPerNode(refVal_setPartitionMemoryPerNode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("nodes"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setNodes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("nodes"))), refVal_setNodes );
        setNodes(refVal_setNodes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("shares"))))
    {
        int32_t refVal_setShares;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("shares"))), refVal_setShares );
        setShares(refVal_setShares);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("oversubscribe"))))
    {
        std::shared_ptr<V0_0_40_partition_info_maximums_oversubscribe> refVal_setOversubscribe;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("oversubscribe"))), refVal_setOversubscribe );
        setOversubscribe(refVal_setOversubscribe);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("time"))))
    {
        std::shared_ptr<V0_0_40_uint32_no_val> refVal_setTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("time"))), refVal_setTime );
        setTime(refVal_setTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("over_time_limit"))))
    {
        std::shared_ptr<V0_0_40_uint16_no_val> refVal_setOverTimeLimit;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("over_time_limit"))), refVal_setOverTimeLimit );
        setOverTimeLimit(refVal_setOverTimeLimit);
    }
    return ok;
}

std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_partition_info_maximums::getCpusPerNode() const
{
    return m_Cpus_per_node;
}

void V0_0_40_partition_info_maximums::setCpusPerNode(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Cpus_per_node = value;
    m_Cpus_per_nodeIsSet = true;
}

bool V0_0_40_partition_info_maximums::cpusPerNodeIsSet() const
{
    return m_Cpus_per_nodeIsSet;
}

void V0_0_40_partition_info_maximums::unsetCpus_per_node()
{
    m_Cpus_per_nodeIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_partition_info_maximums::getCpusPerSocket() const
{
    return m_Cpus_per_socket;
}

void V0_0_40_partition_info_maximums::setCpusPerSocket(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Cpus_per_socket = value;
    m_Cpus_per_socketIsSet = true;
}

bool V0_0_40_partition_info_maximums::cpusPerSocketIsSet() const
{
    return m_Cpus_per_socketIsSet;
}

void V0_0_40_partition_info_maximums::unsetCpus_per_socket()
{
    m_Cpus_per_socketIsSet = false;
}
int64_t V0_0_40_partition_info_maximums::getMemoryPerCpu() const
{
    return m_Memory_per_cpu;
}

void V0_0_40_partition_info_maximums::setMemoryPerCpu(int64_t value)
{
    m_Memory_per_cpu = value;
    m_Memory_per_cpuIsSet = true;
}

bool V0_0_40_partition_info_maximums::memoryPerCpuIsSet() const
{
    return m_Memory_per_cpuIsSet;
}

void V0_0_40_partition_info_maximums::unsetMemory_per_cpu()
{
    m_Memory_per_cpuIsSet = false;
}
std::shared_ptr<V0_0_40_uint64_no_val> V0_0_40_partition_info_maximums::getPartitionMemoryPerCpu() const
{
    return m_Partition_memory_per_cpu;
}

void V0_0_40_partition_info_maximums::setPartitionMemoryPerCpu(const std::shared_ptr<V0_0_40_uint64_no_val>& value)
{
    m_Partition_memory_per_cpu = value;
    m_Partition_memory_per_cpuIsSet = true;
}

bool V0_0_40_partition_info_maximums::partitionMemoryPerCpuIsSet() const
{
    return m_Partition_memory_per_cpuIsSet;
}

void V0_0_40_partition_info_maximums::unsetPartition_memory_per_cpu()
{
    m_Partition_memory_per_cpuIsSet = false;
}
std::shared_ptr<V0_0_40_uint64_no_val> V0_0_40_partition_info_maximums::getPartitionMemoryPerNode() const
{
    return m_Partition_memory_per_node;
}

void V0_0_40_partition_info_maximums::setPartitionMemoryPerNode(const std::shared_ptr<V0_0_40_uint64_no_val>& value)
{
    m_Partition_memory_per_node = value;
    m_Partition_memory_per_nodeIsSet = true;
}

bool V0_0_40_partition_info_maximums::partitionMemoryPerNodeIsSet() const
{
    return m_Partition_memory_per_nodeIsSet;
}

void V0_0_40_partition_info_maximums::unsetPartition_memory_per_node()
{
    m_Partition_memory_per_nodeIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_partition_info_maximums::getNodes() const
{
    return m_Nodes;
}

void V0_0_40_partition_info_maximums::setNodes(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Nodes = value;
    m_NodesIsSet = true;
}

bool V0_0_40_partition_info_maximums::nodesIsSet() const
{
    return m_NodesIsSet;
}

void V0_0_40_partition_info_maximums::unsetNodes()
{
    m_NodesIsSet = false;
}
int32_t V0_0_40_partition_info_maximums::getShares() const
{
    return m_Shares;
}

void V0_0_40_partition_info_maximums::setShares(int32_t value)
{
    m_Shares = value;
    m_SharesIsSet = true;
}

bool V0_0_40_partition_info_maximums::sharesIsSet() const
{
    return m_SharesIsSet;
}

void V0_0_40_partition_info_maximums::unsetShares()
{
    m_SharesIsSet = false;
}
std::shared_ptr<V0_0_40_partition_info_maximums_oversubscribe> V0_0_40_partition_info_maximums::getOversubscribe() const
{
    return m_Oversubscribe;
}

void V0_0_40_partition_info_maximums::setOversubscribe(const std::shared_ptr<V0_0_40_partition_info_maximums_oversubscribe>& value)
{
    m_Oversubscribe = value;
    m_OversubscribeIsSet = true;
}

bool V0_0_40_partition_info_maximums::oversubscribeIsSet() const
{
    return m_OversubscribeIsSet;
}

void V0_0_40_partition_info_maximums::unsetOversubscribe()
{
    m_OversubscribeIsSet = false;
}
std::shared_ptr<V0_0_40_uint32_no_val> V0_0_40_partition_info_maximums::getTime() const
{
    return m_Time;
}

void V0_0_40_partition_info_maximums::setTime(const std::shared_ptr<V0_0_40_uint32_no_val>& value)
{
    m_Time = value;
    m_TimeIsSet = true;
}

bool V0_0_40_partition_info_maximums::timeIsSet() const
{
    return m_TimeIsSet;
}

void V0_0_40_partition_info_maximums::unsetTime()
{
    m_TimeIsSet = false;
}
std::shared_ptr<V0_0_40_uint16_no_val> V0_0_40_partition_info_maximums::getOverTimeLimit() const
{
    return m_Over_time_limit;
}

void V0_0_40_partition_info_maximums::setOverTimeLimit(const std::shared_ptr<V0_0_40_uint16_no_val>& value)
{
    m_Over_time_limit = value;
    m_Over_time_limitIsSet = true;
}

bool V0_0_40_partition_info_maximums::overTimeLimitIsSet() const
{
    return m_Over_time_limitIsSet;
}

void V0_0_40_partition_info_maximums::unsetOver_time_limit()
{
    m_Over_time_limitIsSet = false;
}
}
}
}
}


