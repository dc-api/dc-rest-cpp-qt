/**
 * Discord HTTP API (Preview) - REST API Client
 * Preview of the Discord v10 HTTP API specification. See https://discord.com/developers/docs for more details.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 10
 * - **Modified**: 2025-07-01T06:33:49.033017897Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Discord HTTP API (Preview) service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

/*
 * OAICreate_channel_invite_request.h
 *
 * 
 */

#ifndef OAICreate_channel_invite_request_H
#define OAICreate_channel_invite_request_H

#include <QJsonObject>

#include "OAICreateGroupDMInviteRequest.h"
#include "OAICreateGuildInviteRequest.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAICreate_channel_invite_request : public OAIObject {
public:
    OAICreate_channel_invite_request();
    OAICreate_channel_invite_request(QString json);
    ~OAICreate_channel_invite_request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getMaxAge() const;
    void setMaxAge(const qint32 &max_age);
    bool is_max_age_Set() const;
    bool is_max_age_Valid() const;

    bool isTemporary() const;
    void setTemporary(const bool &temporary);
    bool is_temporary_Set() const;
    bool is_temporary_Valid() const;

    qint32 getMaxUses() const;
    void setMaxUses(const qint32 &max_uses);
    bool is_max_uses_Set() const;
    bool is_max_uses_Valid() const;

    bool isUnique() const;
    void setUnique(const bool &unique);
    bool is_unique_Set() const;
    bool is_unique_Valid() const;

    QString getTargetUserId() const;
    void setTargetUserId(const QString &target_user_id);
    bool is_target_user_id_Set() const;
    bool is_target_user_id_Valid() const;

    QString getTargetApplicationId() const;
    void setTargetApplicationId(const QString &target_application_id);
    bool is_target_application_id_Set() const;
    bool is_target_application_id_Valid() const;

    qint32 getTargetType() const;
    void setTargetType(const qint32 &target_type);
    bool is_target_type_Set() const;
    bool is_target_type_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_max_age;
    bool m_max_age_isSet;
    bool m_max_age_isValid;

    bool m_temporary;
    bool m_temporary_isSet;
    bool m_temporary_isValid;

    qint32 m_max_uses;
    bool m_max_uses_isSet;
    bool m_max_uses_isValid;

    bool m_unique;
    bool m_unique_isSet;
    bool m_unique_isValid;

    QString m_target_user_id;
    bool m_target_user_id_isSet;
    bool m_target_user_id_isValid;

    QString m_target_application_id;
    bool m_target_application_id_isSet;
    bool m_target_application_id_isValid;

    qint32 m_target_type;
    bool m_target_type_isSet;
    bool m_target_type_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAICreate_channel_invite_request)

#endif // OAICreate_channel_invite_request_H
