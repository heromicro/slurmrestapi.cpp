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
 * V0_0_40_assoc.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_40_assoc_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_40_assoc_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_uint32_no_val.h"
#include "slurmrestapi/model/V0_0_40_assoc_short.h"
#include "slurmrestapi/model/V0_0_40_assoc_max.h"
#include "slurmrestapi/model/V0_0_40_accounting.h"
#include "slurmrestapi/model/V0_0_40_assoc_min.h"
#include <cpprest/details/basic_types.h>
#include "slurmrestapi/model/V0_0_40_assoc_default.h"
#include <vector>

namespace hm {
namespace slurm {
namespace client {
namespace model {

class V0_0_40_accounting;
class V0_0_40_assoc_default;
class V0_0_40_assoc_max;
class V0_0_40_assoc_short;
class V0_0_40_assoc_min;
class V0_0_40_uint32_no_val;


/// <summary>
/// 
/// </summary>
class  V0_0_40_assoc
    : public ModelBase
{
public:
    V0_0_40_assoc();
    virtual ~V0_0_40_assoc();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_assoc members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<V0_0_40_accounting>>& getAccounting();
    bool accountingIsSet() const;
    void unsetAccounting();

    void setAccounting(const std::vector<std::shared_ptr<V0_0_40_accounting>>& value);

    /// <summary>
    /// Account
    /// </summary>
    utility::string_t getAccount() const;
    bool accountIsSet() const;
    void unsetAccount();

    void setAccount(const utility::string_t& value);

    /// <summary>
    /// Cluster name
    /// </summary>
    utility::string_t getCluster() const;
    bool clusterIsSet() const;
    void unsetCluster();

    void setCluster(const utility::string_t& value);

    /// <summary>
    /// Arbitrary comment
    /// </summary>
    utility::string_t getComment() const;
    bool commentIsSet() const;
    void unsetComment();

    void setComment(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_assoc_default> getRDefault() const;
    bool rDefaultIsSet() const;
    void unsetr_default();

    void setRDefault(const std::shared_ptr<V0_0_40_assoc_default>& value);

    /// <summary>
    /// Flags on the association
    /// </summary>
    std::vector<utility::string_t>& getFlags();
    bool flagsIsSet() const;
    void unsetFlags();

    void setFlags(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_assoc_max> getMax() const;
    bool maxIsSet() const;
    void unsetMax();

    void setMax(const std::shared_ptr<V0_0_40_assoc_max>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_assoc_short> getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const std::shared_ptr<V0_0_40_assoc_short>& value);

    /// <summary>
    /// Is default association for user
    /// </summary>
    bool isIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetIs_default();

    void setIsDefault(bool value);

    /// <summary>
    /// Complete path up the hierarchy to the root association
    /// </summary>
    utility::string_t getLineage() const;
    bool lineageIsSet() const;
    void unsetLineage();

    void setLineage(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_assoc_min> getMin() const;
    bool minIsSet() const;
    void unsetMin();

    void setMin(const std::shared_ptr<V0_0_40_assoc_min>& value);

    /// <summary>
    /// Name of parent account
    /// </summary>
    utility::string_t getParentAccount() const;
    bool parentAccountIsSet() const;
    void unsetParent_account();

    void setParentAccount(const utility::string_t& value);

    /// <summary>
    /// Partition name
    /// </summary>
    utility::string_t getPartition() const;
    bool partitionIsSet() const;
    void unsetPartition();

    void setPartition(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_uint32_no_val> getPriority() const;
    bool priorityIsSet() const;
    void unsetPriority();

    void setPriority(const std::shared_ptr<V0_0_40_uint32_no_val>& value);

    /// <summary>
    /// List of QOS names
    /// </summary>
    std::vector<utility::string_t>& getQos();
    bool qosIsSet() const;
    void unsetQos();

    void setQos(const std::vector<utility::string_t>& value);

    /// <summary>
    /// Allocated shares used for fairshare calculation
    /// </summary>
    int32_t getSharesRaw() const;
    bool sharesRawIsSet() const;
    void unsetShares_raw();

    void setSharesRaw(int32_t value);

    /// <summary>
    /// User name
    /// </summary>
    utility::string_t getUser() const;
    bool userIsSet() const;
    void unsetUser();

    void setUser(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<V0_0_40_accounting>> m_Accounting;
    bool m_AccountingIsSet;
    utility::string_t m_Account;
    bool m_AccountIsSet;
    utility::string_t m_Cluster;
    bool m_ClusterIsSet;
    utility::string_t m_Comment;
    bool m_CommentIsSet;
    std::shared_ptr<V0_0_40_assoc_default> m_r_default;
    bool m_r_defaultIsSet;
    std::vector<utility::string_t> m_Flags;
    bool m_FlagsIsSet;
    std::shared_ptr<V0_0_40_assoc_max> m_Max;
    bool m_MaxIsSet;
    std::shared_ptr<V0_0_40_assoc_short> m_Id;
    bool m_IdIsSet;
    bool m_Is_default;
    bool m_Is_defaultIsSet;
    utility::string_t m_Lineage;
    bool m_LineageIsSet;
    std::shared_ptr<V0_0_40_assoc_min> m_Min;
    bool m_MinIsSet;
    utility::string_t m_Parent_account;
    bool m_Parent_accountIsSet;
    utility::string_t m_Partition;
    bool m_PartitionIsSet;
    std::shared_ptr<V0_0_40_uint32_no_val> m_Priority;
    bool m_PriorityIsSet;
    std::vector<utility::string_t> m_Qos;
    bool m_QosIsSet;
    int32_t m_Shares_raw;
    bool m_Shares_rawIsSet;
    utility::string_t m_User;
    bool m_UserIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_40_assoc_H_ */
