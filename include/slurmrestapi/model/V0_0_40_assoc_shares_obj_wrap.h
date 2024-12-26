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
 * V0_0_40_assoc_shares_obj_wrap.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_assoc_shares_obj_wrap_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_assoc_shares_obj_wrap_H_


#include "slurmrestapi/ModelBase.h"

#include "slurmrestapi/model/V0_0_40_assoc_shares_obj_wrap_fairshare.h"
#include "slurmrestapi/model/V0_0_40_uint32_no_val.h"
#include "slurmrestapi/model/V0_0_40_float64_no_val.h"
#include "slurmrestapi/model/V0_0_40_assoc_shares_obj_wrap_tres.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

class V0_0_40_float64_no_val;
class V0_0_40_uint32_no_val;
class V0_0_40_assoc_shares_obj_wrap_tres;
class V0_0_40_assoc_shares_obj_wrap_fairshare;


/// <summary>
/// 
/// </summary>
class  V0_0_40_assoc_shares_obj_wrap
    : public ModelBase
{
public:
    V0_0_40_assoc_shares_obj_wrap();
    virtual ~V0_0_40_assoc_shares_obj_wrap();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_40_assoc_shares_obj_wrap members

    /// <summary>
    /// Association ID
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(int32_t value);

    /// <summary>
    /// Cluster name
    /// </summary>
    utility::string_t getCluster() const;
    bool clusterIsSet() const;
    void unsetCluster();

    void setCluster(const utility::string_t& value);

    /// <summary>
    /// Share name
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// Parent name
    /// </summary>
    utility::string_t getParent() const;
    bool parentIsSet() const;
    void unsetParent();

    void setParent(const utility::string_t& value);

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
    std::shared_ptr<V0_0_40_float64_no_val> getSharesNormalized() const;
    bool sharesNormalizedIsSet() const;
    void unsetShares_normalized();

    void setSharesNormalized(const std::shared_ptr<V0_0_40_float64_no_val>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_uint32_no_val> getShares() const;
    bool sharesIsSet() const;
    void unsetShares();

    void setShares(const std::shared_ptr<V0_0_40_uint32_no_val>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_assoc_shares_obj_wrap_tres> getTres() const;
    bool tresIsSet() const;
    void unsetTres();

    void setTres(const std::shared_ptr<V0_0_40_assoc_shares_obj_wrap_tres>& value);

    /// <summary>
    /// Effective, normalized usage
    /// </summary>
    double getEffectiveUsage() const;
    bool effectiveUsageIsSet() const;
    void unsetEffective_usage();

    void setEffectiveUsage(double value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_float64_no_val> getUsageNormalized() const;
    bool usageNormalizedIsSet() const;
    void unsetUsage_normalized();

    void setUsageNormalized(const std::shared_ptr<V0_0_40_float64_no_val>& value);

    /// <summary>
    /// Measure of tresbillableunits usage
    /// </summary>
    int64_t getUsage() const;
    bool usageIsSet() const;
    void unsetUsage();

    void setUsage(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<V0_0_40_assoc_shares_obj_wrap_fairshare> getFairshare() const;
    bool fairshareIsSet() const;
    void unsetFairshare();

    void setFairshare(const std::shared_ptr<V0_0_40_assoc_shares_obj_wrap_fairshare>& value);

    /// <summary>
    /// User or account association
    /// </summary>
    std::vector<utility::string_t>& getType();
    bool typeIsSet() const;
    void unsetType();

    void setType(const std::vector<utility::string_t>& value);


protected:
    int32_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Cluster;
    bool m_ClusterIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    utility::string_t m_Parent;
    bool m_ParentIsSet;
    utility::string_t m_Partition;
    bool m_PartitionIsSet;
    std::shared_ptr<V0_0_40_float64_no_val> m_Shares_normalized;
    bool m_Shares_normalizedIsSet;
    std::shared_ptr<V0_0_40_uint32_no_val> m_Shares;
    bool m_SharesIsSet;
    std::shared_ptr<V0_0_40_assoc_shares_obj_wrap_tres> m_Tres;
    bool m_TresIsSet;
    double m_Effective_usage;
    bool m_Effective_usageIsSet;
    std::shared_ptr<V0_0_40_float64_no_val> m_Usage_normalized;
    bool m_Usage_normalizedIsSet;
    int64_t m_Usage;
    bool m_UsageIsSet;
    std::shared_ptr<V0_0_40_assoc_shares_obj_wrap_fairshare> m_Fairshare;
    bool m_FairshareIsSet;
    std::vector<utility::string_t> m_Type;
    bool m_TypeIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_V0_0_40_assoc_shares_obj_wrap_H_ */
