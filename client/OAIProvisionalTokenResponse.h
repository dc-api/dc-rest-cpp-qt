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
 * OAIProvisionalTokenResponse.h
 *
 * 
 */

#ifndef OAIProvisionalTokenResponse_H
#define OAIProvisionalTokenResponse_H

#include <QJsonObject>

#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace dc_rest {

class OAIProvisionalTokenResponse : public OAIObject {
public:
    OAIProvisionalTokenResponse();
    OAIProvisionalTokenResponse(QString json);
    ~OAIProvisionalTokenResponse() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTokenType() const;
    void setTokenType(const QString &token_type);
    bool is_token_type_Set() const;
    bool is_token_type_Valid() const;

    QString getAccessToken() const;
    void setAccessToken(const QString &access_token);
    bool is_access_token_Set() const;
    bool is_access_token_Valid() const;

    qint32 getExpiresIn() const;
    void setExpiresIn(const qint32 &expires_in);
    bool is_expires_in_Set() const;
    bool is_expires_in_Valid() const;

    QString getScope() const;
    void setScope(const QString &scope);
    bool is_scope_Set() const;
    bool is_scope_Valid() const;

    QString getIdToken() const;
    void setIdToken(const QString &id_token);
    bool is_id_token_Set() const;
    bool is_id_token_Valid() const;

    QString getRefreshToken() const;
    void setRefreshToken(const QString &refresh_token);
    bool is_refresh_token_Set() const;
    bool is_refresh_token_Valid() const;

    QList<QString> getScopes() const;
    void setScopes(const QList<QString> &scopes);
    bool is_scopes_Set() const;
    bool is_scopes_Valid() const;

    qint32 getExpiresAtS() const;
    void setExpiresAtS(const qint32 &expires_at_s);
    bool is_expires_at_s_Set() const;
    bool is_expires_at_s_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_token_type;
    bool m_token_type_isSet;
    bool m_token_type_isValid;

    QString m_access_token;
    bool m_access_token_isSet;
    bool m_access_token_isValid;

    qint32 m_expires_in;
    bool m_expires_in_isSet;
    bool m_expires_in_isValid;

    QString m_scope;
    bool m_scope_isSet;
    bool m_scope_isValid;

    QString m_id_token;
    bool m_id_token_isSet;
    bool m_id_token_isValid;

    QString m_refresh_token;
    bool m_refresh_token_isSet;
    bool m_refresh_token_isValid;

    QList<QString> m_scopes;
    bool m_scopes_isSet;
    bool m_scopes_isValid;

    qint32 m_expires_at_s;
    bool m_expires_at_s_isSet;
    bool m_expires_at_s_isValid;
};

} // namespace dc_rest

Q_DECLARE_METATYPE(dc_rest::OAIProvisionalTokenResponse)

#endif // OAIProvisionalTokenResponse_H
