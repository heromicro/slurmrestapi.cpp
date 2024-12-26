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



#include "slurmrestapi/model/V0_0_41_openapi_partition_resp_partitions_inner.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



V0_0_41_openapi_partition_resp_partitions_inner::V0_0_41_openapi_partition_resp_partitions_inner()
{
    m_NodesIsSet = false;
    m_AccountsIsSet = false;
    m_GroupsIsSet = false;
    m_QosIsSet = false;
    m_Alternate = utility::conversions::to_string_t("");
    m_AlternateIsSet = false;
    m_TresIsSet = false;
    m_Cluster = utility::conversions::to_string_t("");
    m_ClusterIsSet = false;
    m_Select_typeIsSet = false;
    m_CpusIsSet = false;
    m_DefaultsIsSet = false;
    m_Grace_time = 0;
    m_Grace_timeIsSet = false;
    m_MaximumsIsSet = false;
    m_MinimumsIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_Node_sets = utility::conversions::to_string_t("");
    m_Node_setsIsSet = false;
    m_PriorityIsSet = false;
    m_TimeoutsIsSet = false;
    m_PartitionIsSet = false;
    m_Suspend_timeIsSet = false;
}

V0_0_41_openapi_partition_resp_partitions_inner::~V0_0_41_openapi_partition_resp_partitions_inner()
{
}

void V0_0_41_openapi_partition_resp_partitions_inner::validate()
{
    // TODO: implement validation
}

web::json::value V0_0_41_openapi_partition_resp_partitions_inner::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_NodesIsSet)
    {
        val[utility::conversions::to_string_t(U("nodes"))] = ModelBase::toJson(m_Nodes);
    }
    if(m_AccountsIsSet)
    {
        val[utility::conversions::to_string_t(U("accounts"))] = ModelBase::toJson(m_Accounts);
    }
    if(m_GroupsIsSet)
    {
        val[utility::conversions::to_string_t(U("groups"))] = ModelBase::toJson(m_Groups);
    }
    if(m_QosIsSet)
    {
        val[utility::conversions::to_string_t(U("qos"))] = ModelBase::toJson(m_Qos);
    }
    if(m_AlternateIsSet)
    {
        val[utility::conversions::to_string_t(U("alternate"))] = ModelBase::toJson(m_Alternate);
    }
    if(m_TresIsSet)
    {
        val[utility::conversions::to_string_t(U("tres"))] = ModelBase::toJson(m_Tres);
    }
    if(m_ClusterIsSet)
    {
        val[utility::conversions::to_string_t(U("cluster"))] = ModelBase::toJson(m_Cluster);
    }
    if(m_Select_typeIsSet)
    {
        val[utility::conversions::to_string_t(U("select_type"))] = ModelBase::toJson(m_Select_type);
    }
    if(m_CpusIsSet)
    {
        val[utility::conversions::to_string_t(U("cpus"))] = ModelBase::toJson(m_Cpus);
    }
    if(m_DefaultsIsSet)
    {
        val[utility::conversions::to_string_t(U("defaults"))] = ModelBase::toJson(m_Defaults);
    }
    if(m_Grace_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("grace_time"))] = ModelBase::toJson(m_Grace_time);
    }
    if(m_MaximumsIsSet)
    {
        val[utility::conversions::to_string_t(U("maximums"))] = ModelBase::toJson(m_Maximums);
    }
    if(m_MinimumsIsSet)
    {
        val[utility::conversions::to_string_t(U("minimums"))] = ModelBase::toJson(m_Minimums);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t(U("name"))] = ModelBase::toJson(m_Name);
    }
    if(m_Node_setsIsSet)
    {
        val[utility::conversions::to_string_t(U("node_sets"))] = ModelBase::toJson(m_Node_sets);
    }
    if(m_PriorityIsSet)
    {
        val[utility::conversions::to_string_t(U("priority"))] = ModelBase::toJson(m_Priority);
    }
    if(m_TimeoutsIsSet)
    {
        val[utility::conversions::to_string_t(U("timeouts"))] = ModelBase::toJson(m_Timeouts);
    }
    if(m_PartitionIsSet)
    {
        val[utility::conversions::to_string_t(U("partition"))] = ModelBase::toJson(m_Partition);
    }
    if(m_Suspend_timeIsSet)
    {
        val[utility::conversions::to_string_t(U("suspend_time"))] = ModelBase::toJson(m_Suspend_time);
    }

    return val;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("nodes"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("nodes")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_partition_info_nodes> refVal_setNodes;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNodes);
            setNodes(refVal_setNodes);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("accounts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("accounts")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_partition_info_accounts> refVal_setAccounts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAccounts);
            setAccounts(refVal_setAccounts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("groups"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("groups")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_partition_info_groups> refVal_setGroups;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGroups);
            setGroups(refVal_setGroups);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("qos"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("qos")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_partition_info_qos> refVal_setQos;
            ok &= ModelBase::fromJson(fieldValue, refVal_setQos);
            setQos(refVal_setQos);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("alternate"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("alternate")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAlternate;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAlternate);
            setAlternate(refVal_setAlternate);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tres"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tres")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_partition_info_tres> refVal_setTres;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTres);
            setTres(refVal_setTres);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cluster"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cluster")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setCluster;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCluster);
            setCluster(refVal_setCluster);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("select_type"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("select_type")));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_setSelectType;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSelectType);
            setSelectType(refVal_setSelectType);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("cpus"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("cpus")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_partition_info_cpus> refVal_setCpus;
            ok &= ModelBase::fromJson(fieldValue, refVal_setCpus);
            setCpus(refVal_setCpus);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("defaults"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("defaults")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_defaults> refVal_setDefaults;
            ok &= ModelBase::fromJson(fieldValue, refVal_setDefaults);
            setDefaults(refVal_setDefaults);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("grace_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("grace_time")));
        if(!fieldValue.is_null())
        {
            int32_t refVal_setGraceTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setGraceTime);
            setGraceTime(refVal_setGraceTime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("maximums"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("maximums")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_maximums> refVal_setMaximums;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMaximums);
            setMaximums(refVal_setMaximums);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("minimums"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("minimums")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_partition_info_minimums> refVal_setMinimums;
            ok &= ModelBase::fromJson(fieldValue, refVal_setMinimums);
            setMinimums(refVal_setMinimums);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("name"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("name")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setName;
            ok &= ModelBase::fromJson(fieldValue, refVal_setName);
            setName(refVal_setName);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("node_sets"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("node_sets")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setNodeSets;
            ok &= ModelBase::fromJson(fieldValue, refVal_setNodeSets);
            setNodeSets(refVal_setNodeSets);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("priority"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("priority")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_partition_info_priority> refVal_setPriority;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPriority);
            setPriority(refVal_setPriority);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("timeouts"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("timeouts")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts> refVal_setTimeouts;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTimeouts);
            setTimeouts(refVal_setTimeouts);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("partition"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("partition")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_40_partition_info_partition> refVal_setPartition;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPartition);
            setPartition(refVal_setPartition);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("suspend_time"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("suspend_time")));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_suspend_time> refVal_setSuspendTime;
            ok &= ModelBase::fromJson(fieldValue, refVal_setSuspendTime);
            setSuspendTime(refVal_setSuspendTime);
        }
    }
    return ok;
}

void V0_0_41_openapi_partition_resp_partitions_inner::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_NodesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("nodes")), m_Nodes));
    }
    if(m_AccountsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("accounts")), m_Accounts));
    }
    if(m_GroupsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("groups")), m_Groups));
    }
    if(m_QosIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("qos")), m_Qos));
    }
    if(m_AlternateIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("alternate")), m_Alternate));
    }
    if(m_TresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tres")), m_Tres));
    }
    if(m_ClusterIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cluster")), m_Cluster));
    }
    if(m_Select_typeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("select_type")), m_Select_type));
    }
    if(m_CpusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("cpus")), m_Cpus));
    }
    if(m_DefaultsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("defaults")), m_Defaults));
    }
    if(m_Grace_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("grace_time")), m_Grace_time));
    }
    if(m_MaximumsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("maximums")), m_Maximums));
    }
    if(m_MinimumsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("minimums")), m_Minimums));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("name")), m_Name));
    }
    if(m_Node_setsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("node_sets")), m_Node_sets));
    }
    if(m_PriorityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("priority")), m_Priority));
    }
    if(m_TimeoutsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("timeouts")), m_Timeouts));
    }
    if(m_PartitionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("partition")), m_Partition));
    }
    if(m_Suspend_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("suspend_time")), m_Suspend_time));
    }
}

bool V0_0_41_openapi_partition_resp_partitions_inner::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("nodes"))))
    {
        std::shared_ptr<V0_0_40_partition_info_nodes> refVal_setNodes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("nodes"))), refVal_setNodes );
        setNodes(refVal_setNodes);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("accounts"))))
    {
        std::shared_ptr<V0_0_40_partition_info_accounts> refVal_setAccounts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("accounts"))), refVal_setAccounts );
        setAccounts(refVal_setAccounts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("groups"))))
    {
        std::shared_ptr<V0_0_40_partition_info_groups> refVal_setGroups;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("groups"))), refVal_setGroups );
        setGroups(refVal_setGroups);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("qos"))))
    {
        std::shared_ptr<V0_0_40_partition_info_qos> refVal_setQos;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("qos"))), refVal_setQos );
        setQos(refVal_setQos);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("alternate"))))
    {
        utility::string_t refVal_setAlternate;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("alternate"))), refVal_setAlternate );
        setAlternate(refVal_setAlternate);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tres"))))
    {
        std::shared_ptr<V0_0_40_partition_info_tres> refVal_setTres;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tres"))), refVal_setTres );
        setTres(refVal_setTres);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cluster"))))
    {
        utility::string_t refVal_setCluster;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cluster"))), refVal_setCluster );
        setCluster(refVal_setCluster);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("select_type"))))
    {
        std::vector<utility::string_t> refVal_setSelectType;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("select_type"))), refVal_setSelectType );
        setSelectType(refVal_setSelectType);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("cpus"))))
    {
        std::shared_ptr<V0_0_40_partition_info_cpus> refVal_setCpus;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("cpus"))), refVal_setCpus );
        setCpus(refVal_setCpus);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("defaults"))))
    {
        std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_defaults> refVal_setDefaults;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("defaults"))), refVal_setDefaults );
        setDefaults(refVal_setDefaults);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("grace_time"))))
    {
        int32_t refVal_setGraceTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("grace_time"))), refVal_setGraceTime );
        setGraceTime(refVal_setGraceTime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("maximums"))))
    {
        std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_maximums> refVal_setMaximums;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("maximums"))), refVal_setMaximums );
        setMaximums(refVal_setMaximums);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("minimums"))))
    {
        std::shared_ptr<V0_0_40_partition_info_minimums> refVal_setMinimums;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("minimums"))), refVal_setMinimums );
        setMinimums(refVal_setMinimums);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("name"))))
    {
        utility::string_t refVal_setName;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("name"))), refVal_setName );
        setName(refVal_setName);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("node_sets"))))
    {
        utility::string_t refVal_setNodeSets;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("node_sets"))), refVal_setNodeSets );
        setNodeSets(refVal_setNodeSets);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("priority"))))
    {
        std::shared_ptr<V0_0_40_partition_info_priority> refVal_setPriority;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("priority"))), refVal_setPriority );
        setPriority(refVal_setPriority);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("timeouts"))))
    {
        std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts> refVal_setTimeouts;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("timeouts"))), refVal_setTimeouts );
        setTimeouts(refVal_setTimeouts);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("partition"))))
    {
        std::shared_ptr<V0_0_40_partition_info_partition> refVal_setPartition;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("partition"))), refVal_setPartition );
        setPartition(refVal_setPartition);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("suspend_time"))))
    {
        std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_suspend_time> refVal_setSuspendTime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("suspend_time"))), refVal_setSuspendTime );
        setSuspendTime(refVal_setSuspendTime);
    }
    return ok;
}

std::shared_ptr<V0_0_40_partition_info_nodes> V0_0_41_openapi_partition_resp_partitions_inner::getNodes() const
{
    return m_Nodes;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setNodes(const std::shared_ptr<V0_0_40_partition_info_nodes>& value)
{
    m_Nodes = value;
    m_NodesIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::nodesIsSet() const
{
    return m_NodesIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetNodes()
{
    m_NodesIsSet = false;
}
std::shared_ptr<V0_0_40_partition_info_accounts> V0_0_41_openapi_partition_resp_partitions_inner::getAccounts() const
{
    return m_Accounts;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setAccounts(const std::shared_ptr<V0_0_40_partition_info_accounts>& value)
{
    m_Accounts = value;
    m_AccountsIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::accountsIsSet() const
{
    return m_AccountsIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetAccounts()
{
    m_AccountsIsSet = false;
}
std::shared_ptr<V0_0_40_partition_info_groups> V0_0_41_openapi_partition_resp_partitions_inner::getGroups() const
{
    return m_Groups;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setGroups(const std::shared_ptr<V0_0_40_partition_info_groups>& value)
{
    m_Groups = value;
    m_GroupsIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::groupsIsSet() const
{
    return m_GroupsIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetGroups()
{
    m_GroupsIsSet = false;
}
std::shared_ptr<V0_0_40_partition_info_qos> V0_0_41_openapi_partition_resp_partitions_inner::getQos() const
{
    return m_Qos;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setQos(const std::shared_ptr<V0_0_40_partition_info_qos>& value)
{
    m_Qos = value;
    m_QosIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::qosIsSet() const
{
    return m_QosIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetQos()
{
    m_QosIsSet = false;
}
utility::string_t V0_0_41_openapi_partition_resp_partitions_inner::getAlternate() const
{
    return m_Alternate;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setAlternate(const utility::string_t& value)
{
    m_Alternate = value;
    m_AlternateIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::alternateIsSet() const
{
    return m_AlternateIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetAlternate()
{
    m_AlternateIsSet = false;
}
std::shared_ptr<V0_0_40_partition_info_tres> V0_0_41_openapi_partition_resp_partitions_inner::getTres() const
{
    return m_Tres;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setTres(const std::shared_ptr<V0_0_40_partition_info_tres>& value)
{
    m_Tres = value;
    m_TresIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::tresIsSet() const
{
    return m_TresIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetTres()
{
    m_TresIsSet = false;
}
utility::string_t V0_0_41_openapi_partition_resp_partitions_inner::getCluster() const
{
    return m_Cluster;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setCluster(const utility::string_t& value)
{
    m_Cluster = value;
    m_ClusterIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::clusterIsSet() const
{
    return m_ClusterIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetCluster()
{
    m_ClusterIsSet = false;
}
std::vector<utility::string_t>& V0_0_41_openapi_partition_resp_partitions_inner::getSelectType()
{
    return m_Select_type;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setSelectType(const std::vector<utility::string_t>& value)
{
    m_Select_type = value;
    m_Select_typeIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::selectTypeIsSet() const
{
    return m_Select_typeIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetSelect_type()
{
    m_Select_typeIsSet = false;
}
std::shared_ptr<V0_0_40_partition_info_cpus> V0_0_41_openapi_partition_resp_partitions_inner::getCpus() const
{
    return m_Cpus;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setCpus(const std::shared_ptr<V0_0_40_partition_info_cpus>& value)
{
    m_Cpus = value;
    m_CpusIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::cpusIsSet() const
{
    return m_CpusIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetCpus()
{
    m_CpusIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_defaults> V0_0_41_openapi_partition_resp_partitions_inner::getDefaults() const
{
    return m_Defaults;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setDefaults(const std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_defaults>& value)
{
    m_Defaults = value;
    m_DefaultsIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::defaultsIsSet() const
{
    return m_DefaultsIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetDefaults()
{
    m_DefaultsIsSet = false;
}
int32_t V0_0_41_openapi_partition_resp_partitions_inner::getGraceTime() const
{
    return m_Grace_time;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setGraceTime(int32_t value)
{
    m_Grace_time = value;
    m_Grace_timeIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::graceTimeIsSet() const
{
    return m_Grace_timeIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetGrace_time()
{
    m_Grace_timeIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_maximums> V0_0_41_openapi_partition_resp_partitions_inner::getMaximums() const
{
    return m_Maximums;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setMaximums(const std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_maximums>& value)
{
    m_Maximums = value;
    m_MaximumsIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::maximumsIsSet() const
{
    return m_MaximumsIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetMaximums()
{
    m_MaximumsIsSet = false;
}
std::shared_ptr<V0_0_40_partition_info_minimums> V0_0_41_openapi_partition_resp_partitions_inner::getMinimums() const
{
    return m_Minimums;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setMinimums(const std::shared_ptr<V0_0_40_partition_info_minimums>& value)
{
    m_Minimums = value;
    m_MinimumsIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::minimumsIsSet() const
{
    return m_MinimumsIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetMinimums()
{
    m_MinimumsIsSet = false;
}
utility::string_t V0_0_41_openapi_partition_resp_partitions_inner::getName() const
{
    return m_Name;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::nameIsSet() const
{
    return m_NameIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetName()
{
    m_NameIsSet = false;
}
utility::string_t V0_0_41_openapi_partition_resp_partitions_inner::getNodeSets() const
{
    return m_Node_sets;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setNodeSets(const utility::string_t& value)
{
    m_Node_sets = value;
    m_Node_setsIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::nodeSetsIsSet() const
{
    return m_Node_setsIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetNode_sets()
{
    m_Node_setsIsSet = false;
}
std::shared_ptr<V0_0_40_partition_info_priority> V0_0_41_openapi_partition_resp_partitions_inner::getPriority() const
{
    return m_Priority;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setPriority(const std::shared_ptr<V0_0_40_partition_info_priority>& value)
{
    m_Priority = value;
    m_PriorityIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::priorityIsSet() const
{
    return m_PriorityIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetPriority()
{
    m_PriorityIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts> V0_0_41_openapi_partition_resp_partitions_inner::getTimeouts() const
{
    return m_Timeouts;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setTimeouts(const std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_timeouts>& value)
{
    m_Timeouts = value;
    m_TimeoutsIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::timeoutsIsSet() const
{
    return m_TimeoutsIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetTimeouts()
{
    m_TimeoutsIsSet = false;
}
std::shared_ptr<V0_0_40_partition_info_partition> V0_0_41_openapi_partition_resp_partitions_inner::getPartition() const
{
    return m_Partition;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setPartition(const std::shared_ptr<V0_0_40_partition_info_partition>& value)
{
    m_Partition = value;
    m_PartitionIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::partitionIsSet() const
{
    return m_PartitionIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetPartition()
{
    m_PartitionIsSet = false;
}
std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_suspend_time> V0_0_41_openapi_partition_resp_partitions_inner::getSuspendTime() const
{
    return m_Suspend_time;
}

void V0_0_41_openapi_partition_resp_partitions_inner::setSuspendTime(const std::shared_ptr<V0_0_41_openapi_partition_resp_partitions_inner_suspend_time>& value)
{
    m_Suspend_time = value;
    m_Suspend_timeIsSet = true;
}

bool V0_0_41_openapi_partition_resp_partitions_inner::suspendTimeIsSet() const
{
    return m_Suspend_timeIsSet;
}

void V0_0_41_openapi_partition_resp_partitions_inner::unsetSuspend_time()
{
    m_Suspend_timeIsSet = false;
}
}
}
}
}

