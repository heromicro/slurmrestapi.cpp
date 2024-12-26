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

/*
 * V0_0_41_openapi_reservation_resp_reservations_inner.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_reservation_resp_reservations_inner_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_reservation_resp_reservations_inner_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_41_openapi_reservation_resp_reservations_inner_purge_completed.h"
#include "slurmrestapi/model/V0_0_41_openapi_reservation_resp_reservations_inner_core_specializations_inner.h"
#include <cpprest/details/basic_types.h>
#include "slurmrestapi/model/V0_0_41_openapi_reservation_resp_reservations_inner_start_time.h"
#include "slurmrestapi/model/V0_0_41_openapi_reservation_resp_reservations_inner_watts.h"
#include "slurmrestapi/model/V0_0_41_openapi_reservation_resp_reservations_inner_end_time.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_41_openapi_reservation_resp_reservations_inner_core_specializations_inner;
class V0_0_41_openapi_reservation_resp_reservations_inner_end_time;
class V0_0_41_openapi_reservation_resp_reservations_inner_purge_completed;
class V0_0_41_openapi_reservation_resp_reservations_inner_start_time;
class V0_0_41_openapi_reservation_resp_reservations_inner_watts;


/// <summary>
/// 
/// </summary>
class  V0_0_41_openapi_reservation_resp_reservations_inner
    : public ModelBase
{
public:
    V0_0_41_openapi_reservation_resp_reservations_inner();
    virtual ~V0_0_41_openapi_reservation_resp_reservations_inner();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_41_openapi_reservation_resp_reservations_inner members

    /// <summary>
    /// Comma separated list of permitted accounts
    /// </summary>
    utility::string_t getAccounts() const;
    bool accountsIsSet() const;
    void unsetAccounts();

    void setAccounts(const utility::string_t& value);

    /// <summary>
    /// BurstBuffer
    /// </summary>
    utility::string_t getBurstBuffer() const;
    bool burstBufferIsSet() const;
    void unsetBurst_buffer();

    void setBurstBuffer(const utility::string_t& value);

    /// <summary>
    /// CoreCnt
    /// </summary>
    int32_t getCoreCount() const;
    bool coreCountIsSet() const;
    void unsetCore_count();

    void setCoreCount(int32_t value);

    /// <summary>
    /// Reserved cores specification
    /// </summary>
    std::vector<std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_core_specializations_inner>>& getCoreSpecializations();
    bool coreSpecializationsIsSet() const;
    void unsetCore_specializations();

    void setCoreSpecializations(const std::vector<std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_core_specializations_inner>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_end_time> getEndTime() const;
    bool endTimeIsSet() const;
    void unsetEnd_time();

    void setEndTime(const std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_end_time>& value);

    /// <summary>
    /// Features
    /// </summary>
    utility::string_t getFeatures() const;
    bool featuresIsSet() const;
    void unsetFeatures();

    void setFeatures(const utility::string_t& value);

    /// <summary>
    /// Flags associated with the reservation
    /// </summary>
    std::vector<utility::string_t>& getFlags();
    bool flagsIsSet() const;
    void unsetFlags();

    void setFlags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Groups
    /// </summary>
    utility::string_t getGroups() const;
    bool groupsIsSet() const;
    void unsetGroups();

    void setGroups(const utility::string_t& value);

    /// <summary>
    /// Licenses
    /// </summary>
    utility::string_t getLicenses() const;
    bool licensesIsSet() const;
    void unsetLicenses();

    void setLicenses(const utility::string_t& value);

    /// <summary>
    /// MaxStartDelay in seconds
    /// </summary>
    int32_t getMaxStartDelay() const;
    bool maxStartDelayIsSet() const;
    void unsetMax_start_delay();

    void setMaxStartDelay(int32_t value);

    /// <summary>
    /// ReservationName
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// NodeCnt
    /// </summary>
    int32_t getNodeCount() const;
    bool nodeCountIsSet() const;
    void unsetNode_count();

    void setNodeCount(int32_t value);

    /// <summary>
    /// Nodes
    /// </summary>
    utility::string_t getNodeList() const;
    bool nodeListIsSet() const;
    void unsetNode_list();

    void setNodeList(const utility::string_t& value);

    /// <summary>
    /// PartitionName
    /// </summary>
    utility::string_t getPartition() const;
    bool partitionIsSet() const;
    void unsetPartition();

    void setPartition(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_purge_completed> getPurgeCompleted() const;
    bool purgeCompletedIsSet() const;
    void unsetPurge_completed();

    void setPurgeCompleted(const std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_purge_completed>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_start_time> getStartTime() const;
    bool startTimeIsSet() const;
    void unsetStart_time();

    void setStartTime(const std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_start_time>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_watts> getWatts() const;
    bool wattsIsSet() const;
    void unsetWatts();

    void setWatts(const std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_watts>& value);

    /// <summary>
    /// Comma separated list of required TRES
    /// </summary>
    utility::string_t getTres() const;
    bool tresIsSet() const;
    void unsetTres();

    void setTres(const utility::string_t& value);

    /// <summary>
    /// Comma separated list of permitted users
    /// </summary>
    utility::string_t getUsers() const;
    bool usersIsSet() const;
    void unsetUsers();

    void setUsers(const utility::string_t& value);


protected:
    utility::string_t m_Accounts;
    bool m_AccountsIsSet;
    utility::string_t m_Burst_buffer;
    bool m_Burst_bufferIsSet;
    int32_t m_Core_count;
    bool m_Core_countIsSet;
    std::vector<std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_core_specializations_inner>> m_Core_specializations;
    bool m_Core_specializationsIsSet;
    std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_end_time> m_End_time;
    bool m_End_timeIsSet;
    utility::string_t m_Features;
    bool m_FeaturesIsSet;
    std::vector<utility::string_t> m_Flags;
    bool m_FlagsIsSet;
    utility::string_t m_Groups;
    bool m_GroupsIsSet;
    utility::string_t m_Licenses;
    bool m_LicensesIsSet;
    int32_t m_Max_start_delay;
    bool m_Max_start_delayIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    int32_t m_Node_count;
    bool m_Node_countIsSet;
    utility::string_t m_Node_list;
    bool m_Node_listIsSet;
    utility::string_t m_Partition;
    bool m_PartitionIsSet;
    std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_purge_completed> m_Purge_completed;
    bool m_Purge_completedIsSet;
    std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_start_time> m_Start_time;
    bool m_Start_timeIsSet;
    std::shared_ptr<V0_0_41_openapi_reservation_resp_reservations_inner_watts> m_Watts;
    bool m_WattsIsSet;
    utility::string_t m_Tres;
    bool m_TresIsSet;
    utility::string_t m_Users;
    bool m_UsersIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_41_openapi_reservation_resp_reservations_inner_H_ */