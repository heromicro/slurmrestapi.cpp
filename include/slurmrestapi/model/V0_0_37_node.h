/**
 * Slurm Rest API
 * API to access and control Slurm.
 *
 * The version of the OpenAPI document: 0.0.37
 * Contact: sales@schedmd.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.6.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * V0_0_37_node.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_node_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_node_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  V0_0_37_node
    : public ModelBase
{
public:
    V0_0_37_node();
    virtual ~V0_0_37_node();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_37_node members

    /// <summary>
    /// computer architecture
    /// </summary>
    utility::string_t getArchitecture() const;
    bool architectureIsSet() const;
    void unsetArchitecture();

    void setArchitecture(const utility::string_t& value);

    /// <summary>
    /// BcastAddr
    /// </summary>
    utility::string_t getBurstbufferNetworkAddress() const;
    bool burstbufferNetworkAddressIsSet() const;
    void unsetBurstbuffer_network_address();

    void setBurstbufferNetworkAddress(const utility::string_t& value);

    /// <summary>
    /// total number of boards per node
    /// </summary>
    int32_t getBoards() const;
    bool boardsIsSet() const;
    void unsetBoards();

    void setBoards(int32_t value);

    /// <summary>
    /// timestamp of node boot
    /// </summary>
    int64_t getBootTime() const;
    bool bootTimeIsSet() const;
    void unsetBoot_time();

    void setBootTime(int64_t value);

    /// <summary>
    /// number of cores per socket
    /// </summary>
    int32_t getCores() const;
    bool coresIsSet() const;
    void unsetCores();

    void setCores(int32_t value);

    /// <summary>
    /// Default task binding
    /// </summary>
    int32_t getCpuBinding() const;
    bool cpuBindingIsSet() const;
    void unsetCpu_binding();

    void setCpuBinding(int32_t value);

    /// <summary>
    /// CPU load * 100
    /// </summary>
    int64_t getCpuLoad() const;
    bool cpuLoadIsSet() const;
    void unsetCpu_load();

    void setCpuLoad(int64_t value);

    /// <summary>
    /// free memory in MiB
    /// </summary>
    int32_t getFreeMemory() const;
    bool freeMemoryIsSet() const;
    void unsetFree_memory();

    void setFreeMemory(int32_t value);

    /// <summary>
    /// configured count of cpus running on the node
    /// </summary>
    int32_t getCpus() const;
    bool cpusIsSet() const;
    void unsetCpus();

    void setCpus(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFeatures() const;
    bool featuresIsSet() const;
    void unsetFeatures();

    void setFeatures(const utility::string_t& value);

    /// <summary>
    /// list of a node&#39;s available features
    /// </summary>
    utility::string_t getActiveFeatures() const;
    bool activeFeaturesIsSet() const;
    void unsetActive_features();

    void setActiveFeatures(const utility::string_t& value);

    /// <summary>
    /// list of a node&#39;s generic resources
    /// </summary>
    utility::string_t getGres() const;
    bool gresIsSet() const;
    void unsetGres();

    void setGres(const utility::string_t& value);

    /// <summary>
    /// list of drained GRES
    /// </summary>
    utility::string_t getGresDrained() const;
    bool gresDrainedIsSet() const;
    void unsetGres_drained();

    void setGresDrained(const utility::string_t& value);

    /// <summary>
    /// list of GRES in current use
    /// </summary>
    utility::string_t getGresUsed() const;
    bool gresUsedIsSet() const;
    void unsetGres_used();

    void setGresUsed(const utility::string_t& value);

    /// <summary>
    /// mcs label if mcs plugin in use
    /// </summary>
    utility::string_t getMcsLabel() const;
    bool mcsLabelIsSet() const;
    void unsetMcs_label();

    void setMcsLabel(const utility::string_t& value);

    /// <summary>
    /// node name to slurm
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// state after reboot
    /// </summary>
    utility::string_t getNextStateAfterReboot() const;
    bool nextStateAfterRebootIsSet() const;
    void unsetNext_state_after_reboot();

    void setNextStateAfterReboot(const utility::string_t& value);

    /// <summary>
    /// node state flags
    /// </summary>
    std::vector<utility::string_t>& getNextStateAfterRebootFlags();
    bool nextStateAfterRebootFlagsIsSet() const;
    void unsetNext_state_after_reboot_flags();

    void setNextStateAfterRebootFlags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// state after reboot
    /// </summary>
    utility::string_t getAddress() const;
    bool addressIsSet() const;
    void unsetAddress();

    void setAddress(const utility::string_t& value);

    /// <summary>
    /// node&#39;s hostname
    /// </summary>
    utility::string_t getHostname() const;
    bool hostnameIsSet() const;
    void unsetHostname();

    void setHostname(const utility::string_t& value);

    /// <summary>
    /// current node state
    /// </summary>
    utility::string_t getState() const;
    bool stateIsSet() const;
    void unsetState();

    void setState(const utility::string_t& value);

    /// <summary>
    /// node state flags
    /// </summary>
    std::vector<utility::string_t>& getStateFlags();
    bool stateFlagsIsSet() const;
    void unsetState_flags();

    void setStateFlags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// operating system
    /// </summary>
    utility::string_t getOperatingSystem() const;
    bool operatingSystemIsSet() const;
    void unsetOperating_system();

    void setOperatingSystem(const utility::string_t& value);

    /// <summary>
    /// User allowed to use this node
    /// </summary>
    utility::string_t getOwner() const;
    bool ownerIsSet() const;
    void unsetOwner();

    void setOwner(const utility::string_t& value);

    /// <summary>
    /// assigned partitions
    /// </summary>
    std::vector<utility::string_t>& getPartitions();
    bool partitionsIsSet() const;
    void unsetPartitions();

    void setPartitions(const std::vector<utility::string_t>& value);

    /// <summary>
    /// TCP port number of the slurmd
    /// </summary>
    int32_t getPort() const;
    bool portIsSet() const;
    void unsetPort();

    void setPort(int32_t value);

    /// <summary>
    /// configured MB of real memory on the node
    /// </summary>
    int32_t getRealMemory() const;
    bool realMemoryIsSet() const;
    void unsetReal_memory();

    void setRealMemory(int32_t value);

    /// <summary>
    /// reason for node being DOWN or DRAINING
    /// </summary>
    utility::string_t getReason() const;
    bool reasonIsSet() const;
    void unsetReason();

    void setReason(const utility::string_t& value);

    /// <summary>
    /// Time stamp when reason was set
    /// </summary>
    int32_t getReasonChangedAt() const;
    bool reasonChangedAtIsSet() const;
    void unsetReason_changed_at();

    void setReasonChangedAt(int32_t value);

    /// <summary>
    /// User that set the reason
    /// </summary>
    utility::string_t getReasonSetByUser() const;
    bool reasonSetByUserIsSet() const;
    void unsetReason_set_by_user();

    void setReasonSetByUser(const utility::string_t& value);

    /// <summary>
    /// timestamp of slurmd startup
    /// </summary>
    int64_t getSlurmdStartTime() const;
    bool slurmdStartTimeIsSet() const;
    void unsetSlurmd_start_time();

    void setSlurmdStartTime(int64_t value);

    /// <summary>
    /// total number of sockets per node
    /// </summary>
    int32_t getSockets() const;
    bool socketsIsSet() const;
    void unsetSockets();

    void setSockets(int32_t value);

    /// <summary>
    /// number of threads per core
    /// </summary>
    int32_t getThreads() const;
    bool threadsIsSet() const;
    void unsetThreads();

    void setThreads(int32_t value);

    /// <summary>
    /// configured MB of total disk in TMP_FS
    /// </summary>
    int32_t getTemporaryDisk() const;
    bool temporaryDiskIsSet() const;
    void unsetTemporary_disk();

    void setTemporaryDisk(int32_t value);

    /// <summary>
    /// arbitrary priority of node for scheduling
    /// </summary>
    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetWeight();

    void setWeight(int32_t value);

    /// <summary>
    /// TRES on node
    /// </summary>
    utility::string_t getTres() const;
    bool tresIsSet() const;
    void unsetTres();

    void setTres(const utility::string_t& value);

    /// <summary>
    /// TRES used on node
    /// </summary>
    utility::string_t getTresUsed() const;
    bool tresUsedIsSet() const;
    void unsetTres_used();

    void setTresUsed(const utility::string_t& value);

    /// <summary>
    /// TRES weight used on node
    /// </summary>
    double getTresWeighted() const;
    bool tresWeightedIsSet() const;
    void unsetTres_weighted();

    void setTresWeighted(double value);

    /// <summary>
    /// Slurmd version
    /// </summary>
    utility::string_t getSlurmdVersion() const;
    bool slurmdVersionIsSet() const;
    void unsetSlurmd_version();

    void setSlurmdVersion(const utility::string_t& value);

    /// <summary>
    /// Allocated CPUs
    /// </summary>
    int64_t getAllocCpus() const;
    bool allocCpusIsSet() const;
    void unsetAlloc_cpus();

    void setAllocCpus(int64_t value);

    /// <summary>
    /// Idle CPUs
    /// </summary>
    int64_t getIdleCpus() const;
    bool idleCpusIsSet() const;
    void unsetIdle_cpus();

    void setIdleCpus(int64_t value);

    /// <summary>
    /// Allocated memory (MB)
    /// </summary>
    int64_t getAllocMemory() const;
    bool allocMemoryIsSet() const;
    void unsetAlloc_memory();

    void setAllocMemory(int64_t value);


protected:
    utility::string_t m_Architecture;
    bool m_ArchitectureIsSet;
    utility::string_t m_Burstbuffer_network_address;
    bool m_Burstbuffer_network_addressIsSet;
    int32_t m_Boards;
    bool m_BoardsIsSet;
    int64_t m_Boot_time;
    bool m_Boot_timeIsSet;
    int32_t m_Cores;
    bool m_CoresIsSet;
    int32_t m_Cpu_binding;
    bool m_Cpu_bindingIsSet;
    int64_t m_Cpu_load;
    bool m_Cpu_loadIsSet;
    int32_t m_Free_memory;
    bool m_Free_memoryIsSet;
    int32_t m_Cpus;
    bool m_CpusIsSet;
    utility::string_t m_Features;
    bool m_FeaturesIsSet;
    utility::string_t m_Active_features;
    bool m_Active_featuresIsSet;
    utility::string_t m_Gres;
    bool m_GresIsSet;
    utility::string_t m_Gres_drained;
    bool m_Gres_drainedIsSet;
    utility::string_t m_Gres_used;
    bool m_Gres_usedIsSet;
    utility::string_t m_Mcs_label;
    bool m_Mcs_labelIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Next_state_after_reboot;
    bool m_Next_state_after_rebootIsSet;
    std::vector<utility::string_t> m_Next_state_after_reboot_flags;
    bool m_Next_state_after_reboot_flagsIsSet;
    utility::string_t m_Address;
    bool m_AddressIsSet;
    utility::string_t m_Hostname;
    bool m_HostnameIsSet;
    utility::string_t m_State;
    bool m_StateIsSet;
    std::vector<utility::string_t> m_State_flags;
    bool m_State_flagsIsSet;
    utility::string_t m_Operating_system;
    bool m_Operating_systemIsSet;
    utility::string_t m_Owner;
    bool m_OwnerIsSet;
    std::vector<utility::string_t> m_Partitions;
    bool m_PartitionsIsSet;
    int32_t m_Port;
    bool m_PortIsSet;
    int32_t m_Real_memory;
    bool m_Real_memoryIsSet;
    utility::string_t m_Reason;
    bool m_ReasonIsSet;
    int32_t m_Reason_changed_at;
    bool m_Reason_changed_atIsSet;
    utility::string_t m_Reason_set_by_user;
    bool m_Reason_set_by_userIsSet;
    int64_t m_Slurmd_start_time;
    bool m_Slurmd_start_timeIsSet;
    int32_t m_Sockets;
    bool m_SocketsIsSet;
    int32_t m_Threads;
    bool m_ThreadsIsSet;
    int32_t m_Temporary_disk;
    bool m_Temporary_diskIsSet;
    int32_t m_Weight;
    bool m_WeightIsSet;
    utility::string_t m_Tres;
    bool m_TresIsSet;
    utility::string_t m_Tres_used;
    bool m_Tres_usedIsSet;
    double m_Tres_weighted;
    bool m_Tres_weightedIsSet;
    utility::string_t m_Slurmd_version;
    bool m_Slurmd_versionIsSet;
    int64_t m_Alloc_cpus;
    bool m_Alloc_cpusIsSet;
    int64_t m_Idle_cpus;
    bool m_Idle_cpusIsSet;
    int64_t m_Alloc_memory;
    bool m_Alloc_memoryIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_37_node_H_ */
