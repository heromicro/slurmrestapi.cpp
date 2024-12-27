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
 * V0_0_39_license.h
 *
 * 
 */

#ifndef HM_SLURM_CLIENT_MODEL_V0_0_39_license_H_
#define HM_SLURM_CLIENT_MODEL_V0_0_39_license_H_


#include "slurmrestapi/ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace hm {
namespace slurm {
namespace client {
namespace model {



/// <summary>
/// 
/// </summary>
class  V0_0_39_license
    : public ModelBase
{
public:
    V0_0_39_license();
    virtual ~V0_0_39_license();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// V0_0_39_license members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLicenseName() const;
    bool licenseNameIsSet() const;
    void unsetLicenseName();

    void setLicenseName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsetTotal();

    void setTotal(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getUsed() const;
    bool usedIsSet() const;
    void unsetUsed();

    void setUsed(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getFree() const;
    bool freeIsSet() const;
    void unsetFree();

    void setFree(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    bool isRemote() const;
    bool remoteIsSet() const;
    void unsetRemote();

    void setRemote(bool value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getReserved() const;
    bool reservedIsSet() const;
    void unsetReserved();

    void setReserved(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getLastConsumed() const;
    bool lastConsumedIsSet() const;
    void unsetLastConsumed();

    void setLastConsumed(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getLastDeficit() const;
    bool lastDeficitIsSet() const;
    void unsetLastDeficit();

    void setLastDeficit(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getLastUpdate() const;
    bool lastUpdateIsSet() const;
    void unsetLastUpdate();

    void setLastUpdate(int64_t value);


protected:
    utility::string_t m_LicenseName;
    bool m_LicenseNameIsSet;
    int32_t m_Total;
    bool m_TotalIsSet;
    int32_t m_Used;
    bool m_UsedIsSet;
    int32_t m_Free;
    bool m_FreeIsSet;
    bool m_Remote;
    bool m_RemoteIsSet;
    int32_t m_Reserved;
    bool m_ReservedIsSet;
    int32_t m_LastConsumed;
    bool m_LastConsumedIsSet;
    int32_t m_LastDeficit;
    bool m_LastDeficitIsSet;
    int64_t m_LastUpdate;
    bool m_LastUpdateIsSet;
};


}
}
}
}

#endif /* HM_SLURM_CLIENT_MODEL_V0_0_39_license_H_ */
